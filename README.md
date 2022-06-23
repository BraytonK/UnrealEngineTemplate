## File Structure
### '.uproject'
This file specifies that this is an unreal project using version 5 and can look to the Core directory for build targets and other deependencies
  // Tells compiler it should find and load the compiled .dll for the module called "BraytonTemplate"

### 'Public' vs 'Private' Core Directories
Public = headers that need to be visible to other modules
Private = implmentation files and other things internal to the module

### '...CoreBuild.cs"
Module build rules file
Tells Unreal Build System how to build module using the targets that it is currently building

------------------
All instructions are using Unreal Engine 5 and paths are relative to Brayton's working directory. Adjust accordingly to the system being used!
## How to Compile
Ex: "C:\Program Files\Epic Games\UE_5.0\Engine\Build\BatchFiles\Build.bat" BraytonTemplateEditor Win64 Development "C:\Users\Brayton\Documents\PlainJoe\PlainJoeStudios\UnrealProjects\Brayton\FromScratch\BraytonTemplate.uproject" -waitmutex -NoHotReload

To Compile as executable use the projects build file rather than editor file then cook content..:
Ex: "C:\Program Files\Epic Games\UE_5.0\Engine\Build\BatchFiles\Build.bat" BraytonTemplate Win64 Development "C:\Users\Brayton\Documents\PlainJoe\PlainJoeStudios\UnrealProjects\Brayton\FromScratch\BraytonTemplate.uproject" -waitmutex -NoHotReload

## Compiled File Structure
Everything compiles into object code and the file gets linked together using a '.dll' (dynamic link library)
### <CoreModuleName>.dll
Contains all code written in core module compiled into a binary form
### <CoreModuleName>.pdb
Contains debugging information so that symbols in the compiled binary version of the users code may be traced back to 
  corresponding functions, variables, and/or other relevant identifiers for debugging in the source code
### <CoreModuleName>.modules
Contains metadata telling the editor which DLLs may be loaded and which engine version they were compiled against
  If errors regarding using wrong versions on Unreal, check this file to see which engine the modules were originally compiled against

Note: Log and content files will be added by Unreal as needed as development continues

------------------
## Opening Compiled Project in Editor
To launch with editor use:
"C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\Win64\UnrealEditor.exe" "C:\Users\Brayton\Documents\PlainJoe\PlainJoeStudios\UnrealProjects\Brayton\FromScratch\BraytonTemplate.uproject" -log

To just launch the game use:
"C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\Win64\UnrealEditor.exe" "C:\Users\Brayton\Documents\PlainJoe\PlainJoeStudios\UnrealProjects\Brayton\FromScratch\BraytonTemplate.uproject" -game -log -windowed -resx=1280 -resy=720

## Cooking Content
"C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\Win64\UnrealEditor-cmd.exe" ""C:\Users\Brayton\Documents\PlainJoe\PlainJoeStudios\UnrealProjects\Brayton\FromScratch\BraytonTemplate.uproject"" -run=cook -targetplatform=Windows
// This will build a cooked directory in the 'Saved' folder with compressed content data (content data only relevant to runtime, not editor reliant content data)
// This will also build an executable in the "Binaries" -> "Win64" folder
