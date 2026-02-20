class CfgPatches
{
	class bravo_msbs_556
	{
		name = "MSBS 556";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = { "A3_Weapons_F_Enoch_Rifles_MSBS", "cba_jr"};
		units[] = {};
		weapons[] = {
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
			"bravo_msbs_556_ubs_sand"
		};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"