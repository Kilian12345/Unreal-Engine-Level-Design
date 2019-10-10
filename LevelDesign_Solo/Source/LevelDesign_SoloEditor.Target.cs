// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class LevelDesign_SoloEditorTarget : TargetRules
{
	public LevelDesign_SoloEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "LevelDesign_Solo" } );
	}
}
