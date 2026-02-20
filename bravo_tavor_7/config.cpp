class CfgPatches
{
	class bravo_tavor_7
	{
		name = "Tavor 7";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "rhssaf_c_weapons"};
		units[] = {};
		weapons[] = { "bravo_tavor_7" };
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"