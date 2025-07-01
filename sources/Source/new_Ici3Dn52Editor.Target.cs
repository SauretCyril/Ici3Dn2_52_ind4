// Copyright 2020-2021 CesiumGS, Inc. and Contributors

using UnrealBuildTool;
using System.Collections.Generic;

public class new_Ici3Dn52EditorTarget : TargetRules
{
	public new_Ici3Dn52EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "new_Ici3Dn52" } );
	}
}
