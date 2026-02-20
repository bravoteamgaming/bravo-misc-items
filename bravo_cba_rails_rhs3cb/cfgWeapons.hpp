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
};