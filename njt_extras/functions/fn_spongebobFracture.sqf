["ace_medical_fracture",{
	params ["_unit", "_bodyPart"];
	if (_bodyPart > 3) then {
		private _random = floor random 200;
		if (_random == 1) then {
			_unit spawn {
				params ["_unit"];
				sleep 0.3;
				private _pos = (getPosASL _unit) vectorAdd [0,0,1];
				playSound3D ["\njt_extras\assets\my_leg.ogg", _unit, false, _pos, 5, 1, 50];
			};
		};
	};
}] call CBA_fnc_addEventHandler;
