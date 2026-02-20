params ["_display", "_isDelete"];

private _object = uiNamespace getVariable ["bravo_bft_currentObject", objNull];

if !_isDelete then {
	private _dataName = ctrlText (uiNamespace getVariable ["bravo_bft_dataNameBox", controlNull]);
	private _markerTypeCtrl = uiNamespace getVariable ["bravo_bft_markerListBox", controlNull];
	private _markerType = _markerTypeCtrl lbData lbCurSel _markerTypeCtrl;
	private _markerColourCtrl = uiNamespace getVariable ["bravo_bft_colourListBox", controlNull];
	private _markerColour = parseSimpleArray (_markerColourCtrl lbData lbCurSel _markerColourCtrl);
	private _markerColourFormatted = format ["#(%1,%2,%3,%4)", _markerColour#0, _markerColour#1, _markerColour#2, _markerColour#3];
	private _data = [_markerType, _markerColourFormatted, _dataName];
	[netId _object, _data] remoteExec ["bravo_fnc_bftSetData",2];
} else {
	[netId _object] remoteExec ["bravo_fnc_bftRemoveData",2];
};
_display closeDisplay 1;