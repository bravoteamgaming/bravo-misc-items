class CfgPatches
{
	class njt_trabi_sport
	{
		name = "P601 RS";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"gm_vehicles_land_wheeled_p601_gc_civ_p601"};
		units[] = {"njt_p601_sport", "njt_p601_wrx"};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgVehicles.hpp"