class CfgPatches
{
	class bravo_rhs_ammo
	{
		name = "RHS Ammo";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder", "rhs_main_loadorder", "rhsusf_main_loadorder", "uk3cb_factions_weapons2"};
		units[] = {	};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgWeapons.hpp"