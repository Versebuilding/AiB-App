# Start-Job -ScriptBlock { & cmd.exe /c "lt --port 8079 --subdomain versebuilding-nevs-cpu" }
# Start-Process cmd -Argument "/c lt --port 8079 --subdomain versebuilding-nevs-cpu"

#Start-Job -ScriptBlock { & cmd.exe /c "lt --port 8079 --subdomain versebuilding-nevs-cpu" } -Name "LocalTunnel"
#Start-Job -ScriptBlock { & cmd.exe /c "lt --port 8079 --subdomain versebuilding-nevs-cpu" } -Name "LocalTunnel"


$ProcessExe = "cmd.exe"
$Arguments = "/c lt --port 8079 --subdomain versebuilding-nevs-cpu"
Write-Output "Running: $ProcessExe $Arguments"
Start-Process -FilePath $ProcessExe -ArgumentList "$Arguments" -NoNewWindow

# Start-Sleep -Seconds 1.5
# Write-Output "Printing after start"
# & ./Start_SignallingServer.ps1