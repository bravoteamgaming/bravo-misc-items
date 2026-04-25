if !(local (_this#0)) exitWith{};
deleteVehicle (_this#0);

private _sounds = "(((getNumber (_x >> 'scope')) > 1) && {(getText (_x >> 'sound')) != ''}) && {gettext (_x >> 'simulation') == ''}" configClasses (configFile >> "CfgVehicles");

uiNamespace setVariable ["RscAttributeSound_objects", _sounds];