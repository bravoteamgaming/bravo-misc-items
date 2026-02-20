class CfgPatches
{
	class bravo_mk200_556
	{
		name = "Mk200 5,56";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"A3_Weapons_F_Enoch_Machineguns_M200"};
		units[] = {};
		weapons[] = { "bravo_mk200_556", "bravo_mk200_556_blk" };
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"