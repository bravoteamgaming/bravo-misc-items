class CfgPatches
{
	class njt_cba_rails_rf
	{
		name = "CBA Rails RF";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "rf_data_loadorder"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"