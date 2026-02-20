class CfgPatches
{
	class njt_m34f2
	{
		name = "MG 34F2";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c","gm_weapons_machineguns_mg3"};
		units[] = {};
		weapons[] = { "njt_mg34f2", "njt_mg34f1" };
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"

#include "cfgMagazines.hpp"