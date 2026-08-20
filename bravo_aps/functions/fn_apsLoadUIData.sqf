waitUntil {
	(!isNull (uiNamespace getVariable ["bravo_aps_currentObject", objNull])) or !(uiNamespace getVariable ['bravo_aps_displayOpen',false]);
};
if !(uiNamespace setVariable ['bravo_aps_displayOpen',false]) exitWith{};
private _object = uiNamespace getVariable ["bravo_aps_currentObject", objNull];
private _objclasscontrol = uiNamespace getVariable ["bravo_aps_classnameBox", controlNull];
_objclasscontrol ctrlSetText typeOf _object;