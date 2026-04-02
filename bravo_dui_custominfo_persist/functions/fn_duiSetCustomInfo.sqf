private _data = ["bravo_duiPersistentData", "client"] call CBA_settings_fnc_get;

if !(isNull player) then {
	player setVariable ["diwako_dui_nametags_customInfo", _data, true];
};