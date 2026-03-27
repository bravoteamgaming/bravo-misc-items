if !isServer exitWith{
	systemChat "bravo_fnc_duiSetCustomInfo : EXIT : must run on server";
};
params [["_target", objNull, ["", objNull, 0]], "_data"];

if (_target isEqualTo objNull) exitWith{};

private _uid = "";
private _unit = objNull;

if (_target isEqualType objNull) then {
	_unit = _target;
	_uid = getPlayerUID _target;
};
if (_target isEqualType "") then {
	_uid = _target;
	_unit = _target call BIS_fnc_getUnitByUID;
};
if (_target isEqualType 0) then {
	_uid = str _target;
	_unit = _uid call BIS_fnc_getUnitByUID;
};


private _varname = "bravo_duiPersistentData_" + _uid;
profileNamespace setVariable [_varName, _data];

if !(isNull _unit) then {
	_unit setVariable ["diwako_dui_nametags_customInfo", _data, true];
};