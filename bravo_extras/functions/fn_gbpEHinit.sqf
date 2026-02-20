bravo_var_gbpEH = addMissionEventHandler ["EntityKilled",{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		if ((missionNamespace getVariable ["bravo_var_gbpActive",false]) && {_unit isKindOf "CAManBase"}) then {
			[_unit] spawn bravo_fnc_gbpEH;
		};
	}];