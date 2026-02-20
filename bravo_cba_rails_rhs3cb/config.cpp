class CfgPatches
{
	class bravo_cba_rails_rhs3cb
	{
		name = "CBA Rails RHS3CB";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "po_factions_me", "rhs_main_loadorder", "rhsgref_main_loadorder", "rhssaf_main_loadorder", "rhsusf_main_loadorder", "uk3cb_baf_weapons_loadorder", "uk3cb_factions_weapons", "uk3cb_factions_weapons2"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"