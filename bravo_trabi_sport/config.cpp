class CfgPatches
{
	class bravo_trabi_sport
	{
		name = "P601 RS";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"gm_vehicles_land_wheeled_p601_gc_civ_p601"};
		units[] = {"bravo_p601_sport", "bravo_p601_wrx"};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgVehicles.hpp"