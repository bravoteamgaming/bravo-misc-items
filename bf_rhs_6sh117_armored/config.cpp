class CfgPatches
{
	class bf_rhs_6sh117_armored
	{
		units[] = {};
		weapons[] =
		{
			"bf_vdv_6sh117_mg_armored",
			"bf_vdv_6sh117_grn_armored",
			"bf_vdv_6sh117_rifleman_armored",
			"bf_vdv_6sh117_nco_armored",
			"bf_vdv_6sh117_nco_azart_armored",
			"bf_vdv_6sh117_ar_armored",
			"bf_vdv_6sh117_svd_armored",
			"bf_vdv_6sh117_val_armored"
		};
		requiredVersion = 2.00;
		requiredAddons[] = {"rhs_main_loadorder"};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"