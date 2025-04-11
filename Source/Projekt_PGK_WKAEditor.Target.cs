// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Projekt_PGK_WKAEditorTarget : TargetRules
{
	public Projekt_PGK_WKAEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Projekt_PGK_WKA", "Projekt_PGK_WKARuntime" } );
	}
}
