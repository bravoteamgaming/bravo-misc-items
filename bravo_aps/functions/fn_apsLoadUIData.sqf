waitUntil {
	(!isNull (uiNamespace getVariable ["bravo_aps_currentObject", objNull])) or !(uiNamespace getVariable ['bravo_aps_displayOpen',false]);
};
if !(uiNamespace setVariable ['bravo_aps_displayOpen',false]) exitWith{};
private _object = uiNamespace getVariable ["bravo_aps_currentObject", objNull];
private _objclasscontrol = uiNamespace getVariable ["bravo_aps_classnameBox", controlNull];
_objclasscontrol ctrlSetText typeOf _object;

private _objvoicecontrol = uiNamespace getVariable ["bravo_aps_voiceBox", controlNull];
{
	_objvoicecontrol lbAdd _x;
} forEach ['Anna', 'Betty', 'Chen', 'Donna', 'Esmat', 'Fedor'];
_objvoicecontrol lbSetCurSel (_object getVariable ['bravo_var_apsvoicetype',1]);