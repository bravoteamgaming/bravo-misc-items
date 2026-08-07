class asdg_OpticRail1913;
class asdg_OpticRail1913_short : asdg_OpticRail1913
{};
class asdg_OpticRail1913_long : asdg_OpticRail1913
{};
class asdg_MuzzleSlot_556;
class asdg_FrontSideRail;
class asdg_PistolOpticRail1913;
class asdg_UnderSlot;

class CfgWeapons
{	
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
	};
	class srifle_h6_base_rf : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_long
			{};
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
	class arifle_ash12_base_RF : Rifle_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
	class arifle_ash12_LR_base_RF : arifle_ash12_base_RF
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
		};
	};
	class Pistol;
	class Pistol_Base_F : Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_DEagle__RF : Pistol_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_PistolOpticRail1913
			{};
		};
	};
	class Launcher_Base_F;
	class launch_RPG7_F : Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class launch_PSRL1_base_RF : launch_RPG7_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
			class PointerSlot : asdg_FrontSideRail
			{};
		};
	};
	class launch_PSRL1_PWS_base_RF : launch_PSRL1_base_RF
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot
			{};
		};
	};
	
	// ===== Katiba magproxies
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_Katiba_F: arifle_Katiba_Base_F
	{
		model = "lxrf\weapons_rf\Rifles\khaybar\Khaybar_RF.p3d";
		magazineReloadSwitchPhase = 0.48;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: asdg_underslot
			{
				iconPosition[] = {0.24,0.8};
				iconScale = 0.3;
			};
		};
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
	{
		model = "lxrf\weapons_rf\Rifles\khaybar\KhaybarC_RF.p3d";
		magazineReloadSwitchPhase = 0.48;
	};
	class arifle_Katiba_GL_F: arifle_Katiba_Base_F
	{
		model = "lxrf\weapons_rf\Rifles\khaybar\Khaybar_GL_RF.p3d";
		magazineReloadSwitchPhase = 0.48;
	};
};