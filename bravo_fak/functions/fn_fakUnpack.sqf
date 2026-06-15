params ["_unit", "_fakItem", ["_useConfig", false]];

private _data = "";
if (_useConfig) then {
	_data = [configFile >> "CfgWeapons" >> _fakItem, "bravo_fakContents", ""] call BIS_fnc_returnConfigEntry;
} else {
	_data = [_fakItem, "server"] call CBA_settings_fnc_get;
};

if ((_data isEqualTo "") or (_data isEqualTo "[]")) exitWith {
	systemChat format ["FAK unpack failed: no contents set for %1", _fakItem];
};

_unit removeItem _fakItem;

{
	_x params ["_item", "_quantity"];
	for "_i" from 1 to _quantity do {
		[_unit, _item, true] call CBA_fnc_addItem;
	};
} forEach parseSimpleArray _data;