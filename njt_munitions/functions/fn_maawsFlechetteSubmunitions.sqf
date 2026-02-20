params ["_projectile"];

if !(local ((getShotParents _projectile) select 0)) exitWith{};

_projectile addEventHandler ["SubmunitionCreated", {
	params ["_projectile", "_submunition"];
	private _velocity = velocity _projectile;
	_submunition setVectorDir vectorNormalized _velocity;
	_submunition setVelocity _velocity;
	triggerAmmo _submunition;
	deleteVehicle _projectile;
}];