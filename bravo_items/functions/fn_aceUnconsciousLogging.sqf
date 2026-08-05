[
	"ace_unconscious",
	{
		params ["_unit", "_state"];
		if !(isPlayer _unit) exitWith{};
		private _text = ["wakeup", "downed"] select _state;
		[["[Bravo] %1 %2 ACE %3", name _unit, getPlayerUID _unit, _text]] call bravo_fnc_logToRPT;
		
		if (_state && {_unit == player}) then {
			steamGameRecordingEvent ["bravo_aceunconscious", 0, [], 0];
		};
	}
] call CBA_fnc_addEventHandler;

[
	"ace_medical_treatment_bandaged",
	{
		params ["_medic", "_patient"];
		
		[["[Bravo] %1 ACE bandaged %2", name _medic, name _patient]] remoteExec ["bravo_fnc_logToRPT", [[2, clientOwner], 2] select isServer];
	}
] call CBA_fnc_addEventHandler;