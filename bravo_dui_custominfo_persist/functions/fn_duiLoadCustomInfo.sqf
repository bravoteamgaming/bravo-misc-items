if !isServer exitWith{};
{
	private _uid = getPlayerUID _x;
	private _varname = "bravo_duiPersistentData_" + _uid;
	private _data = profileNamespace getVariable [_varName, ""];
	_x setVariable ["diwako_dui_nametags_customInfo", _data, true];
} forEach (call BIS_fnc_listPlayers);