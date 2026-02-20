params ["_projectile"];

if !(local _projectile) exitWith{};

private _dir = vectorDir _projectile;
private _pos = getPosASL _projectile;
private _endPos = (getPosASL _projectile) vectorAdd (_dir vectorMultiply 3);
private _intersect = (lineIntersectsSurfaces [_pos, _endPos, _projectile]) select 0;
private _object = _intersect select 3;

if (isNull _object) exitWith{};
if (_object isKindOf "CAManBase") exitWith{};
if ((_object isKindOf "AllVehicles") && {simulationEnabled _object}) then {
	[_projectile, _object] call BIS_fnc_attachToRelative;
};