params ["_logic"];
if !(local _logic) exitWith{};
deleteVehicle _logic;

private _isActive = missionNamespace getVariable ["bravo_var_gbpActive", false];

missionNamespace setVariable ["bravo_var_gbpActive", !_isActive, true];

systemChat format ["Grunt Birthday Party now is now %1", ["active", "off"] select _isActive];