if !(local (_this#0)) exitWith{};
_this spawn {
	params ["_module", ["_doText", true], ["_type", missionNamespace getVariable ["bravo_var_precisionStrikeTypeOverride","bo_GBU12_LGB"]]];

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

	private _bomb = _type createVehicle [0,0,500];
	_bomb setPosASL _posBomb;
	private _vector = _posBomb vectorFromTo _posTarget;
	_bomb setVectorDir _vector;
	_bomb setVelocity (_vector vectorMultiply 150);
	_bomb setMissileTarget [_nearestTarget, true];
	if (_type == "fir_gbu24a_blu109") then {
		[_bomb] execVM "\FIR_AirWeaponSystem_US\script\WEP\BLU109.sqf";
	};
	
	if _doText then {
		private _timerEh = addMissionEventHandler ["Draw3D", {
			private _bomb = _thisArgs#0;
			private _target = missileTarget _bomb;
			drawIcon3D [
				"\a3\ui_f\data\IGUI\Cfg\Radar\radar_ca.paa",
				[1, 0.2, 0.2, 1],
				_target modelToWorldVisual [0,0,1],
				1,
				1,
				0,
				format ["STRIKE - %1 m", [_bomb distance _target, 10] call bis_fnc_roundNum]
			];
		}, [_bomb]];
		waitUntil {isNull _bomb};
		removeMissionEventHandler ["Draw3D", _timerEh];
	};
};