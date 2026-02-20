class CfgPatches
{
	class bravo_cba_rails_gm
	{
		name = "CBA Rails GM";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "gm_weapons_rifles_sg550", "gm_weapons_rifles_m16", "gm_weapons_rifles_hk33", "gm_weapons_rifles_mp5", "gm_weapons_rifles_g36", "gm_weapons_rifles_g3", "gm_weapons_rifles_g11"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"