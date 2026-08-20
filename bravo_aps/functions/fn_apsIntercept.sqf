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

_projectilePos = getPosATL _projectile;
// If the projectile has already been handled, skip this
if (isNull _projectile) exitWith {};


// Don't touch me!
deleteVehicle _projectile;

// Create effects and warnings
private _flare = createVehicle ["CMFlareAmmo",_projectilePos,[],0,"CAN_COLLIDE"];
private _flareDir = (getPosASL _flare) vectorFromTo (getPosASL _vehicle);
_flare setVelocity (_flareDir vectorMultiply 40);

{
	if (isPlayer _x) then {
		[["bravo_aps_activation",2]] remoteExec ["playSound",_x];
		["APS ACTIVATION",3,1] remoteExec ["bravo_fnc_apsLocalWarning",_x];
	};
} forEach crew _vehicle;

[_projectilePos,_vehicle] remoteExec ["bravo_fnc_apsLocalEffects"];
playSound3D ["A3\Sounds_F\arsenal\explosives\rockets\Rocket_closeExp_02.wss",_vehicle,false,getPosASL _vehicle,1,1,150];
playSound3D ["A3\Sounds_F\arsenal\explosives\rockets\RocketHeavy_tailMeadows_01.wss",_vehicle,false,getPosASL _vehicle,1,1,150];

// APS aren't completely safe...
private _intgrenade = createVehicle ["bravo_aps_interceptor",_projectilePos,[],0,"CAN_COLLIDE"];
triggerAmmo _intgrenade;

private _vicPos = getPosASL _vehicle;
private _dir = (_vicPos vectorFromTo (ATLtoASL _projectilePos)) vectorMultiply 8;
private _launcherPos = ASLtoATL (_vicPos vectorAdd _dir);
private _laugrenade = createVehicle ["bravo_aps_launcher",_launcherPos,[],0,"CAN_COLLIDE"];
triggerAmmo _laugrenade;

// grace period during which any additional shots will still be intercepted
uisleep 2;

_vehicle setVariable ["bravo_var_apsCooldown",true,true];