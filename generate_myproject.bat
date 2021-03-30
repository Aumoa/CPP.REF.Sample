:: Copyright 2020-2021 Aumoa.lib. All right reserved.

@echo off

echo -
echo ---------- Generate Game Projects ----------
echo -

SET EngineRoot=G:\CPP.REF
SET ProjectName=Sample

%EngineRoot%\Binaries\AutomationTool\AutomationTool.exe GenerateGameSolution %EngineRoot% . %ProjectName%

pause