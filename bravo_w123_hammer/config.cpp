class CfgPatches
{
	class bravo_w123_hammer
	{
		name = "W123 Hammer";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"gm_vehicles_land_wheeled_w123_ge_civ_w123"};
		units[] = {"bravo_w123_hammer"};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgVehicles.hpp"