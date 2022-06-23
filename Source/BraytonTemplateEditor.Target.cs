/// @author brayton@storylandstudios.com
/// Specifies what target direectory to look at when
/// Specifies that all necessary editor code may be built by looking at the specified directory

using UnrealBuildTool;
using System.Collections.Generic;

public class BraytonTemplateEditorTarget : TargetRules
{
	public BraytonTemplateEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "BraytonTemplate" } );
	}
}
