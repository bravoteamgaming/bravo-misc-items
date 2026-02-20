class CfgPatches
{
	class njt_msbs_556
	{
		name = "MSBS 556";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = { "A3_Weapons_F_Enoch_Rifles_MSBS", "cba_jr"};
		units[] = {};
		weapons[] = {
			"njt_msbs_556",
			"njt_msbs_556_camo",
			"njt_msbs_556_black",
			"njt_msbs_556_sand",
			"njt_msbs_556_mark",
			"njt_msbs_556_mark_camo",
			"njt_msbs_556_mark_black",
			"njt_msbs_556_mark_sand",
			"njt_msbs_556_gl",
			"njt_msbs_556_gl_camo",
			"njt_msbs_556_gl_black",
			"njt_msbs_556_gl_sand",
			"njt_msbs_556_ubs",
			"njt_msbs_556_ubs_camo",
			"njt_msbs_556_ubs_black",
			"njt_msbs_556_ubs_sand"
		};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"