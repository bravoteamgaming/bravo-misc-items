params ["_mine"];
if !isServer exitWith{};

private _guns = getArray ((configOf _mine) >> "bravo_gunTrapClasses");
private _gun = selectRandom _guns;
private _mags = getArray (configFile >> "cfgWeapons" >> _gun >> "magazines");
private _defaultMag = _mags select 0;

private _container = createVehicle ["groundweaponholder_scripted", getPosASL _mine];
_container addWeaponWithAttachmentsCargoGlobal [[_gun, "", "", "", [_defaultmag, 200], [], ""],1];
_container attachTo [_mine, [-0.02,-0.02,0.660]];
_container setVariable ["bravo_trappedgun_mine", _mine, true];
_mine setVariable ["bravo_trappedgun_container", _container, true];

[_mine,
	["Explode", {
		params ["_mine"];
		private _container = _mine getVariable ["bravo_trappedgun_container", objNull];
		deleteVehicle _container;
	}]
] remoteExec ["addEventHandler", 0, true];

[_container,
	["ContainerOpened", {
		params ["_container"];
		private _mine = _container getVariable ["bravo_trappedgun_mine", objNull];
		triggerAmmo _mine;
	}]
] remoteExec ["addEventHandler", 0, true];