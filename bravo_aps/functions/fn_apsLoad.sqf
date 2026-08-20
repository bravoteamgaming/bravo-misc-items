params ["_target", ["_player", objNull]];

if !(isNull _player) then {_player removeMagazine "bravo_apscharge"};
_target setVariable ["bravo_var_apsCooldown",false,true];
playSound3D ["A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_reload.wss",_caller];
["APS READY",2,0] remoteExec ["bravo_fnc_apsLocalWarning", (crew _target) select {isPlayer _x}];
[["beep",2]] remoteExec ["playSound", (crew _target) select {isPlayer _x}];