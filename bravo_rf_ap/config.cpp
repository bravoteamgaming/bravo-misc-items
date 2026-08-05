class CfgPatches
{
	class bravo_rf_ap
	{
		name = "RF AP mags";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "RF_Data_Loadorder", "rhsusf_c_weapons"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgMagazines.hpp"