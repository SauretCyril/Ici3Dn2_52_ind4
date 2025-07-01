// Copyright 2020-2021 CesiumGS, Inc. and Contributors

using UnrealBuildTool;
using System.Collections.Generic;

public class new_Ici3Dn52Target : TargetRules
{
	public new_Ici3Dn52Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "new_Ici3Dn52" } );
	}
}
