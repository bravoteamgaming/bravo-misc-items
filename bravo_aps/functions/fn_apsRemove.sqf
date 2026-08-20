params [["_vehicle", objNull]];
if (isNull _vehicle) exitWith{};

_vehicle setVariable ["bravo_var_apsEnabled",nil];
_vehicle setVariable ["bravo_var_apsCooldown",nil];

if (fileExists "\z\ace\addons\main\script_component.hpp") then {
	[_object, 0, ["ACE_Actions", "bravo_reloadAPS"] call ace_interact_menu_fnc_removeActionFromObject;
	[_object, 1, ["ACE_SelfActions", "bravo_armAPS"] call ace_interact_menu_fnc_removeActionFromObject;
	[_object, 1, ["ACE_SelfActions", "bravo_disarmAPS"] call ace_interact_menu_fnc_removeActionFromObject;
} else {
	[_vehicle, _vehicle getVariable ["bravo_apsReloadAction",0]] call bis_fnc_holdActionRemove;
	_vehicle removeAction (_vehicle getVariable ["bravo_apsArmAction",0]);
	_vehicle removeAction (_vehicle getVariable ["bravo_apsDisarmAction",0]);
};