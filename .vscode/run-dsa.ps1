param([Parameter(Mandatory = $true)][string]$SourceFile)

$source = (Resolve-Path -LiteralPath $SourceFile).Path
$folder = Split-Path -Parent $source
$workspace = (Resolve-Path (Join-Path $PSScriptRoot "..")).Path
$binFolder = Join-Path $workspace "bin"
New-Item -ItemType Directory -Force -Path $binFolder | Out-Null
$relativeSource = $source.Substring($workspace.Length).TrimStart([char[]]@('\', '/'))
$executableName = ([System.IO.Path]::ChangeExtension($relativeSource, ".exe") -replace '[\\/]', '_')
$executable = Join-Path $binFolder $executableName
# One shared input/output pair for every DSA question in this workspace.
$inputFile = Join-Path $workspace "input.txt"
$outputFile = Join-Path $workspace "output.txt"

# Recompile only after the C++ source changes.  This makes repeated input tests fast.
$needsCompile = -not (Test-Path -LiteralPath $executable)
if (-not $needsCompile) {
    $needsCompile = (Get-Item -LiteralPath $source).LastWriteTimeUtc -gt
        (Get-Item -LiteralPath $executable).LastWriteTimeUtc
}

if ($needsCompile) {
    & "C:\MinGW\bin\g++.exe" $source "-o" $executable
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}

Get-Content -Raw -LiteralPath $inputFile | & $executable | Set-Content -Encoding ascii -LiteralPath $outputFile
