#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
	class BravoItems
	{
		name = "Bravo Team Misc Items";
		author = "Jason Olsen";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		version = 1.3;
		requiredVersion = 0.1;
		units[] = {
			"BVT_Flag_Orange","BVT_Flag_LogoLight","BVT_Flag_LogoDark","BVT_Flag_LogoCamo"
		};
		weapons[] = {"BVT_ItemCore","BVT_Item_Intelligence"};
		requiredAddons[] = {"A3_Characters_F","A3_Weapons_F","cba_main"};
	};
};


class CfgWeapons {
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class VestItem;

	class BVT_ItemCore: CBA_MiscItem
	{
		scope = 1;
		displayName = "BVT Dummy Item";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_khaki_specops_UK_CA.paa";
		descriptionShort = "";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class BVT_Item_Intelligence: BVT_ItemCore
	{
		scope = 1;
		displayName = "Intelligence";
		descriptionShort = "A piece of intelligence.";
	};
	class BVT_Item_Kitkat: BVT_ItemCore
	{
		scope = 2;
		displayName = "KitKat Bar";
		picture = "\Bravo_Items\ico\kitkat";
		descriptionShort = "A chocolate-covered wafer bar confection produced globally by Nestlé. 4 finger variety.";
	};
};


class CfgVehicles
{
	class FlagPole_F; // inherit base class
	class BVT_Flag_Orange: FlagPole_F
	{
		author = "Jason Olsen";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (Bravo Orange)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\Bravo_Items\tex\flags\orange.paa'";
		};
	};
	class BVT_Flag_LogoLight: BVT_Flag_Orange
	{
		displayName = "Flag (Bravo Logo - Light)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\Bravo_Items\tex\flags\logo_white.paa'";
		};
	};
	class BVT_Flag_LogoDark: BVT_Flag_Orange
	{
		displayName = "Flag (Bravo Logo - Dark)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\Bravo_Items\tex\flags\logo_dark.paa'";
		};
	};
	class BVT_Flag_LogoCamo: BVT_Flag_Orange
	{
		displayName = "Flag (Bravo Logo - Camo)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\Bravo_Items\tex\flags\logo_camo.paa'";
		};
	};
};

class CfgUnitInsignia
{
	class BVT_Patch_Medical_1
	{
		displayName="Bravo - Medical (White/Red)";
		author="Bravo Team";
		texture="\Bravo_Items\patch\medic_1.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_CO
	{
		displayName="Bravo - Light - CO";
		author="Bravo Team";
		texture="\Bravo_Items\patch\co_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_Wings
	{
		displayName="Bravo - Light - Wings";
		author="Bravo Team";
		texture="\Bravo_Items\patch\wings_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_1st
	{
		displayName="Bravo - Light - 1st Squad";
		author="Bravo Team";
		texture="\Bravo_Items\patch\1st_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_2nd
	{
		displayName="Bravo - Light - 2nd Squad";
		author="Bravo Team";
		texture="\Bravo_Items\patch\2nd_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Light_3rd
	{
		displayName="Bravo - Light - 3rd Squad";
		author="Bravo Team";
		texture="\Bravo_Items\patch\3rd_light.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_CO
	{
		displayName="Bravo - Dark - CO";
		author="Bravo Team";
		texture="\Bravo_Items\patch\co_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_Wings
	{
		displayName="Bravo - Dark - Wings";
		author="Bravo Team";
		texture="\Bravo_Items\patch\wings_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_1st
	{
		displayName="Bravo - Dark - 1st Squad";
		author="Bravo Team";
		texture="\Bravo_Items\patch\1st_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_2nd
	{
		displayName="Bravo - Dark - 2nd Squad";
		author="Bravo Team";
		texture="\Bravo_Items\patch\2nd_dark.paa";
		textureVehicle="";
	};
	class BVT_Patch_Dark_3rd
	{
		displayName="Bravo - Dark - 3rd Squad";
		author="Bravo Team";
		texture="\Bravo_Items\patch\3rd_dark.paa";
		textureVehicle="";
	};
};