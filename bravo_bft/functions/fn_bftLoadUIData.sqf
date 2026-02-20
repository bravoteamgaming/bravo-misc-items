waitUntil {
	(!isNull (uiNamespace getVariable ["bravo_bft_currentObject", objNull])) or !(uiNamespace getVariable ['bravo_bft_displayOpen',false]);
};
if !(uiNamespace setVariable ['bravo_bft_displayOpen',false]) exitWith{};
private _object = uiNamespace getVariable ["bravo_bft_currentObject", objNull];

private _data = bravo_bft_data getOrDefault [netId _object, ["",[0,0,0],""]];
_data params ["_currentClass", "_currentColour", "_currentName"];

private _objclasscontrol = uiNamespace getVariable ["bravo_bft_classnameBox", controlNull];
_objclasscontrol ctrlSetText typeOf _object;

private _mcontrol = uiNamespace getVariable ["bravo_bft_markerListBox", controlNull];
private _mdata = "(getText (_x >> 'markerClass')) == 'NATO_BLUFOR'" configClasses (configFile >> "CfgMarkers");
private _setIndex = 0;
{
	private _name = getText (_x >> "name");
	private _icon = getText (_x >> "icon");
	private _classname = configName _x;
	
	private _index = _mcontrol lbAdd _name;
	if (_className == _currentClass) then {
		_setIndex = _index;
	};
	_mcontrol lbSetData [_index, _classname];
	_mcontrol lbSetPicture [_index, _icon];
} forEach _mdata;
_mcontrol lbSetCurSel _setIndex;

private _ccontrol = uiNamespace getVariable ["bravo_bft_colourListBox", controlNull];
private _cdata = "true" configClasses (configFile >> "CfgMarkerColors");
_setIndex = 0;
{
	private _name = getText (_x >> "name");
	private _colour = (getArray (_x >> "color")) call BIS_fnc_colorConfigToRGBA;
	private _classname = configName _x;
	private _colourTexture = _colour call BIS_fnc_colorRGBAToTexture;
	private _colourFormatted = format ["#(%1,%2,%3,%4)", _colour#0, _colour#1, _colour#2, _colour#3];
	private _index = _ccontrol lbAdd _name;
	if (_colourFormatted isEqualTo _currentColour) then {
		_setIndex = _index;
	};
	_ccontrol lbSetData [_index, str _colour];
	_ccontrol lbSetPicture [_index, _colourTexture];
} forEach _cdata;
_ccontrol lbSetCurSel _setIndex;

private _ncontrol = uiNamespace getVariable ["bravo_bft_dataNameBox", controlNull];
_ncontrol ctrlSetText _currentName;