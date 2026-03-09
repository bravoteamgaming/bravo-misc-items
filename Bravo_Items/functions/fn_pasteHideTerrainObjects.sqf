params ["_array"];
_array = parseSimpleArray _array;
private _group = createGroup sideLogic;
{
	_x params ["_pos", "_area", "_filter", "_dir"];
	private _logic = _group createUnit ["Logic", _pos, [], 0, "CAN_COLLIDE"];
	_logic setDir _dir;
	_logic setVariable ["objectArea", _area];
	_logic setVariable ["#hideLocally", false];
	_logic setVariable ["#filter", _filter];
	["init", [_logic]] call BIS_fnc_moduleHideTerrainObjects;
} forEach _array;

deleteGroup _group;
deleteVehicle (entities "bravo_module_pasteHideTerrainObjects");