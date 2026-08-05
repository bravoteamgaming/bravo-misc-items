class CfgPatches
{
	class bravo_tavor_7
	{
		name = "Tavor 7";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "rhssaf_c_weapons"};
		units[] = {};
		weapons[] = {
			"bravo_tavor_7",
			"bravo_tavor_7_blk",
			"bravo_tar21_blk",
			"bravo_tar21c_blk",
			"bravo_tar21_gl_blk"
			/*
			"bravo_fort221_545",
			"bravo_fort221_545_blk",
			"bravo_fort221_545_gl",
			"bravo_fort221_545_gl_blk",
			"bravo_fort224_545",
			"bravo_fort224_545_blk"
			*/
		};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"