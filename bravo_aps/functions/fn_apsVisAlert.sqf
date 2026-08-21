// FA3 - FCS/Commander's Override system
// Credits and documentation: https://github.com/folkarps/F3/wiki
// Originally from: https://github.com/NikkoJT/njt_fcs (integrated with permission)

// This function shows HUD indicators when the commander's override either lacks a target or is in operation.

params ["_text","_delay",["_position",0]];

disableSerialization;

private _type = [
	"bravo_aps_hudTextLeft",
	"bravo_aps_hudTextRight"
] select _position;

if (cameraView == "GUNNER") then {
	private _ctrl = findDisplay 46 ctrlCreate [_type, -1];
	_ctrl ctrlSetStructuredText parseText ("<t shadow='0' size='1.1' align='left'>" + _text + "</t>");
	// _overrideWarningDisplay ctrlSetTextColor [1,0.1,0.1,1];
	_ctrl ctrlCommit 0;
	sleep _delay;
	ctrlDelete _ctrl;
};