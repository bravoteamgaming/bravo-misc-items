class CfgPatches
{
	class bravo_cba_rails_spe
	{
		name = "CBA Rails Spearhead";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "WW2_SPE_Core_c_Core_c", "WW2_SPEX_Assets_c_Weapons_InfantryWeapons_c"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
#include "cfgWeapons.hpp"

class cfgMagazineWells
{
	class bravo_22mm_us_riflegrenade
	{
		bravo_cba_rails_spe_mags[] = {"SPE_1Rnd_G_Mk2","SPE_1Rnd_G_M9A1","SPE_1Rnd_G_M2_AN_M14","SPE_1Rnd_G_M2_ANM8","SPE_1Rnd_G_M2_M18_Red","SPE_1Rnd_G_M2_M18_Green","SPE_1Rnd_G_M2_M18_Yellow","SPE_1Rnd_G_M2_M18_Violet","SPE_1Rnd_G_M17A1","SPE_1Rnd_G_M19A1","SPE_1Rnd_G_M21A1","SPE_1Rnd_G_M51A1"};
	};
	class cba_45acp_thompson_drum
	{
		bravo_cba_rails_spe_mags[] = {"SPEX_50Rnd_Thompson_45ACP", "SPEX_50Rnd_Thompson_45ACP_t"};
	};
};