params ["_projectile"];

private _pos = getPosASL _projectile;
private _emitter = "#particlesource" createVehicleLocal _pos;
_emitter setPosASL _pos;
_emitter setParticleClass "AutoCannonFired";
playSound3D ["A3\Sounds_F_Enoch\Assets\Arsenal\Bullet_Impacts\Impact_Dirt_10.wss", _projectile, false, _pos, 10, 0.7, 50, 0, true];

sleep 0.5;
deleteVehicle _emitter;