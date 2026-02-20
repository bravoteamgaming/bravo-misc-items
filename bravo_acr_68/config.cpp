class CfgPatches
{
	class bravo_acr_68
	{
		name = "Remington ACR 6.8mm";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "uk3cb_factions_weapons_acr"};
		units[] = {};
		weapons[] = { "bravo_acr_68_crew", "bravo_acr_68_rifle", "bravo_acr_68_rifle_long", "bravo_acr_68_carbine", "bravo_acr_68_carbine_ugl" };
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"

#include "cfgMagazines.hpp"

#include "cfgAmmo.hpp"