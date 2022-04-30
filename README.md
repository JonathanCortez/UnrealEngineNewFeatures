# Unreal Engine NewFeatures WIP

Some new Features for unreal engine Editor workflow with python and extension to improve workflow for Unreal Houdini Engine.
PySide Layout Tool is an alternative to Unreal Engines Utility Widgets if a TA/TD would rather work in python and also bridges it
to work with UE Houdini Engine to reconstruct a HDA UI when placed in the level to be coherent with how it is layout in Houdini.

There is still a lot of work to do but I think its in a decent phase to get some feedback.

# Installing the project
 1. Must have PySide2 installed on your UE_4.27 build.
    - ```pip install PySide2``` to ```../UE_4.27/Engine/Binaries/ThirdParty/Python3/Win64/python.exe```
 

# Known Issues 

## Houdini Viewport Editor
- Houdini Custom Viewport serialization/package does not save properly yet.
- Checking vertexs, normals, binormals can get very computational depending on the complexity of an HDA.

## PySide Layout Tool
  - UE Editor crashes without warning if Houdini Engine is started first and than creating a new UI Layout.
  
  ### HDA Reconstruct UI
    - Mutliparm folder currently does not work yet.
    - Ramp callback not yet implemented.
    - Serialization for HDA UI work but lose wrapping instance when reopen project.

  ### Ramp
    - Not all interpolation are yet implemented.
    - Sometimes Ramp graph doesnt resize properly.
    
  ### Collapisble
    - Folder does not yet update properly on dynamic updates of other widgets.
    
   
    
    
  
