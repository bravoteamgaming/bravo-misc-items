class CfgPatches
{
	class bravo_qbzak
	{
		name = "QBZ/AK12 alternate ammo variants";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"A3_Weapons_F_Enoch_Machineguns_M200"};
		units[] = {};
		weapons[] = { 
			"bravo_qbz95_545",
			"bravo_qbz95_545_gl",
			"bravo_qjb95_545",
			"bravo_qbz95_762",
			"bravo_qbz95_762_gl",
			"bravo_qjb95_762",
			"bravo_type215",
			"bravo_type215_gl",
			"bravo_type215_lsw",
			"bravo_type215_k",
			"bravo_type215_arid",
			"bravo_type215_gl_arid",
			"bravo_type215_lsw_arid",
			"bravo_type215_k_arid",
			"bravo_type215_lush",
			"bravo_type215_gl_lush",
			"bravo_type215_lsw_lush",
			"bravo_type215_k_lush"
		};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"
#include "cfgMagazines.hpp"