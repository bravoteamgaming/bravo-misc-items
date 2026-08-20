params ["_target", "_caller", "_args"];

private _crew = (crew _target) select {isPlayer _x};

if (_args#0) then {
	_target setVariable ["bravo_var_apsEnabled",true,true];
	private _isReloaded = _target getVariable ["bravo_var_apsCooldown",false];
	private _text = format ["APS ARM%1",[""," - NO CHARGE"] select _isReloaded];
	[_text,2,0] remoteExec ["bravo_fnc_apsLocalWarning", _crew];
	[["beep",2]] remoteExec ["playSound", _crew];
} else {
	params ["_target", "_caller", "_args"];
	_target setVariable ["bravo_var_apsEnabled",false,true];
	["APS DISARM",2,0] remoteExec ["bravo_fnc_apsLocalWarning", _crew];
	[["beep",2]] remoteExec ["playSound", _crew];
};