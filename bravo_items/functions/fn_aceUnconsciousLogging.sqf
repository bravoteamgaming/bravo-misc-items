[
	"ace_unconscious",
	{
		params ["_unit", "_state"];
		if !(isPlayer _unit) exitWith{};
		private _text = ["wakeup", "downed"] select _state;
		diag_log text format ["[Bravo] %1 %2 ACE %3", name _unit, getPlayerUID _unit, _text];
		
		if (_state && {_unit == player}) then {
			steamGameRecordingEvent ["bravo_aceunconscious", 0, [], 0];
		};
	}
] call CBA_fnc_addEventHandler;