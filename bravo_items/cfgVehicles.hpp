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
			init = "(_this select 0) setFlagTexture '\bravo_items\tex\flags\orange.paa'";
		};
	};
	class BVT_Flag_LogoLight: BVT_Flag_Orange
	{
		displayName = "Flag (Bravo Logo - Light)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\bravo_items\tex\flags\logo_white.paa'";
		};
	};
	class BVT_Flag_LogoDark: BVT_Flag_Orange
	{
		displayName = "Flag (Bravo Logo - Dark)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\bravo_items\tex\flags\logo_dark.paa'";
		};
	};
	class BVT_Flag_LogoCamo: BVT_Flag_Orange
	{
		displayName = "Flag (Bravo Logo - Camo)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\bravo_items\tex\flags\logo_camo.paa'";
		};
	};
	
	class Bag_Base;
	class B_RadioBag_01_base_F : Bag_Base
	{
		mass = 20;
		maximumLoad = 160;
	};
	class B_Kitbag_base : Bag_Base
	{
		mass = 40;
		maximumLoad = 320;
	};
	class B_Carryall_Base : Bag_Base
	{
		mass = 40;
	};
	
	class Module_F;
	class bravo_module_pasteHideTerrainObjects : module_f
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "Paste Hide Terrain Objects data";
		category = "Environment";
		function = "";
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 0;
		curatorInfoType = "bravo_pasteHideTerrainObjects_moduleDisplay";
	};
	class bravo_module_zeusSplendidCam : module_f
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "Splendid Camera";
		category = "NO_CATEGORY";
		function = "bravo_fnc_moduleSplendidCam";
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 0;
		curatorInfoType = "";
	};
	class bravo_module_cacheSoundSources : module_f
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "Cache Sound Sources";
		category = "Audio";
		function = "bravo_fnc_moduleCacheSoundSources";
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 0;
		curatorInfoType = "";
	};
	
	class Items_Base_F;
	class bravo_land_48gb_ddr5 : Items_Base_F
	{
		author = "Bravo Team";
		scope = 2;
		scopeCurator = 2;
		model = "\bravo_items\assets\bravo_ddr_pack.p3d";
		displayName = "Corsair Vengeance 48GB 5600MHz DDR5 Kit";
		editorPreview = "\bravo_items\ico\bravo_ddr_pack_icon.paa";
		editorSubcategory = "EdSubcat_Electronics";
		mapSize = 0.09;
		icon = "iconObject_2x1";
	};
	
	class Item_Base_F;
	class bravo_land_48gb_ddr5_item : Item_Base_F
	{
		author = "Bravo Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Items";
		displayName = "Corsair Vengeance 48GB 5600MHz DDR5 Kit";
		editorPreview = "\bravo_items\ico\bravo_ddr_pack_icon.paa";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		class TransportItems
		{
			class bravo_item_48gb_ddr5
			{
				count = 1;
				name = "bravo_item_48gb_ddr5";
			};
		};
	};
	
	/// ======= Sounds
	class Sound;
	class bravo_sound_alarmImperial : Sound
	{
		displayName = "Alarm (Imperial)";
		sound = "bravo_alarmImperial";
		author = "Bravo Team";
		scope = 2;
	};
	class bravo_sound_alarmIncoming : Sound
	{
		displayName = "Alarm (Incoming)";
		sound = "bravo_alarmIncoming";
		author = "Bravo Team";
		scope = 2;
	};
	class bravo_sound_phoneModern : Sound
	{
		displayName = "Phone (Modern)";
		sound = "bravo_phoneModern";
		author = "Bravo Team";
		scope = 2;
	};
	class bravo_sound_phoneOld : Sound
	{
		displayName = "Phone (Old)";
		sound = "bravo_phoneOld";
		author = "Bravo Team";
		scope = 2;
	};
	class bravo_sound_alarmVanilla : Sound
	{
		displayName = "Alarm (Vanilla)";
		sound = "bravo_alarmVanilla";
		author = "Bravo Team";
		scope = 2;
	};
	class bravo_sound_alarmStarfleet : Sound
	{
		displayName = "Alarm (Starfleet)";
		sound = "bravo_alarmStarfleet";
		author = "Bravo Team";
		scope = 2;
	};
};