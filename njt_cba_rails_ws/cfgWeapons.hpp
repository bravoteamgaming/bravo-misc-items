
class asdg_OpticRail1913;
class asdg_OpticRail1913_short : asdg_OpticRail1913
{};
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_762MG;

class CfgWeapons
{	
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
	};
	class arifle_Galat_base_lxWS : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	class arifle_Velko_base_lxWS : arifle_Galat_base_lxWS
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class arifle_SPAR_01_base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class arifle_XMS_Base_lxWS : arifle_SPAR_01_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class DMR_06_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class arifle_SLR_lxWS : DMR_06_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	class arifle_SLR_V_lxWS : arifle_SLR_lxWS
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class arifle_SLR_Para_lxWS : arifle_SLR_V_lxWS
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
		};
	};
	class glaunch_GLX_base_lxWS : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class LMG_S77_base_lxWS : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
			class MuzzleSlot : asdg_MuzzleSlot_762MG
			{};
		};
	};
	class sgun_aa40_base_lxWS : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
};