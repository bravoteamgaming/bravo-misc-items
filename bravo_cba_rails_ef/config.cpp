class CfgPatches
{
	class bravo_cba_rails_ef
	{
		name = "CBA Rails EF";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "ef_data"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"
#include "cfgMagazines.hpp"