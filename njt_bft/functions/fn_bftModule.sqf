params ["_module"];
if !(local _module) exitWith{};
if (isNull attachedTo _module) exitWith {
	systemChat "BFT module: exited, not placed on an object";
	deleteVehicle _module;
};

uiNamespace setVariable ["njt_bft_currentObject", attachedTo _module];
// private _display = (findDisplay 312) createDisplay "njt_bft_moduleDisplay";
// uiNamespace setVariable ["njt_bft_moduleDisplay", _display];
deleteVehicle _module;