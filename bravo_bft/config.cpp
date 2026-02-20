class CfgPatches
{
	class bravo_bft
	{
		name = "BFT";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = { "A3_Modules_F_Curator"};
		units[] = {
			"bravo_module_bft"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgVehicles.hpp"

#include "cfgFunctions.hpp"

#include "ui\ui.hpp"