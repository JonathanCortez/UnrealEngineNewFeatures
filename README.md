# Unreal Engine NewFeatures WIP

Some new Features for unreal engine Editor workflow with python and extension to improve workflow for Unreal Houdini Engine.
PySide Layout Tool is an alternative to Unreal Engines Utility Widgets if a TA/TD would rather work in python and also bridged
to work with UE Houdini Engine to reconstruct a HDA UI when placed in the level to be coherent with how it is layout in Houdini.

There is still a lot of work to do, but I think its in a decent phase to get some feedback.

# Setting up project
 1. Must have PySide2 installed on your UE_4.27 build.
    - ```pip install PySide2``` to ```../UE_4.27/Engine/Binaries/ThirdParty/Python3/Win64/python.exe```
    
 2. Using Houdini Engine Plugin ```H18.5.672```
 
# Usage

## PySide Layout Tool
### Creating UI Layout
  - ```Create New UI``` : Creates a new UI Layout
  - ```Load``` : This will construct and display .qui files saved.
  - ```Loaded UI``` : quick access to loaded and newly constructed UI.
  
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
   - Also by passing ```self``` to your ```func(self)``` will pass parameter object whose callback is invoked.
   - To get other parameter objects : ```ui.layout('Name of UI', 'Category Name').parm('parameter Name')```
    
   ![Screenshot (419)](https://user-images.githubusercontent.com/19835724/166126567-36066af9-ab27-44e5-9a3e-8d211eca260c.png)
   
  ### Metadata Functions
   
   - ```name()``` : return string name of the parameter.
   - ```label()``` : return string display name that is shown on layout.
   - ```callback()``` : return string of script or empty string.
   - ```type()``` : return namedtuple ```currentItem_name``` , ```currentItem_index```.
   - ```disable_when()``` : return string of expression or empty string.
   - ```hiden_when()``` : return string of expression or empty string.
   - ```invisible()``` : return bool.
   - ```eval()``` : return value of a parameter.
   - ```set_value(value)```: set value for parameter.
   
  ### Parameter Functions
  
   - ```bNeighbor()``` : return bool parameter as another parameter next to it.
   - ```default_value()``` : return string of default value of parameter.
  
  ### Folder Functions
  
   - ```tab_hide()```: return string of tab hide expression.
   - ```tab_disable()``` : return string of tab disable expression.

  ### Hide/Disable Expression
    For an expression to work for a parameter e.g :( { parameter_name == 5 } ).
    If you have experince with Houdini digital asset its the same format expression.
    
  ### PySide Tool Plugin Settings
   ![Screenshot (429)](https://user-images.githubusercontent.com/19835724/166329432-d7d10e09-ddcb-4128-bb6c-e007e855bfdf.png)
    
   - ```Root Save``` : where created UI layout will be saved.
   - ```Houdini and Python UI``` : enable to reconstruct HDA UI using PySide Tool.
      - ```warning``` not all HDA will work still early WIP.
   - ```Keep Json``` doesnt do anything yet. 
   - ```Save Path``` Path Json file is saved.

  ### Extending PySide Layout Tool
   1. Make new Dictionary in Plugins
   2. Must have file *.uiplugin
      ```json
         "Categories":
         [
           {
             "Name": "Common",
             "Modules":
             [
                 "WidgetTestClass"
             ]
           }
         ]
      ```
   4. Add Plugin Folder name to UIEditorProject.uiproject
      ```json
         {
            "Name" : "TestingWidgetPlugin",
            "Enable" : true
         }
      ```
   - See Plugins/TestingWidgetPlugin for setup example.
  
   ```python
    from PySideLayoutTool.UIEditorLib.UIEditorFactory import WidgetFactory
    from PySideLayoutTool.UIEditorLib import LayoutTemplate, TemplateBuildClass
    from PySideLayoutTool.UIEditorLib.UIEditorProperty import UIProperty
    from PySide2 import QtWidgets

    # Class to layout your widgets
    class WidgetDemoLayout(QtWidgets.QWidget):

        def __init__(self):
            super(WidgetDemoLayout, self).__init__()
            self._base_layout = QtWidgets.QVBoxLayout()
            self._base_layout.setSpacing(0)
            self._base_layout.setContentsMargins(0,0,0,0)

            self._hbox_layout = QtWidgets.QHBoxLayout()
            self._hbox_layout.setSpacing(0)
            self._hbox_layout.setContentsMargins(0, 0, 0, 0)

            self._line_widget = QtWidgets.QLineEdit('Testing')
            self._button_widget = QtWidgets.QPushButton("Push")

            self._hbox_layout.addWidget(self._line_widget)
            self._hbox_layout.addWidget(self._button_widget)

            self._base_layout.addLayout(self._hbox_layout)
            self.setLayout(self._base_layout)



    # Base widget class template
    """
    LayoutTemplate.ParmSetup : is for most common parameters.
    LayoutTemplate.FolderSetup : is good for folder type templates.

    """
    class WidgetDemoClass(LayoutTemplate.ParmSetup):

        def __init__(self,parent=None):
            super(WidgetDemoClass, self).__init__(parent)
            self._widget = WidgetDemoLayout()
            self._layout.addWidget(self._widget)


        """
        UIProperty decorator which will add a widget info filler
        for the widget description.
        
        Current Widget Properties supported:
        - CheckProperty
        - ClampProperty
        - ComboProperty
        - DictionaryProperty
        - LineEditProperty
        
        Can also make your own Property Widget and register to the system.
        
        """
        @UIProperty(metaWidget='CheckProperty',label='Check Demo', category='Solo')
        def demo_check(self):
            pass




    # Class for properly building the widget with the application.
    """
    TemplateBuildClass.ParameterBuild: for most common parameters.
    TempalteBuildClass.FolderBuild: good for folder types, handling items within items

    """
    class WidgetDemoBuild(TemplateBuildClass.ParameterBuild):

        def widgetClass(self):
            return WidgetDemoClass


    """
    Register widget to be shown in supported templates.
    """
    def register():
        WidgetFactory.register('Demo Widget', WidgetDemoBuild)
   ```
  ![Screenshot (434)](https://user-images.githubusercontent.com/19835724/166815862-54a6afee-ef4d-4fe3-8d63-4d20d2cd9d22.png)

  ### PySide Layout Tool with Houdini Engine HDA
    - Not all HDA will work depending on their UI Layout this is still early WIP.
    
  ![Screenshot (435)](https://user-images.githubusercontent.com/19835724/166820596-0b1fb6d8-77cb-4716-b9cf-352270e7e841.png)

  ![Screenshot (433)](https://user-images.githubusercontent.com/19835724/166816138-6860f2c9-5a89-41de-9d39-f08ff7c09fa8.png)

  
  ## Houdini Asset Editor Window
   ![Screenshot (425)](https://user-images.githubusercontent.com/19835724/166222136-0d2f9334-b576-4c4e-bfb3-5fd8e9c1f338.png)
   
   ![Screenshot (422)](https://user-images.githubusercontent.com/19835724/166222182-0ac62697-c24d-4a3e-b787-b79ae69c9204.png)
   
   
   ![Screenshot (423)](https://user-images.githubusercontent.com/19835724/166222187-c13dd3d5-0c09-42a5-92a8-76a69ac0dfc0.png)

  
# Known Issues 

## Houdini Viewport Editor
- Houdini Custom Viewport serialization/package does not save properly yet.
- Checking vertexs, normals, binormals can get very computational depending on the complexity of an HDA.

## PySide Layout Tool
  - UE Editor crashes without warning if Houdini Engine is started first and than creating a new UI Layout.
  - Testing.qui file is there to currently avoid that.
  - importing modules from text editor will fail depending on scope.
    - text editor will be reworked completely with jedi or kite plugin. 
  
  ### HDA Reconstruct UI
    - Multiparm folder currently does not work yet.
    - Ramp callback not yet implemented.
    - Serialization for HDA UI work but lose wrapping instance when reopen project.

  ### Ramp
    - Not all interpolation are yet implemented.
    - Sometimes Ramp graph doesnt resize properly.
    - Callback not implemented.
    - Needs more testing.
    
  ### Collapisble
    - Folder does not yet update properly on dynamic updates of other widgets.
    
    
    
  
