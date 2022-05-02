import unreal
from PySideLayoutTool.UIEditorLib import UIEditorWrapper

class UEHoudiniAssetUIWrapper:

    def __init__(self,houdini_asset_name, houdini_asset, path):
        self._houdini_asset_api_wrapper = None
        self._ui_layout_api_wrapper = None

        if unreal.HoudiniPublicAPIAssetWrapper.can_wrap_houdini_object(houdini_asset):
            self._houdini_asset_api_wrapper = unreal.HoudiniPublicAPIAssetWrapper.create_wrapper(None, houdini_asset)
            self._ui_layout_api_wrapper = UIEditorWrapper.UIPublicAPIWrapper.instantiate_ui(houdini_asset_name, 'Houdini', path)


        if self._houdini_asset_api_wrapper and self._ui_layout_api_wrapper:

            #Integers
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Integer', self._integer_delegate)
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Integer Vector 2', self._integer_v2_delegate)
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Integer Vector 3', self._integer_v3_delegate)
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Integer Vector 4', self._integer_v4_delegate)

            #Floats
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Float', self._float_delegate)
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Float Vector 2', self._integer_v2_delegate)
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Float Vector 3', self._integer_v3_delegate)
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Float Vector 4', self._integer_v4_delegate)

            #Button
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Button', self._button_trigger)

            #Toggle
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Toggle', self._toggle_delegate)

            #Color
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Color', self._color_delegate)

            #Combo
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Ordered Combo/Menu', self._combo_delegate)

            #Ramp
            self._ui_layout_api_wrapper.on_parameter_change.add_callable('Ramp', self._ramp_delegate)





    def _integer_delegate(self, name, value):
        self._houdini_asset_api_wrapper.set_int_parameter_value(name, value)

    def _integer_v2_delegate(self, name, value):
        if self._houdini_asset_api_wrapper.get_int_parameter_value(name,0) != value[0]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[0], 0)

        if self._houdini_asset_api_wrapper.get_int_parameter_value(name, 1) != value[1]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[1], 1)


    def _integer_v3_delegate(self, name, value):
        if self._houdini_asset_api_wrapper.get_int_parameter_value(name, 0) != value[0]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[0], 0)

        if self._houdini_asset_api_wrapper.get_int_parameter_value(name, 1) != value[1]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[1], 1)

        if self._houdini_asset_api_wrapper.get_int_parameter_value(name, 2) != value[2]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[2], 2)

    def _integer_v4_delegate(self, name, value):
        if self._houdini_asset_api_wrapper.get_int_parameter_value(name, 0) != value[0]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[0], 0)

        if self._houdini_asset_api_wrapper.get_int_parameter_value(name, 1) != value[1]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[1], 1)

        if self._houdini_asset_api_wrapper.get_int_parameter_value(name, 2) != value[2]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[2], 2)

        if self._houdini_asset_api_wrapper.get_int_parameter_value(name, 3) != value[3]:
            self._houdini_asset_api_wrapper.set_int_parameter_value(name, value[3], 3)


    def _float_delegate(self, name, value):
        self._houdini_asset_api_wrapper.set_float_parameter_value(name, value)

    def _float_v2_delegate(self, name, value):
        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 0) != value[0]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[0])

        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 1) != value[1]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[1])

    def _float_v3_delegate(self, name, value):
        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 0) != value[0]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[0])

        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 1) != value[1]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[1])

        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 2) != value[2]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[2])

    def _float_v4_delegate(self, name, value):
        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 0) != value[0]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[0])

        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 1) != value[1]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[1])

        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 2) != value[2]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[2])

        if self._houdini_asset_api_wrapper.get_float_parameter_value(name, 3) != value[3]:
            self._houdini_asset_api_wrapper.set_float_parameter_value(name, value[3])


    def _button_trigger(self,name, value):
        self._houdini_asset_api_wrapper.trigger_button_parameter(name)


    def _toggle_delegate(self, name, value):
        self._houdini_asset_api_wrapper.set_bool_parameter_value(name, value)

    def _color_delegate(self, name, value):
        self._houdini_asset_api_wrapper.set_color_parameter_value(name, value)

    def _combo_delegate(self, name, value):
        self._houdini_asset_api_wrapper.set_int_parameter_value(name, value)


    def _ramp_delegate(self, name, value):
        for index, pos in enumerate(value['positions']):
            self._houdini_asset_api_wrapper.set_float_ramp_parameter_point_value(name, index, pos, value['values'][index], value['interpolations'][index]+1)

