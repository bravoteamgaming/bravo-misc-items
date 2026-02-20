params ["_position"];
private _baseSmoke = "UK3CB_SmokeShellMortarWhiteBase";
private _pillarSmoke = "UK3CB_SmokeShellMortarWhitePillar";

private _source1 = "#particlesource" createVehicleLocal _position;
_source1 setPosASL _position;
_source1 setParticleClass _pillarSmoke;

sleep 2;

private _source2 = "#particlesource" createVehicleLocal _position;
_source2 setPosASL (_position vectorAdd [7,0,0]);
_source2 setParticleClass _baseSmoke;

private _source3 = "#particlesource" createVehicleLocal _position;
_source3 setPosASL (_position vectorAdd [-4,-7,0]);
_source3 setParticleClass _baseSmoke;

private _source4 = "#particlesource" createVehicleLocal _position;
_source4 setPosASL (_position vectorAdd [-4,7,0]);
_source4 setParticleClass _baseSmoke;

sleep 90;

deleteVehicle [_source1, _source2, _source3, _source4];