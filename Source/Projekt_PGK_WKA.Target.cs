// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Projekt_PGK_WKATarget : TargetRules
{
	public Projekt_PGK_WKATarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
        ExtraModuleNames.AddRange(new string[] { "Projekt_PGK_WKA"});
        //ExtraModuleNames.AddRange( new string[] { "Projekt_PGK_WKA", "Projekt_PGK_WKARuntime" } );
	}
}
