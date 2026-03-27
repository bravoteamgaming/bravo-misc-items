if !isServer exitWith{
	systemChat "bravo_fnc_duiSetCustomInfo : EXIT : must run on server";
};
params [["_target", objNull, ["", objNull]], "_data"];

if (isNull _target) exitWith{};

private _uid = "";
private _unit = objNull;
if (_target isEqualType "") then {
	_uid = _target;
	_unit = _target call BIS_fnc_getUnitByUID;
} else {
	_unit = _target;
	_uid = getPlayerUID _target;
};

private _varname = "bravo_duiPersistentData_" + _uid;
profileNamespace setVariable [_varName, _data];

if !(isNull _unit) then {
	_unit setVariable ["diwako_dui_nametags_customInfo", _data, true];
};