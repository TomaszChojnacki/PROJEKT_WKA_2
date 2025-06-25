using UnrealBuildTool;

public class Projekt_PGK_WKA : ModuleRules
{
    public Projekt_PGK_WKA(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core", "CoreUObject", "Engine", "InputCore",
            "AnimGraphRuntime", "Slate", "SlateCore", "UMG", "RHI", "RenderCore", "DeveloperSettings"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "CoreUObject", "Engine", "Slate", "SlateCore",
            "AnimGraphRuntime"
        });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[]
            {
                "AnimGraph",
                "BlueprintGraph",
                "GraphEditor",
                "PropertyEditor",
                "EditorStyle",
                "UnrealEd" // tylko w edytorze
            });
        }
    }
}
