params ["_obj"];
// _obj setVehicleRadar 1;
if !(local ((getShotParents _obj) select 1)) exitWith{};
/*
private _targets = driver _obj targets [true];
private _searchCount = 0;
while {(count _targets) < 1} do {
	if (_searchCount > 5) then {break};
	_targets = driver _obj targets [true];
	_searchCount = _searchCount + 1;
	sleep 0.5;
};
if (_searchCount > 5) exitWith {
	deleteVehicle _obj;
	systemChat "CUAS search exited";
};
*/

_obj setVectorDirAndUp [[0, 0, 1], [0,-1,0]];

private _owner = (getShotParents _obj)#1;
private _targets = [];
private _isTracking = false;
private _searchCount = 0;
while {!_isTracking} do {
	if (_searchCount > 5) then {break};
	private _entities = (_obj modelToWorld [0,0,0]) nearEntities ["Air", 500];
	private _entitiesReady = _entities select {
		if (!(unitIsUAV _x) or !(alive _x)) then {
			false
		} else {
			private _vectorSpeed = vectorMagnitude velocity _x;
			private _alt = (getPos _x) select 2;
			(_alt > 7) && {(_vectorSpeed < 55) && ([side group _owner, side _x] call bis_fnc_sideIsEnemy)}
		};
	};

	if ((count _entitiesReady) > 0) then {
		private _pos1 = getPosASL _obj;
		private _entitiesData = _entitiesReady apply {[_pos1, aimPos _x, _obj, objNull], [_pos1, eyePos _x, _obj, objNull], [_pos1, (visiblePositionASL _x) vectorAdd [0,0,0.1], _obj, objNull]};
		private _entitiesIntersects = lineIntersectsSurfaces [_entitiesData];
		_targets = _entitiesIntersects select {(_x#0#3) in _entitiesReady};
	};
	if ((count _targets) < 1) then {
		sleep 0.5;
		_searchCount = _searchCount + 1;
	} else {
		_isTracking = true;
	};
};

if (_searchCount > 5) exitWith {
	_obj addEventHandler ["SubmunitionCreated", {
		params ["_projectile", "_submunition"];
		// deleteVehicle _projectile;
		triggerAmmo _submunition;
	}];
	triggerAmmo _obj;
};

_targets = _targets apply {_x#0#3};
private _nearest = ([_targets, [], {_x distance _obj}] call BIS_fnc_sortBy) select 0;
_obj setMissileTarget [_nearest, true];
_obj addEventHandler ["SubmunitionCreated", {
	params ["_projectile", "_submunition"];
	_submunition setVectorDir ((getPosASL _submunition) vectorFromTo (getPosASL missileTarget _projectile));
	_submunition setMissileTarget [missileTarget _projectile, true];
	deleteVehicle _projectile;
}];
triggerAmmo _obj;