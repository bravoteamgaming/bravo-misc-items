params ["_control"];

private _list = [
	["bo_gbu12_lgb", "500lb GBU-12"],
	["bomb_03_f", "565lb KAB-250"],
	["ammo_bomb_sdb", "250lb SDB"],
	["bombcluster_03_ammo_f", "BL778 cluster"],
	["bombcluster_01_ammo_f", "CBU-85 cluster"],
	["bombcluster_02_ammo_f", "RBK500F cluster"],
	["rhs_ammo_kh29ml", "705lb Kh-29 [RHS]"],
	["rhs_ammo_kh38mle", "551lb Kh-38 [RHS]"],
	["rhs_ammo_kh55sh", "Kh-55 HE (laser only) [RHS]"],
	["rhs_ammo_kh55sm", "Kh-55 Nuke (laser only) [RHS]"],
	["vnx_bomb_agm62_ammo", "825lb AGM-62 Walleye [SOG]"],
	["vn_bomb_2000_gbu8_he_ammo", "2000lb GBU-8 [SOG]"],
	["vnx_missile_agm12b_ammo", "250lb AGM-12B Bullpup [SOG]"],
	["vn_missile_agm12c_ammo", "970lb AGM-12C Bullpup [SOG]"],
	["fir_gbu24a_blu109", "2000lb GBU-24 Bunker Buster [FIR]"],
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