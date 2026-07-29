class CfgMagazineWells
{
	class XMS_556x45_Large;
	class CBA_762x51_FAL
	{
		bravo_3cb_mags[] = {"UK3CB_BAF_762_20Rnd","UK3CB_BAF_762_20Rnd_T","UK3CB_BAF_762_20Rnd_Blank"};
	};
	class CBA_762x51_LINKS
	{
		bravo_3cb_mags[] = { "UK3CB_BAF_762_100Rnd", "UK3CB_BAF_762_100Rnd_Blank", "UK3CB_BAF_762_100Rnd_T", "UK3CB_BAF_762_200Rnd", "UK3CB_BAF_762_200Rnd_Blank", "UK3CB_BAF_762_200Rnd_T" };
	};
	class CBA_556x45_MINIMI
	{
		bravo_3cb_mags[] = { "UK3CB_BAF_556_200Rnd","UK3CB_BAF_556_200Rnd_Blank","UK3CB_BAF_556_200Rnd_T","UK3CB_BAF_556_100Rnd","UK3CB_BAF_556_100Rnd_Blank","UK3CB_BAF_556_100Rnd_T","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd_Blank","UK3CB_BAF_556_30Rnd_T" };
	};
	class CBA_57x28_P90
	{
		bravo_3cb_mags[] = {
			"UK3CB_P90_50rnd_570x28_Magazine","UK3CB_P90_50rnd_570x28_Magazine_R","UK3CB_P90_50rnd_570x28_Magazine_RM","UK3CB_P90_50rnd_570x28_Magazine_RT","UK3CB_P90_50rnd_570x28_Magazine_G","UK3CB_P90_50rnd_570x28_Magazine_GM","UK3CB_P90_50rnd_570x28_Magazine_GT","UK3CB_P90_50rnd_570x28_Magazine_Y","UK3CB_P90_50rnd_570x28_Magazine_YM","UK3CB_P90_50rnd_570x28_Magazine_YT","UK3CB_P90_50rnd_570x28_Magazine_W","UK3CB_P90_50rnd_570x28_Magazine_WM","UK3CB_P90_50rnd_570x28_Magazine_WT"};
	};
	class CBA_762x39_AK
	{
		UK3CB_RK62_mags[] = {"UK3CB_RK62_30Rnd_Magazine","UK3CB_RK62_30Rnd_Magazine_G","UK3CB_RK62_30Rnd_Magazine_GT","UK3CB_RK62_30Rnd_Magazine_R","UK3CB_RK62_30Rnd_Magazine_RT","UK3CB_RK62_30Rnd_Magazine_Y","UK3CB_RK62_30Rnd_Magazine_YT","UK3CB_RK62_30Rnd_Magazine_W","UK3CB_RK62_30Rnd_Magazine_WT","UK3CB_RK62_40Rnd_Magazine","UK3CB_RK62_40Rnd_Magazine_G","UK3CB_RK62_40Rnd_Magazine_GT","UK3CB_RK62_40Rnd_Magazine_R","UK3CB_RK62_40Rnd_Magazine_RT","UK3CB_RK62_40Rnd_Magazine_Y","UK3CB_RK62_40Rnd_Magazine_YT","UK3CB_RK62_40Rnd_Magazine_W","UK3CB_RK62_40Rnd_Magazine_WT"};
	};
	class CBA_762x39_RPK
	{
		UK3CB_RK62_mags[] = {"UK3CB_RK62_75Rnd_Magazine","UK3CB_RK62_75Rnd_Magazine_G","UK3CB_RK62_75Rnd_Magazine_GM","UK3CB_RK62_75Rnd_Magazine_GT","UK3CB_RK62_75Rnd_Magazine_R","UK3CB_RK62_75Rnd_Magazine_RM","UK3CB_RK62_75Rnd_Magazine_RT","UK3CB_RK62_75Rnd_Magazine_Y","UK3CB_RK62_75Rnd_Magazine_YM","UK3CB_RK62_75Rnd_Magazine_YT","UK3CB_RK62_75Rnd_Magazine_W","UK3CB_RK62_75Rnd_Magazine_WM","UK3CB_RK62_75Rnd_Magazine_WT"};
	};
			
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
		magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","M249_556x45","CBA_556x45_MINIMI"};
	};
	class UK3CB_BAF_L110_762_Base : UK3CB_BAF_L110_Base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short_MG
			{};
		};
		magazineWell[] = {"CBA_762x51_LINKS"};
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
	
	class UK3CB_BAF_L1A1 : Rifle_Base_F
	{
		magazineWell[] = {"CBA_762x51_FAL","CBA_762x51_FAL_L"};
	};
	
	class uk3cb_ar18_base : Rifle_Base_F
	{
		magazineWell[] = {"STANAG_556x45","XMS_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
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