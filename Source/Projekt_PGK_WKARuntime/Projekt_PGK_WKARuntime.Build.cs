using UnrealBuildTool;

public class Projekt_PGK_WKARuntime : ModuleRules
{
    public Projekt_PGK_WKARuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "AnimationCore",
            "AnimGraphRuntime",
            "Projekt_PGK_WKA"
        });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[]
            {
                "AnimGraph",
                "BlueprintGraph",
                "KismetCompiler",
                "GraphEditor",
                "PropertyEditor",
                "EditorStyle",
                "UnrealEd" //  tylko w edytorze
            });
        }
    }
}
