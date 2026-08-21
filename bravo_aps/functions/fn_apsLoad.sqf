params ["_target", ["_player", objNull]];

private _crew = (crew _target) select {isPlayer _x};

if !(isNull _player) then {_player removeMagazine "bravo_apscharge"};
_target setVariable ["bravo_var_apsCooldown",false,true];
playSound3D ["A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_reload.wss", _target, _false, getPosASL _target, 2, 0.9, 75];
["APS READY",2,0] remoteExec ["bravo_fnc_apsVisAlert", _crew];
remoteExec ["bravo_fnc_apsSoundAlert", _crew];