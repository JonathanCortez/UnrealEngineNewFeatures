# Unreal Engine NewFeatures WIP

Some new Features for unreal engine Editor workflow with python and extension to improve workflow for Unreal Houdini Engine.
PySide Layout Tool is an alternative to Unreal Engines Utility Widgets if a TA/TD would rather work in python and also bridges it
to work with UE Houdini Engine to reconstruct a HDA UI when placed in the level to be coherent with how it is layout in Houdini.

There is still a lot of work to do but I think its in a decent phase to get some feedback.

# Installing the project
 1. Must have PySide2 installed on your UE_4.27 build.
    - ```pip install PySide2``` to ```../UE_4.27/Engine/Binaries/ThirdParty/Python3/Win64/python.exe```
 
# Usage
## Creating UI Layout
  - Create New UI : Creates a new UI Layout
  - Load : This will construct and display .qui files saved.
  - Loaded UI: quick access to loaded and newly constructed UI.
  
  ![Screenshot (420)](https://user-images.githubusercontent.com/19835724/166124237-315b7136-ddd3-4f66-830c-05ff62fd1fda.png)
  
  - Name of the UI in general.
  - Path to save in.
  - Category to help with organization.
  - Click ``` Create ```
  
  ![Screenshot (416)](https://user-images.githubusercontent.com/19835724/166124239-1b3369cb-d6ca-415c-86b8-f92e2fd43f2c.png)
  
  - All set just start drag and dropping into the layout tree.
  - ```View``` : Openes UI Layout window.
  - ```Apply```: Saves and updates the Layout Window and keep the editor open.
  - ```Discard``` : Remove all non saved items.
  - ```Accept``` : Saves and updates the Layout Window but closes the editor window.
  - ```Cancel``` : Closes window without saving anything.
  
  ![Screenshot (417)](https://user-images.githubusercontent.com/19835724/166125449-0bb88897-484b-43a4-9ecd-c05728df92ea.png)
  
  ### Script Section
     
   - On Parameter/Folder Callback to work with script: ```ui.editor('Name of UI', 'Category Name').pyModule('Module Name').func()```
    
   ![Screenshot (419)](https://user-images.githubusercontent.com/19835724/166126567-36066af9-ab27-44e5-9a3e-8d211eca260c.png)

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
    - Callback not implemented.
    - Needs more testing.
    
  ### Collapisble
    - Folder does not yet update properly on dynamic updates of other widgets.
    
   
    
    
  
