params ["_control", "_mode"];

if (_mode == 0) then {
	private _list = [
		["bo_gbu12_lgb", "500lb GBU-12"],
		["bomb_03_f", "565lb KAB-250"],
		["ammo_bomb_sdb", "250lb SDB"],
		["bombcluster_03_ammo_f", "BL778 cluster"],
		["bombcluster_01_ammo_f", "CBU-85 cluster"],
		["bombcluster_02_ammo_f", "RBK500F cluster"],
		["vnx_bomb_agm62_ammo", "825lb AGM-62 Walleye [SOG]"],
		["vn_bomb_2000_gbu8_he_ammo", "2000lb GBU-8 [SOG]"],
		["fir_gbu55", "1000lb GBU-55 JDAM [FIR]"],
		["fir_gbu56", "2000lb GBU-56 JDAM [FIR]"],
		["FIR_KAB500L", "990lb KAB-500 [FIR]"],
		["kat_cas_m43_ammo", "M43 BZ gas bomb [KAT]"]
	];

	{
		private _newRow = _control lbAdd (_x#1);
		_control lbSetData [_newRow, _x#0];
	} forEach _list;

	_control lbSetCurSel (_list findIf {(_x#0) == (missionNamespace getVariable ["bravo_var_precisionStrikeTypeOverride","bo_GBU12_LGB"])});
} else {
	private _list = [
		["B_Plane_Fighter_01_F", "F/A-181 Black Wasp II"],
		["B_Plane_CAS_01_dynamicLoadout_F", "A-164 Wipeout"],
		["O_Plane_Fighter_02_F", "To-201 Shikra"],
		["O_Plane_CAS_02_dynamicLoadout_F", "Yak-130 (CSAT)"],
		["I_Plane_Fighter_04_F", "JAS 39 Gripen (AAF)"],
		["I_Plane_Fighter_03_dynamicLoadout_F", "L-159 ALCA (AAF)"],
		["vn_b_air_f4b_navy_bmb", "F-4B Phantom II [SOG]"],
		["vn_b_air_f4c_bmb", "F-4C Phantom II [SOG]"],
		["vnx_b_air_a4e_usn_bmb", "A-4E Skyhawk (US) [SOG]"],
		["vnx_b_air_a4e_ran_bmb", "A-4E Skyhawk (AU) [SOG]"],
		["rhs_mig29s_vvsc", "MiG-29 (RU) [RHS]"],
		["UK3CB_CSAT_F_O_MIG29SM", "MiG-29 (CSAT) [3CB]"],
		["RHS_Su25SM_vvsc", "Su-25 (RU) [RHS]"],
		["UK3CB_CSAT_F_O_Su25SM", "Su-25 (CSAT) [3CB]"],
		["FIR_F35B_Standard", "F-35B Lightning II [FIR]"],
		["FIR_F18C", "F/A-18C Hornet [FIR]"],
		["FIR_F18D", "F/A-18D Hornet [FIR]"],
		["FIR_AV8B", "AV-8B Harrier II [FIR]"],
		["FIR_AV8B_GR9A", "Harrier GR.9 [FIR]"],
		["RHSGREF_A29B_HIDF", "A-29 Super Tucano [RHS]"],
		["RHS_A10", "A-10A Thunderbolt II [RHS]"]
	];

	{
		private _newRow = _control lbAdd (_x#1);
		_control lbSetData [_newRow, _x#0];
	} forEach _list;

	_control lbSetCurSel (_list findIf {(_x#0) == (missionNamespace getVariable ["bravo_var_precisionStrikeJetOverride","B_Plane_Fighter_01_F"])});
};