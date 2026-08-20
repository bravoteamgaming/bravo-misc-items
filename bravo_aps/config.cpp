class CfgPatches
{
	class bravo_aps
	{
		name = "Active Protection System";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {};
		units[] = {
			"bravo_module_aps"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgFunctions.hpp"
#include "cfgMagazines.hpp"
#include "ui.hpp"

class CfgSounds
{
	class bravo_aps_activation
	{
		name = "APS activation alarm";
		sound[] = {"\bravo_aps\assets\aps_activation.ogg", 5, 1, 100};
		titles[] = {};
	};
};
