params ["_grenadePos", ["_forcedCase", ""]];
if !isServer exitWith{};

private _extraTypes = missionNamespace getVariable ["njt_var_randomNadeTypes_extra", []];

private _baseTypes = [
	[
		["B_CTRG_Miller_F", {[_this, ["Miller", "Scott", "Miller"]] remoteExec ["setName", 0, true]}, true]
	],
	[
		["Submarine_01_F", {_this setDir random 360}]
	],
	[
		["B_Quadbike_01_F", {_this setDir random 360}]
	],
	[
		["Bo_Mk82", {_this setDir random 360}]
	],
	[
		["rhs_ammo_m84", {_this setVelocity [0,8,6]; sleep 0.1;}],
		["rhs_ammo_m84", {_this setVelocity [8,0,6]; sleep 0.1;}],
		["rhs_ammo_m84", {_this setVelocity [0,-8,6]; sleep 0.1;}],
		["rhs_ammo_m84", {_this setVelocity [-8,0,6]}]
	],
	[
		["njt_p601_wrx", {_this setDir random 360}]
	],
	[
		["UK3CB_C_OLD_BIKE", {_this setDir random 360}]
	],
	[
		["SPE_Shg24_Frag", {_this setVelocity [0,10,8]; sleep 0.1;}],
		["SPE_Shg24_Frag", {_this setVelocity [10,0,8]; sleep 0.1;}],
		["SPE_Shg24_Frag", {_this setVelocity [0,-10,8]; sleep 0.1;}],
		["SPE_Shg24_Frag", {_this setVelocity [-10,0,8]}]
	],
	[
		["Land_SPE_Decoy_01", {_this setDir random 360}, false, true]
	],
	[
		["Land_Football_01_F", {
			{
				[_x, random [30, 180, 330]] remoteExec ["setDir"];
				["TaskSucceeded", ["","GET ROTATED IDIOT"]] remoteExec ["BIS_fnc_showNotification", _x];
			} forEach (allPlayers select {isNull objectParent _x});
		}]
	],
	[
		["Land_MetalCase_01_medium_F", {
			_this addItemCargoGlobal ["ACE_MRE_ChickenTikkaMasala", 5];
			_this addItemCargoGlobal ["ACE_MRE_MeatballsPasta", 5];
			_this addItemCargoGlobal ["ACE_MRE_CreamTomatoSoup", 5];
		}]
	],
	[
		["O_V_Soldier_TL_hex_F", {}, true],
		["O_V_Soldier_M_hex_F", {[_this] join (nearestObject [_this, "O_V_Soldier_TL_hex_F"])}, true],
		["O_V_Soldier_LAT_hex_F", {[_this] join (nearestObject [_this, "O_V_Soldier_TL_hex_F"])}, true],
		["O_V_Soldier_Medic_hex_F", {[_this] join (nearestObject [_this, "O_V_Soldier_TL_hex_F"])}, true],
		["O_V_Soldier_hex_F", {[_this] join (nearestObject [_this, "O_V_Soldier_TL_hex_F"])}, true]
	],
	[
		["C_Tractor_01_F", {_this setDir random 360}]
	],
	[
		["ACE_BananaItem", {skipTime random [3, 12, 20]}]
	],
	[
		["SPE_PzKpfwVI_H1", {createVehicleCrew _this; _this setDir random 360}]
	],
	[
		["CUP_toilet_b", {_this setDir random 360}, false, true]
	],
	[
		["Land_MetalCase_01_medium_F", {
			_this addItemCargoGlobal ["njt_hs50_20", 1];
			_this addItemCargoGlobal ["optic_AMS", 1];
			_this addItemCargoGlobal ["njt_3rnd_hs50_20_apds", 2];
			_this addItemCargoGlobal ["njt_3rnd_hs50_20_he", 3];
		}]
	],
	[
		["ACE_BananaItem", {if (timeMultiplier > 1.5) then {setTimeMultiplier random 1.5} else {setTimeMultiplier random [20, 50, 120]}}]
	],
	[
		["Land_MetalCase_01_medium_F", {
			_this addItemCargoGlobal ["njt_saxbomb", 20];
			_this addItemCargoGlobal ["uk3cb_baf_smokeshellorange", 5];
		}]
	],
	[
		["UK3CB_Scud_Missile_Horizontal", {_this allowDamage false; _this setDir random 360}]
	],
	[
		["Land_MetalCase_01_medium_F", {
			_this addItemCargoGlobal ["bvt_item_kitkat", 200];
			_this addItemCargoGlobal ["uk3cb_baf_smokeshellorange", 5];
		}]
	],
	[
		["uk3cb_c_s1203", {
			_this setDir random 360;
			[_this, ["Orange", 1]] call BIS_fnc_initVehicle;
		}]
	],
	[
		["land_orange_01_f", {_this allowDamage false; _this setVelocity [0,8,6]; sleep 0.1;}],
		["land_orange_01_f", {_this allowDamage false; _this setVelocity [8,0,6]; sleep 0.1;}],
		["land_orange_01_f", {_this allowDamage false; _this setVelocity [0,-8,6]; sleep 0.1;}],
		["land_orange_01_f", {_this allowDamage false; _this setVelocity [-8,0,6]; sleep 0.1;}],
		["land_orange_01_f", {_this allowDamage false; _this setVelocity [0,8,6]; sleep 0.1;}],
		["land_orange_01_f", {_this allowDamage false; _this setVelocity [8,0,6]; sleep 0.1;}],
		["land_orange_01_f", {_this allowDamage false; _this setVelocity [0,-8,6]; sleep 0.1;}],
		["land_orange_01_f", {_this allowDamage false; _this setVelocity [-8,0,6]}]
	],
	[
		["c_driver_4_f", {
			_this disableAI "ALL";
			_this switchMove selectRandom ["ActsPercMstpSnonWnonDnon_DancingDuoIvan", "ActsPercMstpSnonWnonDnon_DancingDuoStefan", "ActsPercMstpSnonWnonDnon_DancingMetal", "ActsPercMstpSnonWnonDnon_DancingStefan", "ActsPercMstpSnonWnonDnon_DancingZOZO"];
			playSound3D ["\A3\music_f_Bootcamp\Music\LeadTrack02_F_Bootcamp.ogg", _this, false, getPosASL _this, 3, 1, 50];
		}, true]
	],
	[
		["c_kart_01_f", {_this setVelocity [0,8,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [8,0,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [0,-8,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [-8,0,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [0,8,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [8,0,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [0,-8,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [-8,0,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [0,8,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [8,0,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [0,-8,6]; sleep 0.5;}],
		["c_kart_01_f", {_this setVelocity [-8,0,6];}]
	],
	[
		["APERSMineDispenser_Ammo_Scripted", {_this setDir random 360; triggerAmmo _this; sleep 0.2}],
		["APERSMineDispenser_Ammo_Scripted", {_this setDir random 360; triggerAmmo _this}]
	],
	[
		[selectRandom ["cup_t_alnus2s", "cup_str_buk", "cup_t_betula2s_summer", "cup_les_dub", "cup_palm_09", "cup_t_pinusn2s", "cup_t_picea3f", "cup_t_salix2s"], {_this setDir random 360}, false, true]
	],
	[
		[selectRandom ["cup_t_alnus2s", "cup_str_buk", "cup_t_betula2s_summer", "cup_les_dub", "cup_palm_09", "cup_t_pinusn2s", "cup_t_picea3f", "cup_t_salix2s"], {_this setDir random 360}, false, true]
	],
	[
		["UK3CB_UN_I_T55", {createVehicleCrew _this; _this setDir random 360}]
	],
	[
		["cup_winter_obj_snowman", {_this setDir random 360}, false, true]
	],
	[
		["land_armchair_01_f", {_this setVelocity [0,8,6]; sleep 0.1;}],
		["land_armchair_01_f", {_this setVelocity [8,0,6]; sleep 0.1;}],
		["land_armchair_01_f", {_this setVelocity [0,-8,6]; sleep 0.1;}],
		["land_armchair_01_f", {_this setVelocity [-8,0,6]}]
	],
	[
		["Land_Football_01_F", {
			[1,[1, 0, 300]] remoteExec ["setFog"];
		}]
	],
	[
		["njt_multiNade_ammo", {}]
	],
	[
		["dromedary_01_lxws", {_this setDir random 360}, true]
	],
	[
		["mfr_c_germanshepherd_black", {
			private _name = selectRandom ["Patatas", "Grommit", "Flymo", "Fenton", "Blue", "Dogmeat", "Jarnathan", "Lassie", "Jorts"];
			[_this, [_name, "", _name]] remoteExec ["setName", 0, true];
			_this setDir random 360;
		}, true]
	],
	[
		["c_soldier_vr_f", {_this setDir random 360}, true]
	],
	[
		["c_boat_civil_01_rescue_f", {_this setDir random 360}]
	],
	[
		["Land_Football_01_F", {
			["RealIsBrown", 0, true] call BIS_fnc_setPPeffectTemplate;
		}]
	],
	[
		["RHSGREF_A29B_HIDF", {_this setDir random 360}]
	],
	[
		["ACE_BananaItem", {createMine ["UnderWaterMine", _this, [], 0]}]
	],
	[
		["land_trophy_01_bronze_f", {_this setDir random 360}]
	],
	[
		["land_ancientstatue_01_f", {_this setDir random 360}, false, true]
	],
	[
		["Land_SPE_Windmill", {_this setDir random 360}, false, true]
	],
	[
		["land_gm_euro_furniture_bed_02", {_this setDir random 360}]
	]
];

private _allTypes = _baseTypes + _extraTypes;

private _type = [];
if (_forcedCase isEqualType 0) then {
	_type = _allTypes select _forcedCase
} else {
	_type = selectRandom _allTypes;
};

playSound3D ["njt_extras\assets\fart3.ogg", player, false, _grenadePos, 2, 1, 500];

{
	_x params ["_class", "_initCode", ["_isUnit", false], ["_isBuilding", false]];
	private _object = objNull;
	if _isUnit then {
		private _side = getNumber (configFile >> "cfgVehicles" >> _class >> "side");
		_side = _side call BIS_fnc_sideType;
		_object = (createGroup _side) createUnit [_class, [0,0,0], [], 0, "NONE"];
	} else {
		_object = createVehicle [_class, [[0,0,0], ASLtoATL _grenadePos] select _isBuilding, [], 0, "CAN_COLLIDE"];
	};
	if !_isBuilding then {
		_object setPosASL _grenadePos;
	};
	_object call _initCode;
} forEach _type;