params ["_module"];
if !(local _module) exitWith{};
if (isNull attachedTo _module) exitWith {
	systemChat "APS module: exited, not placed on an object";
	deleteVehicle _module;
	closeDialog 2;
};

uiNamespace setVariable ["bravo_aps_currentObject", attachedTo _module];

deleteVehicle _module;