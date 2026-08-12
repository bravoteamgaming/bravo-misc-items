class CfgPatches
{
	class bravo_cba_rails_vanilla
	{
		name = "CBA Rails Vanilla";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"

class cfgMagazineWells
{
	class CBA_556x45_STANAG_2D_XL
	{
		bravo_cba_rails_vanilla_mags[] = {
			"150Rnd_556x45_Drum_Green_Mag_F",
			"150Rnd_556x45_Drum_Sand_Mag_F",
			"150Rnd_556x45_Drum_Green_Mag_Tracer_F",
			"150Rnd_556x45_Drum_Sand_Mag_Tracer_F"
		};
	};
};