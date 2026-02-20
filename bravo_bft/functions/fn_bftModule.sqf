params ["_module"];
if !(local _module) exitWith{};
if (isNull attachedTo _module) exitWith {
	systemChat "BFT module: exited, not placed on an object";
	deleteVehicle _module;
};

uiNamespace setVariable ["bravo_bft_currentObject", attachedTo _module];
// private _display = (findDisplay 312) createDisplay "bravo_bft_moduleDisplay";
// uiNamespace setVariable ["bravo_bft_moduleDisplay", _display];
deleteVehicle _module;