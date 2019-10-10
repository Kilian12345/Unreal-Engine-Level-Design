// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class LevelDesign_SoloTarget : TargetRules
{
	public LevelDesign_SoloTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "LevelDesign_Solo" } );
	}
}
