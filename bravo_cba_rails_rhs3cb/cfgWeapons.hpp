class CfgMagazineWells
{
	class XMS_556x45_Large;
};
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_short_MG : asdg_OpticRail1913_short
{};

class CfgWeapons
{	
	class rhs_weap_m70_base;
	class rhs_weap_m21_base : rhs_weap_m70_base
	{
		class WeaponSlotsInfo;
	};
	class rhs_weap_m21a_pr : rhs_weap_m21_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class rhs_weap_m21a_pr_pbg40 : rhs_weap_m21_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class UK3CB_BAF_L110_Base : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class UK3CB_BAF_L110_556_Base : UK3CB_BAF_L110_Base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short_MG
			{};
		};
	};
	class UK3CB_BAF_L110_762_Base : UK3CB_BAF_L110_Base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short_MG
			{};
		};
	};
	class UK3CB_BAF_L110A2 : UK3CB_BAF_L110_556_Base
	{
		class WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short_MG
			{};
		};
	};
	class UK3CB_BAF_L119A1_Base;
	class UK3CB_BAF_L119A1 : UK3CB_BAF_L119A1_Base
	{
		class WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class UK3CB_BAF_L119A1_CQB : UK3CB_BAF_L119A1_Base
	{
		class WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class UK3CB_FAMAS_F1_base : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class UK3CB_FAMAS_F1 : UK3CB_FAMAS_F1_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class UK3CB_FAMAS_F1_GLM203_base : UK3CB_FAMAS_F1_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class UK3CB_FAMAS_F1_GLM203 : UK3CB_FAMAS_F1_GLM203_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};

	class arifle_Mk20_plain_F;
	class UK3CB_BAF_L85A2 : arifle_Mk20_plain_F
	{
		magazineWell[] = {"STANAG_556x45","XMS_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL"};
		class WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class UK3CB_BAF_L22 : UK3CB_BAF_L85A2
	{
		class WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class uk3cb_baf_l85a3 : uk3cb_baf_l85a2
	{
		magazineWell[] = {"STANAG_556x45","XMS_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL"};
	};
	
	class EBR_base_F;
	class LOP_Weap_LeeEnfield : EBR_base_F
	{
		class WeaponSlotsInfo;
	};
	class LOP_Weap_LeeEnfield_railed : LOP_Weap_LeeEnfield
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	
	// =========
	// Flashlights
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class acc_pointer_IR;
	class acc_flashlight : ItemCore
	{
		class ItemInfo;
	};
	class rhs_acc_2dpzenit : acc_flashlight
	{
		class ItemInfo : ItemInfo
		{
			class FlashLight
			{
				outerAngle = 50;
				innerAngle = 5;
				coneFadeCoef = 3;
				intensity = 270;
				class Attenuation
				{
					start = 0;
					constant = 0.2;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 27;
					hardLimitEnd = 50;
				};
			};
		};
	};
	
	class rhs_acc_perst3;
	class rhs_acc_perst3_2dp : rhs_acc_perst3
	{
		class ItemInfo;
	};
	class rhs_acc_perst3_2dp_light : rhs_acc_perst3_2dp
	{
		class ItemInfo : ItemInfo
		{
			class FlashLight
			{
				outerAngle = 50;
				innerAngle = 5;
				coneFadeCoef = 3;
				intensity = 270;
				class Attenuation
				{
					start = 0;
					constant = 0.2;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 100;
					hardLimitEnd = 150;
				};
			};
		};
	};
	
	class rhsusf_acc_anpeq15 : acc_pointer_IR
	{
		class ItemInfo;
	};
	class rhsusf_acc_anpeq15_light : rhsusf_acc_anpeq15
	{
		class ItemInfo : ItemInfo
		{
			class FlashLight
			{
				outerAngle = 35;
				innerAngle = 5;
				coneFadeCoef = 2;
				// intensity = 80;
				class Attenuation
				{
					start = 0;
					constant = 0.2;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 100;
					hardLimitEnd = 150;
				};
			};
		};
	};
	
	class UK3CB_BAF_LLM_Flashlight_Tan : ItemCore
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				outerAngle = 35;
				innerAngle = 5;
				coneFadeCoef = 2;
				intensity = 30;
				class Attenuation
				{
					start = 0;
					constant = 0.2;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 100;
					hardLimitEnd = 150;
				};
			};
		};
	};
};