params ["_projectile"];
if !isServer exitWith{};

private _velocity = velocity _projectile;
private _position = getPosASL _projectile;

private _object = "bravo_weaponHolder_multiNade" createVehicle [0,0,0];
_object setPosASL _position;
_object setVelocity _velocity;