class CfgPatches
{
	class njt_munitions
	{
		name = "Munitions";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder", "UK3CB_BAF_Weapons_Ammo", "rhs_main_loadorder", "rf_data_loadorder"};
		units[] = {
			"njt_trapped_gun_mine_nato",
			"njt_trapped_gun_mine_natocw",
			"njt_trapped_gun_mine_ru",
			"njt_trapped_gun_mine_rucw",
			"njt_trapped_gun_mine_csat",
			"njt_trapped_gun_mine_ww2ger",
			"njt_trapped_gun_mine_ww2allied",
			"njt_module_trapped_gun_mine_nato",
			"njt_module_trapped_gun_mine_natocw",
			"njt_module_trapped_gun_mine_ru",
			"njt_module_trapped_gun_mine_rucw",
			"njt_module_trapped_gun_mine_csat",
			"njt_module_trapped_gun_mine_ww2ger",
			"njt_module_trapped_gun_mine_ww2allied"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"

#include "cfgMagazines.hpp"

#include "cfgAmmo.hpp"

#include "cfgVehicles.hpp"

#include "cfgFunctions.hpp"