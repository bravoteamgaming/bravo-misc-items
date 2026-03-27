if !isServer exitWith{};
0 spawn {
	sleep 1;
	call bravo_fnc_duiLoadCustomInfo;
	addMissionEventHandler ["OnUserSelectedPlayer", {
		_this spawn {
			sleep 1;
			params ["_networkId", "_playerObject"];
			private _uid = getPlayerUID _playerObject;
			private _varname = "bravo_duiPersistentData_" + _uid;
			private _data = profileNamespace getVariable [_varName, ""];
			_playerObject setVariable ["diwako_dui_nametags_customInfo", _data, true];
		};
	}];
};