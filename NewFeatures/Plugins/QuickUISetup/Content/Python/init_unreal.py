from UIEditorLib import UISetupModule
from Resources import pysidetoolicons

from PySide2 import QtWidgets
import sys
import unreal

app = None
if not QtWidgets.QApplication.instance():
    app = QtWidgets.QApplication(sys.argv)
else:
    app = QtWidgets.QApplication.instance()

path = __file__.replace('init_unreal.py','PySideLayoutTool/LayoutToolBaseStyle.qss')
with open(path) as file:
    app.setStyleSheet(file.read())


init_path = __file__.replace('init_unreal.py','PySideLayoutTool/UIEditorProject.uiproject')
save_path = __file__.replace('/Content/Python/init_unreal.py', '/SavedUI')

def Unreal_Parent(win_instance):
    unreal.parent_external_window_to_slate(win_instance.winId())

UISetupModule.main_path(init_path)
UISetupModule.PreInitialize(Unreal_Parent, save_path)
UISetupModule.PostInitialize()

@unreal.uclass()
class PythonBridgeImplementation(unreal.UIPythonBridge):

    @unreal.ufunction(override=True)
    def Set_File_Root(self, file_dir):
        UISetupModule.set_UIFileBaseRoot(file_dir)

    @unreal.ufunction(override=True)
    def Setup_Init_Call(self):
        UISetupModule.Setup_Init()

    @unreal.ufunction(override=True)
    def Load_UI(self):
        UISetupModule.Load_UI()

    @unreal.ufunction(override=True)
    def Loaded_UI(self):
        return UISetupModule.Loaded_UIs()

    @unreal.ufunction(override=True)
    def Loaded_Categories(self):
        return UISetupModule.Loaded_UI_Categories()

    @unreal.ufunction(override=True)
    def Check_UI_Name(self, name, category):
        return UISetupModule.Loaded_UI_name_with_category(name,category)

    @unreal.ufunction(override=True)
    def Open_UI(self, name, win_type, category):
        UISetupModule.Open_UI(name, win_type,category)



