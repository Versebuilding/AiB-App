const lerp = (x, y, a) => x * (1 - a) + y * a;

let selectDom = document.getElementById("micselect");
selectDom.innerHTML = "<option>!ML5 AUTOMATICALLY USES (ONLY) DEFAULT MIC!</option>"

let detectionValues = document.getElementById("detectionValues");


let classifier;
// Label
let label = 'listening...';
// Teachable Machine model URL:
let soundModel = 'https://teachablemachine.withgoogle.com/models/gif6heiM-/';

var object = {

};

const lookup = {
	"Background Noise": "no",
	"exhale": "out",
	"inhale": "in"
};

// The model recognizing a sound will trigger this event
function gotResult(error, results)
{
	if (error) {
		console.error(error);
		return;
	}

	let row1 = "<tr>";
	let row2 = "<tr>";

	results.sort(function(a, b) { return a.label.localeCompare(b.label); });

	for (let index = 0; index < results.length; index++) {
		const con = results[index].confidence;
		const lab = results[index].label;
		const name = lookup[lab];

		if (name != undefined)
		{
			if (object[name] != undefined)
			{
				object[name] = con * 0.333 + object[name] * 0.667;
			}
			else
				object[name] = con;
		}

		

		row1 += "<th>" + lab + "</th>";
		row2 += "<th style=\"background-color:rgb(" + Math.round(255.0 * (1 - con)) + ", " + Math.round(255.0 * (con)) + ", 0)\">" +  (Math.round(con * 100)/100) + "</th>";
	}

	detectionValues.innerHTML = row1 + "</tr>" + row2 + "</tr>";

	// Proxy inhale with the mic volume...
	object["db"] = lerp(-35.0, -10.0, object["in"]);
	emitUIInteraction(object);
}

classifier = ml5.soundClassifier(soundModel + 'model.json');
classifier.classify(gotResult);




/*

// more documentation available at
// https://github.com/tensorflow/tfjs-models/tree/master/speech-commands
// the link to your model provided by Teachable Machine export panel
const URL = "./my_model/";
async function createModel() {
	const checkpointURL = URL + "model.json"; // model topology
	const metadataURL = URL + "metadata.json"; // model metadata
	const recognizer = speechCommands.create(
		"BROWSER_FFT", // fourier transform type, not useful to change
		undefined, // speech commands vocabulary feature, not useful for your models
		checkpointURL,
		metadataURL);
	// check that model and metadata are loaded via HTTPS requests.
	await recognizer.ensureModelLoaded();
	return recognizer;
}
async function init() {
	const recognizer = await createModel();
	const classLabels = recognizer.wordLabels(); // get class labels
	const labelContainer = document.getElementById("label-container");
	for (let i = 0; i < classLabels.length; i++) {
		labelContainer.appendChild(document.createElement("div"));
	}
	// listen() takes two arguments:
	// 1. A callback function that is invoked anytime a word is recognized.
	// 2. A configuration object with adjustable fields
	recognizer.listen(result => {
		const scores = result.scores; // probability of prediction for each class
		// render the probability scores per class
		for (let i = 0; i < classLabels.length; i++) {
			const classPrediction = classLabels[i] + ": " + result.scores[i].toFixed(2);
			labelContainer.childNodes[i].innerHTML = classPrediction;
		}
	}, {
		includeSpectrogram: true, // in case listen should return result.spectrogram
		probabilityThreshold: 0.75,
		invokeCallbackOnNoiseAndUnknown: true,
		overlapFactor: 0.50 // probably want between 0.5 and 0.75. More info in README
	});
	// Stop the recognition in 5 seconds.
	// setTimeout(() => recognizer.stopListening(), 5000);
}
*/