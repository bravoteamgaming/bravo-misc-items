params ["_projectile"];

sleep 0.01;

waitUntil {simulationEnabled _projectile || !alive _projectile};

if (!alive _projectile) exitWith{};

private _source = "#lightpoint" createVehicleLocal getPosATL _projectile;
_source attachTo [_projectile, [0,0,0]];
_source say3D ["njt_randomnade_sound", 150, 1, 0, 0, true];
_source setLightColor [0.9, 1, 1];
_source setLightAmbient [0, 0, 0];
_source setLightDayLight true;
_source setLightIntensity 5000;
_source setLightAttenuation [0, 2, 4, 4];

_projectile addEventHandler ["Explode", {
	params ["_projectile", "_position", "_velocity"];
	[_position] spawn njt_fnc_randomNadeActivate;
}];

_projectile addEventHandler ["Deleted", {
	params ["_projectile"];
	deleteVehicle attachedObjects _projectile;
}];