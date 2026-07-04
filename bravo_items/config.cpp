class CfgPatches
{
	class bravo_items
	{
		name = "Bravo Team Misc Items";
		author = "Jason Olsen";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		version = 1.8;
		requiredVersion = 2.00;
		units[] = {
			"BVT_Flag_Orange",
			"BVT_Flag_LogoLight",
			"BVT_Flag_LogoDark",
			"BVT_Flag_LogoCamo",
			"bravo_module_pasteHideTerrainObjects",
			"bravo_module_zeusSplendidCam",
			"bravo_sound_alarmImperial",
			"bravo_sound_alarmIncoming",
			"bravo_sound_phoneModern",
			"bravo_sound_phoneOld",
			"bravo_sound_alarmVanilla",
			"bravo_sound_alarmStarfleet",
			"bravo_module_cacheSoundSources",
			"bravo_land_48gb_ddr5",
			"bravo_land_48gb_ddr5_item"
		};
		weapons[] = {"BVT_ItemCore","BVT_Item_Intelligence","BVT_Item_KitKat", "bravo_item_48gb_ddr5"};
		requiredAddons[] = {"A3_Characters_F","A3_Weapons_F","cba_main"};
	};
};

#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"
#include "cfgFunctions.hpp"
#include "ui.hpp"
#include "cfgSFX.hpp"

class CfgUnitInsignia
{
	class BVT_Patch_Medical_1
	{
		displayName="Bravo - Medical (White/Red)";
		author="Bravo Team";
		texture="\bravo_items\patch\medic_1.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_CO
	{
		displayName="Bravo - Light - CO";
		author="Bravo Team";
		texture="\bravo_items\patch\co_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_Wings
	{
		displayName="Bravo - Light - Wings";
		author="Bravo Team";
		texture="\bravo_items\patch\wings_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_1st
	{
		displayName="Bravo - Light - 1st Squad";
		author="Bravo Team";
		texture="\bravo_items\patch\1st_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_2nd
	{
		displayName="Bravo - Light - 2nd Squad";
		author="Bravo Team";
		texture="\bravo_items\patch\2nd_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_3rd
	{
		displayName="Bravo - Light - 3rd Squad";
		author="Bravo Team";
		texture="\bravo_items\patch\3rd_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_CO
	{
		displayName="Bravo - Dark - CO";
		author="Bravo Team";
		texture="\bravo_items\patch\co_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_Wings
	{
		displayName="Bravo - Dark - Wings";
		author="Bravo Team";
		texture="\bravo_items\patch\wings_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_1st
	{
		displayName="Bravo - Dark - 1st Squad";
		author="Bravo Team";
		texture="\bravo_items\patch\1st_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_2nd
	{
		displayName="Bravo - Dark - 2nd Squad";
		author="Bravo Team";
		texture="\bravo_items\patch\2nd_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_3rd
	{
		displayName="Bravo - Dark - 3rd Squad";
		author="Bravo Team";
		texture="\bravo_items\patch\3rd_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_EOD_orange
	{
		displayName="Bravo - Orange - EOD";
		author="Bravo Team";
		texture="\bravo_items\patch\patch_orange_eod.paa";
		textureVehicle="";
	};
	class BVT_Patch_JTAC_orange
	{
		displayName="Bravo - Orange - JTAC";
		author="Bravo Team";
		texture="\bravo_items\patch\patch_orange_jtac.paa";
		textureVehicle="";
	};
	class BVT_Patch_team_red
	{
		displayName="Bravo - Team Red";
		author="Bravo Team";
		texture="\bravo_items\patch\patch_team_red.paa";
		textureVehicle="";
	};
	class BVT_Patch_team_blue
	{
		displayName="Bravo - Team Blue";
		author="Bravo Team";
		texture="\bravo_items\patch\patch_team_blue.paa";
		textureVehicle="";
	};
};

class SteamManagerConfig
{
	class GameRecording
	{
		class bravo_aceunconscious
		{
			clipPriority = 2;
			description = "Was downed";
			icon = "a3_revive";
			priority = 100;
			scope = 2;
			title = "Downed";
		};
	};
};