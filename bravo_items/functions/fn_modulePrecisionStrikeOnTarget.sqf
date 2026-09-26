if !(local (_this#0)) exitWith{};
_this spawn {
	params ["_module", ["_doText", true], ["_type", missionNamespace getVariable ["bravo_var_precisionStrikeTypeOverride","bo_GBU12_LGB"]], ["_jetType", missionNamespace getVariable ["bravo_var_precisionStrikeJetOverride", "B_Plane_Fighter_01_F"]]];

	private _nearTargets = _module nearEntities [["LaserTargetBase", "NVG_TargetBase"], 100];

	if ((count _nearTargets) < 1) exitWith {
		if _doText then {
			systemChat "[Bravo] Strike module: no valid targets within 100 metres. Drop cancelled.";
		};
		deleteVehicle _module;
	};

	private _nearestTarget = ([_nearTargets, [_module], {_x distance _input0}] call BIS_fnc_sortBy) select 0;
	if _doText then {
		systemChat format ["[Bravo] Strike module: target identified and marked. Delete the module within 10 seconds to abort drop. GRID: %1", mapGridPosition _nearestTarget];
		private _eh = addMissionEventHandler ["Draw3D", {
			private _target = _thisArgs#0;
			drawIcon3D [
				"\a3\ui_f\data\IGUI\Cfg\Radar\radar_ca.paa",
				[1, 0.2, 0.2, 1],
				_target modelToWorldVisual [0,0,1],
				1,
				1,
				0,
				"STRIKE TARGET"
			];
		}, [_nearestTarget]];
		sleep 10;
		removeMissionEventHandler ["Draw3D", _eh];
	};
	
	if (isNull _module) exitWith {
		if _doText then {
			systemChat "[Bravo] Strike module: module was deleted. Drop cancelled.";
		};
	};

	if _doText then {
		systemChat format ["[Bravo] Strike module: weapon dropped at target GRID: %1", mapGridPosition _nearestTarget];
	};
	deleteVehicle _module;

	private _posTarget = getPosASL _nearestTarget;
	private _posBomb = _posTarget vectorAdd [selectRandom [600, -600], selectRandom [600,-600], 1500];
	
	private _posJet = _posTarget getPos [2000, (_posTarget getDir _posBomb)];
	_posJet set [2, 1000];
	private _jet = _jetType createVehicle [0,0,500];
	_jet setPosATL _posJet;
	private _crew = civilian createVehicleCrew _jet;
	_jet engineOn true;
	_jet setDir (_jet getDir _posTarget);
	_jet setVelocity ((vectorDir _jet) vectorMultiply 100);
	_jet flyInHeight 800;
	_crew setCombatBehaviour "CARELESS";
	_crew setCombatMode "BLUE";
	_crew move (_posTarget getPos [2000, (_posTarget getDir _posBomb) + 180]);

	private _bomb = _type createVehicle [0,0,500];
	_bomb setPosASL _posBomb;
	sleep 0.1;
	private _vector = _posBomb vectorFromTo _posTarget;
	_bomb setVectorDir _vector;
	_bomb setVelocity (_vector vectorMultiply (getNumber ((configOf _bomb) >> "maxSpeed")));
	sleep 0.1;
	_bomb setMissileTargetPos getPosATL _nearestTarget;
	_bomb setMissileTarget [_nearestTarget, true];
	sleep 0.1;
	_bomb setMissileTargetPos getPosATL _nearestTarget;
	_bomb setMissileTarget [_nearestTarget, true];
	
	if _doText then {
		private _timerEh = addMissionEventHandler ["Draw3D", {
			private _bomb = _thisArgs#0;
			private _target = missileTarget _bomb;
			private _targetPos = [];
			if (isNull _target) then {
				_targetPos = missileTargetPos _bomb;
			} else {
				_targetPos = _target modelToWorldVisual [0,0,1];
			};
			drawIcon3D [
				"\a3\ui_f\data\IGUI\Cfg\Radar\radar_ca.paa",
				[1, 0.2, 0.2, 1],
				_targetPos,
				1,
				1,
				0,
				format ["STRIKE - %1 m", [_bomb distance _target, 10] call bis_fnc_roundNum]
			];
		}, [_bomb]];
		waitUntil {isNull _bomb};
		removeMissionEventHandler ["Draw3D", _timerEh];
	};
	sleep 10;
	deleteVehicleCrew _jet;
	deleteVehicle _jet;
};