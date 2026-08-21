params [["_mode",0], ["_projectilePos",[0,0,0]], ["_vicPos",[0,0,0]], ["_vehicle",objNull]];

if (_mode == 1) then {
	playSound ["bravo_aps_activation",2];

	private _centre = getDir _vehicle;
	private _sound2 = "";

	switch (true) do {
		case ([_centre, 90, _projectilePos] call BIS_fnc_inAngleSector) : {
			_sound2 = "bravo_aps_activation_front";
		};
		case ([_centre + 90, 90, _projectilePos] call BIS_fnc_inAngleSector) : {
			_sound2 = "bravo_aps_activation_right";
		};
		case ([_centre + 180, 90, _projectilePos] call BIS_fnc_inAngleSector) : {
			_sound2 = "bravo_aps_activation_rear";
		};
		case ([_centre + 270, 90, _projectilePos] call BIS_fnc_inAngleSector) : {
			_sound2 = "bravo_aps_activation_left";
		};
	};
	sleep 2;
	playSound [_sound2,2];
};

if (_mode == 0) then {
	playSound ["beep",2];
};
