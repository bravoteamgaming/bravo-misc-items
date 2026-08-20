params ["_vehicle"];
if (isNull _vehicle) exitWith{};
if (!alive _vehicle) exitWith{};

// Active Protection System Module

if (fileExists "\z\ace\addons\main\script_component.hpp") then {
	_vehicle call bravo_fnc_apsActionsACE;
} else {
	_vehicle call bravo_fnc_apsActionsVanilla;
};

if (isNil "bravo_var_apsActiveVehicles") then {
	bravo_var_apsActiveVehicles = [];
};

if (isNil "bravo_var_apsEachFrame") then {
	// initialise main APS overwatch
	bravo_var_apsEachFrame = addMissionEventHandler ["eachFrame",{
		{
			private _vehicle = _x;
			private _projectiles = [_vehicle] call bravo_fnc_apsNearProjectiles;
			if (count _projectiles > 0) then {
				{
					// If the projectile hasn't already been handled, activate interceptor
					private _isHandled = (_x in (_vehicle getVariable ["bravo_var_apsTracked",[]]));
					if !(_isHandled) then {
						[_x,_vehicle] spawn bravo_fnc_apsIntercept;
					};
				} forEach _projectiles;
			};
		} forEach bravo_var_apsActiveVehicles;
	}];
};

_vehicle spawn {
	sleep 1;
	// Initialise APS maintenance loop
	[_this] spawn bravo_fnc_apsLoop;
};