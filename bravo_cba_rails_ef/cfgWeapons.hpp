class asdg_OpticRail1913_short;
class asdg_MuzzleSlot_9mm_SMG;
class asdg_FrontSideRail;

class CfgWeapons
{
	class LMG_coax;
	class EF_LMG_coax_AAV9 : LMG_coax
	{
		displayName = "M240";
	};
	class EF_LMG_coax_Hunter : LMG_coax
	{
		displayName = "M240";
	};
	
	class Rifle_Base_F;
	class Rifle_Short_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class EF_smg_Diplomat_base : Rifle_Short_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_Short
			{};
			class MuzzleSlot : asdg_MuzzleSlot_9mm_SMG
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
};