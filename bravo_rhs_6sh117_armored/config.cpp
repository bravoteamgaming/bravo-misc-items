class CfgPatches
{
	class bravo_rhs_6sh117_armored
	{
		units[] = {};
		weapons[] =
		{
			"bravo_vdv_6sh117_mg_armored",
			"bravo_vdv_6sh117_grn_armored",
			"bravo_vdv_6sh117_rifleman_armored",
			"bravo_vdv_6sh117_nco_armored",
			"bravo_vdv_6sh117_nco_azart_armored",
			"bravo_vdv_6sh117_ar_armored",
			"bravo_vdv_6sh117_svd_armored",
			"bravo_vdv_6sh117_val_armored"
		};
		requiredVersion = 2.00;
		requiredAddons[] = {"rhs_main_loadorder"};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"