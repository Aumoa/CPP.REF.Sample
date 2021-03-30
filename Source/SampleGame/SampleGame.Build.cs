// Copyright 2020-2021 Aumoa.lib. All right reserved.

public class SampleGameBuild : BuildRules
{
    public SampleGameBuild()
    {
        CppStandardVersion = CppVersion.Cpp20;
        bLaunch = true;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "Game",
        });
    }
}