// APS - INTERCEPTOR MODULE
// This function determines if a nearby projectile is a threat, and if so, destroys it and creates appropriate effects.

params ["_projectile","_vehicle"];

if (isNull _projectile) exitWith {};
// Tag the projectile as handled by this vehicle so only one interceptor is created
private _handledProjectiles = _vehicle getVariable ["bravo_var_apsTracked",[]];
_handledProjectiles pushBackUnique _projectile;
_vehicle setVariable ["bravo_var_apsTracked",_handledProjectiles];

// Check if the projectile is likely to hit the vehicle
if !([_projectile,_vehicle] call bravo_fnc_apsIntersectCheck) exitWith {};

// Find out who did it so we can blame them
private _shooterVehicle = (getShotParents _projectile) select 0;
private _shooter = gunner _shooterVehicle;
if !(local _shooter) exitWith {};

// If we've accidentally detected our own projectile, ignore it
if (_shooterVehicle == _vehicle) exitWith {};

private _projectilePos = getPosATL _projectile;
// If the projectile has already been handled, skip this
if (isNull _projectile) exitWith {};

// Don't touch me!
deleteVehicle _projectile;

private _projectilePosASL = ATLtoASL _projectilePos;
private _vicPos = getPosASL _vehicle;

// Create effects and warnings
private _flare = createVehicle ["CMFlareAmmo",_projectilePos,[],0,"CAN_COLLIDE"];
private _flareDir = _projectilePosASL vectorFromTo _vicPos;
_flare setVelocity (_flareDir vectorMultiply 40);


{
	if (isPlayer _x) then {
		[1, _projectilePos, _vicPos, _vehicle] remoteExec ["bravo_fnc_apsSoundAlert", _x];
		["APS ACTIVATION",3,1] remoteExec ["bravo_fnc_apsVisAlert",_x];
	};
} forEach crew _vehicle;

[_projectilePos, _vehicle, _projectilePosASL] remoteExec ["bravo_fnc_apsLocalEffects"];
playSound3D ["A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_02.wss",_vehicle,false, _vicPos,1,1,150];
playSound3D ["A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailMeadows_01.wss",_vehicle,false, _vicPos,1,1,150];

// APS aren't completely safe...
private _intgrenade = createVehicle ["bravo_aps_interceptor",_projectilePos,[],0,"CAN_COLLIDE"];
triggerAmmo _intgrenade;


private _dir = (_vicPos vectorFromTo _projectilePosASL) vectorMultiply 8;
private _launcherPos = ASLtoATL (_vicPos vectorAdd _dir);
private _laugrenade = createVehicle ["bravo_aps_launcher",_launcherPos,[],0,"CAN_COLLIDE"];
triggerAmmo _laugrenade;

// grace period during which any additional shots will still be intercepted
uisleep 2;

_vehicle setVariable ["bravo_var_apsCooldown",true,true];