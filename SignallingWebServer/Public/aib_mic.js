var mWorker =
{
	devices: [],
	perm: "denied",
}

var selectDom = document.getElementById("micselect");

var UpdateDevices = function()
{
	navigator.mediaDevices.enumerateDevices().then(function(devices)
	{
		selectDom.innerHTML = "<option>None</option>";

		devices = devices.filter(function(d)
		{
			console.log("Device:: label: " + d.label + ", id: " + d.deviceId + ", kind: " + d.kind + ", group: " + d.groupId);
			return d.kind == 'audioinput';
		});

		var newDevs = [];
		devices.forEach(function(device)
		{
			let dev = mWorker.devices.find(function(x) { return x.label == device.label });
			if (dev == null)
				dev = {
					deviceId: device.deviceId,
					label: device.label,
					active: false,
					db: -80.0,
					stream: null,
					recorder: null,
					audioContext: null,
					microphone_stream: null
				};

			newDevs.push(dev);

			console.log("Loaded Device: " + device.label);
			selectDom.innerHTML += "<option>" + device.label + "</option>";

		});

		mWorker.devices = newDevs;
	});
}

var MicrophoneWebGL =
{
	/**
	 * Initializes the mWorker permissions and assigns a callback
	 * for whenever permissions change.
	 */
	InitPermissions: function()
	{
		navigator.permissions.query({name: 'microphone'})
			.then(function (result)
		{
			mWorker.perm = result.state;
			if (!(result.state === 'granted'))
			{
				console.log("Permissions not set up. Doing noop request.");
				navigator.getUserMedia({audio: true}, function(){}, function(){});
			}

			result.onchange = function()
			{
				mWorker.perm = this.state;
				UpdateDevices();
				console.log("Mic permissions updated: " + this.state);
			};

			console.log("Mic permissions Initialized: " + mWorker.perm);
		});
	},

	// HasPermission: function() { return mWorker.perm == "granted"; },
	// PollPermission: function() { return mWorker.perm; },

	InitDevices: function()
	{
		selectDom.onchange = function()
		{
			for (let index = 0; index < mWorker.devices.length; index++) {
				MicrophoneWebGL.WebGL_End(index);
			}

			if (selectDom.selectedIndex - 1 >= 0)
				MicrophoneWebGL.WebGL_Start(selectDom.selectedIndex - 1, [ 0, 2048, 14400, 1, 2048 ])
		};

		navigator.mediaDevices.ondevicechange = UpdateDevices;
		UpdateDevices();
	},

	GetDeviceNameAtIndex: function(index)
	{
		console.log("Returning device name '" + mWorker.devices[index].label + "' at index '" + index + "'");

		let name = mWorker.devices[index].label;
		let bufsize = lengthBytesUTF8(name) + 1;
		let buff = _malloc(bufsize);
		stringToUTF8(name, buff, bufsize);
		return buff;
	},

	GetDeviceCount: function()
	{
		console.log("Returning device count '" + mWorker.devices.length);
		return mWorker.devices.length;
	},

	/**
	 * @param deviceName The name of the device that will be used for the buff
	 */
	WebGL_Start: function(deviceIndex, varPtr)
	{
		console.log("Entered WebGL_Start()");
		var device = mWorker.devices[deviceIndex];

		device.s_variables = varPtr;

		console.log("Put: " + mWorker.devices[deviceIndex].s_variables[0]);
		console.log("BufferSize: " + mWorker.devices[deviceIndex].s_variables[1]);
		console.log("Frequence: " + mWorker.devices[deviceIndex].s_variables[2]);
		console.log("Channels: " + mWorker.devices[deviceIndex].s_variables[3]);
		console.log("Clip Size: " + mWorker.devices[deviceIndex].s_variables[4]);

		console.log("Ptrs set up..");
		// This should be handeled by Unity, but check here in case.
		if(device.active) this.WebGL_Stop(deviceName);

		navigator.getUserMedia = 
			navigator.getUserMedia
			|| navigator.webkitGetUserMedia
			|| navigator.mozGetUserMedia
			|| navigator.msGetUserMedia;

		if (!navigator.getUserMedia)
		{
			alert("Javascript 'getUserMedia' is not supported by browser. You will not be able to use a Microphone to play the game.");
			device.active = false;
			device.s_variables[0] = -1; // Error code for initialization!
			return;
		}

		console.log("About to get media..");
		navigator.mediaDevices.getUserMedia({audio: { deviceId: device.deviceId }, video: false})
			.then(function(stream)
		{
			device.stream = stream; // we need to keep this alive or the gc kills it on Firefox

			// Match Unity's. Personal testing shows it default to 48000
			device.audioContext = new AudioContext({ "sampleRate": device.s_variables[2] });
			device.microphone_stream = device.audioContext.createMediaStreamSource(stream);

			if (device.audioContext.createScriptProcessor) 
			{
				device.recorder = device.audioContext.createScriptProcessor(device.s_variables[1], device.s_variables[3], 1);
			} 
			else 
			{
				device.recorder = device.audioContext.createJavaScriptNode(device.s_variables[1], device.s_variables[3], 1);
			}

			device.recorder.onaudioprocess = function (e) 
			{
				let indata = e.inputBuffer.getChannelData(0);

				let sum = 0;
				for (let i = 0; i < indata.length; i++)
				{
					sum += Math.pow(indata[i], 2);
				}

				// RMS is the square root of the average value of the samples.
				let rmsValue = Math.sqrt(sum / indata.length);
				let dbValue = 20 * Math.log10(rmsValue / 0.1);

				device.db = dbValue;

				if (device.db < -80.0)
				{
					device.db = -80.0;
				}

				//console.log(device.db);

				emitUIInteraction({ 'db': device.db });
			}

			// we connect the recorder with the input stream
			device.microphone_stream.connect(device.recorder);
			device.recorder.connect(device.audioContext.destination)
		},
		function(e)
		{
			alert("navigator.getUserMedia errorCallback: " + e);
			device.active = false;
			device.s_variables[0] = -2; // Error code for navigator.getUserMedia errorCallback!
		});
	},

	WebGL_End: function(deviceIndex)
	{
		var device = mWorker.devices[deviceIndex];

		if (device == null)
		{
			alert("Audio device with that name not found.");
			return;
		}

		if(!device.active)
			return;
			
		device.recorder.disconnect(device.audioContext.destination);
		device.microphone_stream.disconnect(device.recorder);
		device.active = false;

		device.s_variables[0] = 0;

		device.audioContext = null;
		device.recorder = null;
		device.microphone_stream = null;
	}
}



MicrophoneWebGL.InitPermissions();
MicrophoneWebGL.InitDevices();