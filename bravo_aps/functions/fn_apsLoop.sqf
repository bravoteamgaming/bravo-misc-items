// APS - MAINTENANCE LOOP MODULE
// This function performs maintenance tasks on vehicles.
params ["_vehicle"];

if (_vehicle isNil "bravo_var_apsCleanupLoop") then {
// Cleanup: regularly empty the vehicle's tracked objects array of old junk
	private _handle = [_vehicle] spawn {
		params ["_vehicle"];
		while {alive _vehicle} do {
			private _handledProjectiles = _vehicle getVariable ["bravo_var_apsTracked",[]];
			_handledProjectiles = _handledProjectiles - [objNull];
			_vehicle setVariable ["bravo_var_apsTracked",_handledProjectiles];
			
			sleep 10;
		};
	};
	_vehicle setVariable ["bravo_var_apsCleanupLoop", _handle];
};

// Regularly check for all vehicles' APS status and remove/add from global array
if isServer then {
	if (isNil "bravo_var_apsStatusLoop") then {
		bravo_var_apsStatusLoop = 0 spawn {
			while {true} do {
				{
					if (!alive _x) then {
						bravo_var_apsActiveVehicles = bravo_var_apsActiveVehicles - [_x];
						continue;
					};
					private _apsEnabled = _x getVariable ["bravo_var_apsEnabled",false];
					private _apsCooldown = _x getVariable ["bravo_var_apsCooldown",false];
					if (_apsEnabled && !_apsCooldown) then {
						bravo_var_apsActiveVehicles pushbackUnique _x;
					} else {
						bravo_var_apsActiveVehicles = bravo_var_apsActiveVehicles - [_x];
					};
				} forEach entities [["LandVehicle"],[],false,false];
				publicVariable "bravo_var_apsActiveVehicles";
				sleep 1;
			};
		};
	};
};