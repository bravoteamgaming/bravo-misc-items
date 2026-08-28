class asdg_SlotInfo;
class asdg_FrontSideRail : asdg_SlotInfo
{
	class CompatibleItems;
};
class Tier1_SR25_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_416_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_M110_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_Mk46Mod0_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_Mk46Mod1_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_Mk48Mod0_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_Mk48Mod1_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};

class CfgWeapons
{	
	class rhs_weap_m14ebrri_base;
	class rhs_weap_m14ebrri : rhs_weap_m14ebrri_base
	{
		class WeaponSlotsInfo;
	};
	class rhs_weap_sr25 : rhs_weap_m14ebrri
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				compatibleItems[] = {"rhsusf_acc_sr25S","rhsusf_acc_SR25S_wd","rhsusf_acc_SR25S_d","Tier1_SR25S_tan"};
			};
		};
	};
	
	// ============
	// Flashlights (fuck you Tier 1)
	#define T1_LIGHT_RIFLE\
		color[] = {25,22,20};\
		outerAngle = 30;\
		innerAngle = 15;\
		coneFadeCoef = 2;\
		intensity = 100;\
		class Attenuation\
		{\
			start = 50;\
			constant = 0.01;\
			linear = 0;\
			quadratic = 0.003;\
			hardLimitStart = 150;\
			hardLimitEnd = 200;\
		};
		
	#define T1_LIGHT_PISTOL\
		color[] = {25,22,20};\
		outerAngle = 40;\
		innerAngle = 15;\
		coneFadeCoef = 10;\
		intensity = 90;\
		class Attenuation\
		{\
			start = 25;\
			constant = 0.01;\
			linear = 0;\
			quadratic = 0.003;\
			hardLimitStart = 100;\
			hardLimitEnd = 150;\
		};
		
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class acc_pointer_IR;
	class Tier1_M600V : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M600V_Black : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M300C : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M300C_Black : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_DBALPL_FL : ItemCore
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_PISTOL
			};
		};
	};
	class Tier1_X300U : ItemCore
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_PISTOL
			};
		};
	};
	class Tier1_TLR1 : ItemCore
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_PISTOL
			};
		};
	};
	
	class Tier1_10_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_10_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_10_NGAL_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_10_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_10_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_10_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_10_LA5_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_10_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_145_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_145_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_145_NGAL_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_145_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_145_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_145_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_145_LA5_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_145_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_416_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_416_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_416_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_416_LA5_M600V_alt_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_416_LA5_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_416_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_416_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_M249_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M249_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M249_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_M4BII_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_NGAL_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_NGAL_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_M4BII_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_MCX_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_NGAL_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_NGAL_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MCX_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_Mk18_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_NGAL_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_NGAL_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk18_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_Mk46Mod0_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk46Mod0_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk46Mod0_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_Mk46Mod1_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk46Mod1_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk46Mod1_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_Mk48Mod0_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk48Mod0_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk48Mod0_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_Mk48Mod1_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk48Mod1_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_Mk48Mod1_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_MP7_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MP7_NGAL_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MP7_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MP7_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_MW_LA5_M600V_alt_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_MW_LA5_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MW_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_MW_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_MW_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_MW_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MW_NGAL_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MW_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MW_NGAL_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MW_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MW_NGAL_M600V_alt_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MW_NGAL_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_MW_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_RAHG_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_NGAL_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_NGAL_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_NGAL_M600V_alt_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_NGAL_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_LA5_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_LA5_M600V_alt_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_RAHG_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	
	class Tier1_SCAR_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_NGAL_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_NGAL_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_SCAR_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	
	class Tier1_URX4_NGAL_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_NGAL_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_NGAL_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_NGAL_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_NGAL_M600V_alt_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_NGAL_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_NGAL_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_LA5_M603V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_LA5_M600V_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_LA5_M600V_alt_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_LA5_M600V_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_LA5_M600V_alt_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_LA5_M300C_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
	class Tier1_URX4_LA5_M300C_Black_FL : acc_pointer_IR
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				T1_LIGHT_RIFLE
			};
		};
	};
};