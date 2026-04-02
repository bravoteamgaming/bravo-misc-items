if !isServer exitWith{};
0 spawn {
	sleep 1;
	[] remoteExec ["bravo_fnc_duiSetCustomInfo"];
	addMissionEventHandler ["OnUserSelectedPlayer", {
		_this spawn {
			sleep 1;
			params ["_networkId", "_playerObject"];
			[] remoteExec ["bravo_fnc_duiSetCustomInfo", _playerObject];
		};
	}];
};