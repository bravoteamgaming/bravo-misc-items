class CfgPatches
{
	class bravo_spemg
	{
		name = "SPE MG conversions";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c","gm_weapons_machineguns_mg3"};
		units[] = {};
		weapons[] = { "bravo_mg34f2", "bravo_mg34f1", "bravo_ksp42b_65", "bravo_ksp42b_762", "bravo_gv1941"};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"

#include "cfgMagazines.hpp"

#include "cfgAmmo.hpp"