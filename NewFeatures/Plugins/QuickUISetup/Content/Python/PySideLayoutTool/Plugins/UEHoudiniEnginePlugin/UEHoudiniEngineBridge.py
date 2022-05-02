import unreal
from . import UEHoudiniEngineWrapper


@unreal.uclass()
class HoudiniPythonBridgeImplementation(unreal.HoudiniUIBridge):

    @unreal.ufunction(override=True)
    def Houdini_UI_Wrap(self, path, hda_name, hda_obj):
        UEHoudiniEngineWrapper.UEHoudiniAssetUIWrapper(hda_name, hda_obj, path)
