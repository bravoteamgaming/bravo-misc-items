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
		weapons[] = {};
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