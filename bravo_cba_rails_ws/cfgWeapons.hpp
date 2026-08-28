
class asdg_OpticRail1913;
class asdg_OpticRail1913_short : asdg_OpticRail1913
{};
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_762MG;

class CfgMagazineWells
{
	class CBA_762x51_FAL
	{
		bravo_ws_mags[] = {
			"20Rnd_762x51_slr_desert_lxWS",
			"20Rnd_762x51_slr_lxWS",
			"20Rnd_762x51_slr_desert_reload_tracer_green_lxWS",
			"20Rnd_762x51_slr_reload_tracer_green_lxWS",
			"20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS",
			"20Rnd_762x51_slr_desert_tracer_green_lxWS",
			"20Rnd_762x51_slr_tracer_green_lxWS",
			"20Rnd_762x51_slr_Snake_tracer_Red_lxWS",
			"30Rnd_762x51_slr_desert_lxWS",
			"30Rnd_762x51_slr_lxWS",
			"30Rnd_762x51_slr_desert_reload_tracer_green_lxWS",
			"30Rnd_762x51_slr_reload_tracer_green_lxWS",
			"30Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS",
			"30Rnd_762x51_slr_desert_tracer_green_lxWS",
			"30Rnd_762x51_slr_tracer_green_lxWS",
			"30Rnd_762x51_slr_Snake_tracer_Red_lxWS"
		};
	};
};

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
		magazineWell[] += {"CBA_762x51_FAL", "CBA_762x51_FAL_L"};
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
	
	// ====================
	// Flashlights
	
	#define WS_LIGHT_RIFLE\
		color[] = {24,22,23};\
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
	
	#define WS_LIGHT_RIFLE_IR\
		color[] = {1,1,1};\
		ambient[] = {1,1,1};\
		outerAngle = 20;\
		innerAngle = 15;\
		coneFadeCoef = 2;\
		intensity = 100;\
		irLight = 1;\
		class Attenuation\
		{\
			start = 50;\
			constant = 0.01;\
			linear = 0;\
			quadratic = 0.003;\
			hardLimitStart = 150;\
			hardLimitEnd = 200;\
		};
		
	class acc_flashlight;
	class InventoryFlashLightItem_Base_F;
	class saber_light_lxWS : acc_flashlight
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				WS_LIGHT_RIFLE
			};
		};
	};
	class saber_light_ir_lxWS : saber_light_lxWS
	{
		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				WS_LIGHT_RIFLE_IR
			};
		};
	};
};