/// @author brayton@storylandstudios.com
/// Specifies what target direectory to look at when
/// Specifies that all necessary code may be built by looking at the specified directory

using UnrealBuildTool;
using System.Collections.Generic;

public class BraytonTemplateTarget: TargetRules
{
	public BraytonTemplateTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "BraytonTemplate" } );
	}
}
