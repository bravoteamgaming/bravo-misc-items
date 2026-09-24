class CfgPatches
{
	class bravo_spehipfire
	{
		name = "SPE hipfire for other guns";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {
			"A3_Data_F_Decade_Loadorder",
			"gm_weapons_machineguns_mg3",
			"gm_weapons_machineguns_pk",
			"rhs_main_loadorder",
			"rhsgref_main_loadorder",
			"rhssaf_main_loadorder",
			"rhsusf_main_loadorder",
			"UK3CB_BAF_Weapons",
			"UK3CB_Factions_Weapons_MG3",
			"UK3CB_Factions_Weapons_M60",
			"UK3CB_Factions_Weapons_HS50",
			"UK3CB_Factions_Weapons_Browning",
			"UK3CB_Factions_Weapons2_UK59",
			"Weapons_1_F_lxWS",
			"WW2_SPE_Core_a_HipFire_a",
			"vn_data_f",
			"vnx_build_number"
		};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"