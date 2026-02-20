class CfgPatches
{
	class bravo_cba_rails_t1
	{
		name = "CBA Rails T1";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "Tier1_Weapons_cfg"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"