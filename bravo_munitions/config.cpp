class CfgPatches
{
	class bravo_munitions
	{
		name = "Munitions";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder", "UK3CB_BAF_Weapons_Ammo", "rhs_main_loadorder", "rf_data_loadorder"};
		units[] = {
			"bravo_trapped_gun_mine_nato",
			"bravo_trapped_gun_mine_natocw",
			"bravo_trapped_gun_mine_ru",
			"bravo_trapped_gun_mine_rucw",
			"bravo_trapped_gun_mine_csat",
			"bravo_trapped_gun_mine_ww2ger",
			"bravo_trapped_gun_mine_ww2allied",
			"bravo_module_trapped_gun_mine_nato",
			"bravo_module_trapped_gun_mine_natocw",
			"bravo_module_trapped_gun_mine_ru",
			"bravo_module_trapped_gun_mine_rucw",
			"bravo_module_trapped_gun_mine_csat",
			"bravo_module_trapped_gun_mine_ww2ger",
			"bravo_module_trapped_gun_mine_ww2allied"
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