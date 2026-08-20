/*
 * Arguments:
 * 0: Action name <STRING>
 * 1: Name of the action shown in the menu <STRING>
 * 2: Icon file path or Array of icon file path and hex color ("" for default icon) <STRING or ARRAY>
 * 3: Statement <CODE>
 * 4: Condition <CODE>
 * 5: Insert children code <CODE> (default: {})
 * 6: Action parameters <ANY> (default: [])
 * 7: Position (Position array, Position code or Selection Name) <ARRAY or CODE or STRING> (default: {[0, 0, 0]})
 * 8: Distance <NUMBER> (default: 2)
 * 9: Other parameters [showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] <ARRAY> (default: all false)
 * 10: Modifier function <CODE> (default: {})
 */
 
private _actionReload = [
	"bravo_reloadAPS",
	"Reload APS",
	"",
	{
		[
			20,
			_this,
			{(_this#0) call bravo_fnc_apsLoad},
			{},
			"Loading APS...",
			{
				(_this#0) params ["_target", "_player"];
				((_target distance _player) < 5) && {alive _target};
			}
		] call ace_common_fnc_progressBar;
	},
	{
		params ["_target", "_player"];
		('bravo_apscharge' in magazines _player) && {(_target getVariable ['bravo_var_apsCooldown',false]) && (alive _target)}
	},
	[],
	[0,0,0],
	5
] call ace_interact_menu_fnc_createAction;

[
	_vehicle,
	0,
	["ACE_Actions"],
	_actionReload
] call ace_interact_menu_fnc_addActionToObject;

// ======= arm

private _actionArm = [
	"bravo_armAPS",
	"Arm APS",
	"",
	{
		_this call bravo_fnc_apsArm;
	},
	{
		params ["_target", "_player"];
		(_player in [commander _target, driver _target]) && {!(_target getVariable ['bravo_var_apsEnabled',false])}
	},
	[true],
	[0,0,0],
	5
] call ace_interact_menu_fnc_createAction;

[
	_vehicle,
	1,
	["ACE_SelfActions"],
	_actionArm
] call ace_interact_menu_fnc_addActionToObject;

// ===== disarm

private _actionDisarm = [
	"bravo_disarmAPS",
	"Disarm APS",
	"",
	{
		_this call bravo_fnc_apsArm;
	},
	{
		params ["_target", "_player"];
		(_player in [commander _target, driver _target]) && {_target getVariable ['bravo_var_apsEnabled',false]}
	},
	[false],
	[0,0,0],
	5
] call ace_interact_menu_fnc_createAction;

[
	_vehicle,
	1,
	["ACE_SelfActions"],
	_actionDisarm
] call ace_interact_menu_fnc_addActionToObject;