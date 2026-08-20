class CfgPatches
{
	class bravo_vanillaguns
	{
		name = "Vanilla gun conversions";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder", "cba_jr", "rhssaf_c_weapons", "WW2_SPEX_Assets_c_Weapons_Sounds_c", "gm_weapons_rifles_mp5", "rhsgref_c_weapons"};
		units[] = {};
		weapons[] = { 
			"bravo_sdar_762",
			"bravo_tavor_7",
			"bravo_tavor_7_blk",
			"bravo_tar21_blk",
			"bravo_tar21c_blk",
			"bravo_tar21_gl_blk",
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
			"bravo_type215_k_lush",
			"bravo_qbu97a",
			"bravo_msbs_556",
			"bravo_msbs_556_camo",
			"bravo_msbs_556_black",
			"bravo_msbs_556_sand",
			"bravo_msbs_556_mark",
			"bravo_msbs_556_mark_camo",
			"bravo_msbs_556_mark_black",
			"bravo_msbs_556_mark_sand",
			"bravo_msbs_556_gl",
			"bravo_msbs_556_gl_camo",
			"bravo_msbs_556_gl_black",
			"bravo_msbs_556_gl_sand",
			"bravo_msbs_556_ubs",
			"bravo_msbs_556_ubs_camo",
			"bravo_msbs_556_ubs_black",
			"bravo_msbs_556_ubs_sand",
			"bravo_mk200_556",
			"bravo_mk200_556_blk",
			"bravo_mxcqc",
			"bravo_mxcqc_blk",
			"bravo_mxcqc_khk",
			"bravo_f2000_blk",
			"bravo_f2000c_blk",
			"bravo_f2000_gl_blk",
			"bravo_f2000_org",
			"bravo_f2000c_org",
			"bravo_f2000_gl_org",
			"bravo_cpw_57"
		};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons\cfgWeapons.hpp"
#include "cfgMagazines.hpp"