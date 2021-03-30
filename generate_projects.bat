:: Copyright 2020-2021 Aumoa.lib. All right reserved.

@echo off

echo -
echo ---------- Generate Game Projects ----------
echo -

SET /p EngineRoot=Engine Root Directory: 
SET /p ProjectName=Project Name: 

%EngineRoot%\Binaries\AutomationTool\AutomationTool.exe GenerateGameSolution %EngineRoot% . %ProjectName%

pause