class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail
{
	class compatibleItems
	{
		optic_ico_01_f = 1;
		optic_ico_01_black_f = 1;
		optic_ico_01_camo_f = 1;
		optic_ico_01_sand_f = 1;
	};
};
class asdg_OpticRail1913_short : asdg_OpticRail1913
{
	class compatibleItems : compatibleItems
	{
		optic_ico_01_f = 0;
		optic_ico_01_black_f = 0;
		optic_ico_01_camo_f = 0;
		optic_ico_01_sand_f = 0;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_9MM_SMG : asdg_MuzzleSlot
{
	class CompatibleItems
	{
		rhsusf_acc_omega9k = 1;
		Tier1_Evo9 = 1;
		Tier1_Octane9 = 1;
		Tier1_TiRant9 = 1;
		Tier1_TiRant9S = 1;
	};
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot
{};
class asdg_MuzzleSlot_65 : asdg_MuzzleSlot
{};
class asdg_FrontSideRail;

class CfgWeapons
{	
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12_base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
	class arifle_AK12_lush_F : arifle_AK12_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
	class arifle_AK12_arid_F : arifle_AK12_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
	class arifle_AK12U_base_F : arifle_AK12_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
	class arifle_RPK12_base_F : arifle_AK12_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	class arifle_MSBS65_base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
			class MuzzleSlot : asdg_MuzzleSlot_65
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
	
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class EBR_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class srifle_EBR_F : EBR_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	class Rifle_Short_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class pdw2000_base_F : Rifle_Short_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class hgun_PDW2000_F : pdw2000_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{}
		};
	};
};