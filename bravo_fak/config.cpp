class CfgPatches
{
	class bravo_fak
	{
		name = "Bravo FAKs";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"kat_misc"};
		units[] = {};
		weapons[] = {
			"bravo_ifak",
			"bravo_afak_ww2",
			"bravo_afak_early",
			"bravo_afak_modern",
			"bravo_mfak_ww2",
			"bravo_mfak_early",
			"bravo_mfak_modern"
		};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"
#include "cfgFunctions.hpp"
#include "cfgVehicles.hpp"

class Extended_PreInit_EventHandlers
{
	class bravo_fak_xeh
	{
		init = "call bravo_fnc_fakInitSettings";
	};
};