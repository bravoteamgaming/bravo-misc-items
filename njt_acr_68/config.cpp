class CfgPatches
{
	class njt_acr_68
	{
		name = "Remington ACR 6.8mm";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "uk3cb_factions_weapons_acr"};
		units[] = {};
		weapons[] = { "njt_acr_68_crew", "njt_acr_68_rifle", "njt_acr_68_rifle_long", "njt_acr_68_carbine", "njt_acr_68_carbine_ugl" };
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"

#include "cfgMagazines.hpp"

#include "cfgAmmo.hpp"