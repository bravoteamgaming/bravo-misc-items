0 spawn {
	sleep 5;
	if (isNil "njt_bft_data") then {
		njt_bft_data = createHashmap;
	};
	if !hasInterface exitWith{};
	private _markerWave = [];
	while {true} do {
		{
			deleteMarkerLocal _x;
		} forEach _markerWave;
		_markerWave = [];
		if ((count njt_bft_data) < 1) then {sleep 5; continue};
		private _canDisplay = false;
		if (vehicle player != player) then {_canDisplay = true;};
		private _terminal = player getSlotItemName 612;
		private _simType = getText (configFile >> "CfgWeapons" >> _terminal >> "simulation");
		private _slotType = [configFile >> "CfgWeapons" >> _terminal >> "ItemInfo", "type", 0] call BIS_fnc_returnConfigEntry;
		if ((_simType == "ItemGPS") or {_slotType == 621}) then {_canDisplay = true;};
		
		if !_canDisplay then {sleep 5; continue};
		
		{
			private _data = njt_bft_data get _x;
			_data params ["_type", "_colour", "_name"];
			
			private _marker = createMarkerLocal ["njt_bft_marker_" + _x, objectFromNetId _x];
			_marker setMarkerShapeLocal "ICON";
			_marker setMarkerTypeLocal _type;
			_marker setMarkerColorLocal _colour;
			_marker setMarkerTextLocal _name;
			_markerWave pushBack _marker;
		} forEach keys njt_bft_data;
		sleep 5;
	};
};