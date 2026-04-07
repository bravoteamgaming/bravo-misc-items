params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

if !(local _unit) exitWith{};

private _obj = "land_metalbarrel_f" createVehicle [0,0,0];
_obj attachTo [_projectile, [0,0.5,0]];
_obj setVectorDirAndUp [[1,0,0], [0,1,0]];
