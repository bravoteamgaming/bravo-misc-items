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
	
	class Bag_Base;
	class B_RadioBag_01_base_F : Bag_Base
	{
		mass = 50;
	};
	class B_Kitbag_base : Bag_Base
	{
		maximumLoad = 320;
	};
	class B_AssaultPack_Base : Bag_Base
	{
		maximumLoad = 320;
	};
};