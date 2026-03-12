class CfgPatches
{
	class bravo_cba_rails_vanilla
	{
		name = "CBA Rails Vanilla";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr"};
		units[] = {};
		weapons[] = {
			"bravo_test_flashlight"
		};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"