class CfgPatches
{
	class bravo_sdar_762
	{
		name = "SDAR 7.62";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "rhssaf_c_weapons", "WW2_SPEX_Assets_c_Weapons_Sounds_c"};
		units[] = {};
		weapons[] = { "bravo_sdar_762" };
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"