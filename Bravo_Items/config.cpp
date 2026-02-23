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

#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"

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