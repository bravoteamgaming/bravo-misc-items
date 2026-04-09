class UK3CB_UnderSlot_L129;
class rhs_western_rifle_afg_slot;
class rhs_western_mg_gripod_slot;
class rhs_Underslot_m249_ris;

class CfgWeapons
{	
	class rifle_long_base_f;
	class uk3cb_hs50 : rifle_long_base_f
	{
		class single;
		class weaponSlotInfo;
	};
	class bravo_hs50_20 : uk3cb_hs50
	{
		descriptionShort = "20 mm anti-materiel rifle";
		displayName = "Steyr HS-50/20";
		baseWeapon = "bravo_hs50_20";
		magazines[] = {"bravo_3rnd_hs50_20_apds", "bravo_3rnd_hs50_20_he"};
		class single : single
		{
			class standardSound
			{
				soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
			};
		};
		class weaponSlotInfo : weaponSlotInfo
		{
			mass = 330;
		};
	};
	
	class grenadeLauncher;
	class Throw : GrenadeLauncher
	{
		class ThrowMuzzle;
		class bravo_saxbomb_muzzle : ThrowMuzzle
		{
			magazines[] = {"bravo_saxbomb"};
		};
		class bravo_randomNade_muzzle : ThrowMuzzle
		{
			magazines[] = {"bravo_randomNade"};
		};
		class bravo_multiNade_muzzle : ThrowMuzzle
		{
			magazines[] = {"bravo_multiNade"};
		};
		muzzles[] += { "bravo_saxbomb_muzzle", "bravo_randomNade_muzzle", "bravo_multiNade_muzzle"};
	};
	/*
	class rhs_weap_TOW_launcher;
	class bravo_ckem_launcher : rhs_weap_TOW_launcher
	{
		displayName = "BGM-166 CKEM Launcher";
		magazines[] = {"bravo_2rnd_ckem_ground"};
		maxRange = 10000;
		minRange = 200;
		class topDown
		{};
	};
	*/

	class gm_rpg7_wud;
	class bravo_rpg7_jamsheed : gm_rpg7_wud
	{
		scope = 1;
		baseWeapon = "bravo_rpg7_jamsheed";
		displayName = "Jamsheed's RPG-7";
		descriptionShort = "Blessed anti-tank weapon used by a true hero.";
		magazineWell[] += {"bravo_rpg7_jamsheed"};
		maxRange = 1000;
	};
	
	class arifle_MX_Base_F;
	class rhs_weap_m4_base : arifle_MX_Base_F
	{
		class M203_GL;
		class M320_GL : m203_GL
		{};
	};
	class rhs_weap_m4a1 : rhs_weap_m4_base
	{};
	class rhs_weap_m4a1_m320 : rhs_weap_m4a1
	{};
	class bravo_m4a1_m320_dave : rhs_weap_m4a1_m320
	{
		scope = 1;
		baseWeapon = "bravo_m4a1_m320_dave";
		displayName = "Dave's M4A1 PIP (M320)";
		descriptionShort = "Legendary carbine capable of launching improved HEDP grenades.";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "uk3cb_baf_ta31f";
				slot = "CowsSlot";
			};
		};
		class M320_GL : M320_GL
		{
			magazineWell[] += {"bravo_m320_dave"};
		};
	};
	
	class rhs_weap_m249_pip;
	class rhs_weap_m249_pip_ris : rhs_weap_m249_pip
	{
		class WeaponSlotsInfo;
	};
	class bravo_m249_pip_ris_zaphod : rhs_weap_m249_pip_ris
	{
		scope = 1;
		baseWeapon = "bravo_m249_pip_ris_zaphod";
		displayName = "Zaphod's M249 PIP (RIS)";
		descriptionShort = "Legendary SAW compatible with high-explosive ammunition.";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_erco_blk_f";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_saw_bipod";
				slot = "UnderBarrelSlot";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class GripodSlot {};
			class UnderBarrelSlot : rhs_Underslot_m249_ris
			{
				class compatibleItems
				{
					rhsusf_acc_saw_bipod = 1;
					rhsusf_acc_saw_lw_bipod = 1;
					Tier1_SAW_Bipod = 1;
					Tier1_SAW_Bipod_2 = 1;
					Tier1_SAW_Bipod_2_Desert = 1;
					Tier1_SAW_Bipod_Desert = 1;
				};
			};
		};
			
		magazineWell[] += {"bravo_m249_zaphod"};
	};
	
	class srifle_EBR_F;
	class UK3CB_BAF_L129A1 : srifle_EBR_F
	{
		class WeaponSlotsInfo;
	};
	class bravo_l129a1_connie : UK3CB_BAF_L129A1
	{
		scope = 1;
		baseWeapon = "bravo_l129a1_connie";
		displayName = "Connie's L129A1";
		descriptionShort = "Legendary DMR with rounds that pack an extra punch.";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_m8541_mrds";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "UK3CB_underbarrel_acc_bipod";
				slot = "UnderBarrelSlot";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class UnderBarrelSlot : UK3CB_UnderSlot_L129
			{
				class CompatibleItems
				{
					UK3CB_underbarrel_acc_bipod = 1;
				};
			};
		};
		UK3CB_underbarrel_altWeapon_bipod = "bravo_l129a1_connie";
	};
	
	class rhs_weap_m4a1_blockII;
	class rhs_weap_mk18 : rhs_weap_m4a1_blockII
	{
		class WeaponSlotsInfo;
	};
	class bravo_mk18_zyneks : rhs_weap_mk18
	{
		scope = 1;
		baseWeapon = "bravo_mk18_zyneks";
		displayName = "Zyneks' Mk 18 Mod 1";
		descriptionShort = "Legendary carbine capable of loading high-capacity magazines.";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "tier1_shortdot_geissele_docter_black";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "tier1_socom556_black";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "UnderBarrelSlot";
			};
		};
		magazineWell[] += {"bravo_mk18_zyneks"};
		rhs_grip2_change = "bravo_mk18_zyneks_grip2";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class GripodSlot : rhs_western_rifle_afg_slot
			{
				class compatibleItems
				{
					rhsusf_acc_grip2 = 1;
				};
			};
		};
	};
	class bravo_mk18_zyneks_grip2 : bravo_mk18_zyneks
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_mk18_afg.rtm"};
	};
	
	class rhs_weap_fnfal_base;
	class rhs_weap_l1a1_base : rhs_weap_fnfal_base
	{
		class Single;
		class Single_AI : Single
		{};
	};
	class rhs_weap_l1a1 : rhs_weap_l1a1_base
	{};
	class bravo_l1a1_vlad : rhs_weap_l1a1
	{
		scope = 1;
		scopeArsenal = 1;
		baseWeapon = "bravo_l1a1_vlad";
		displayName = "Vlad's L1A1";
		descriptionShort = "Legendary battle rifle with excellent handling.";
		aimTransitionSpeed = 1.5;
		aiDispersionCoefX = 5;
		aiDispersionCoefY = 6;
		dexterity = 2;
		swayDecaySpeed = 2;
		maxRecoilSway = 0.01;
		opticsZoomMax = 1.2;
		inertia = 0.4;
		recoil = "rhs_recoil_mp7";
		class Single : Single
		{
			dispersion = 0.0005;
			aiDispersionCoefX = 1;
			aiDispersionCoefY = 1.1;
		};
		class Single_AI : Single_AI
		{
			dispersion = 0.0005;
			aiDispersionCoefX = 1;
			aiDispersionCoefY = 1.1;
		};
	};
	
	class Rifle_Long_Base_F;
	class UK3CB_BAF_L7A2 : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class bravo_l7a2_onenan : UK3CB_BAF_L7A2
	{
		scope = 1;
		baseWeapon = "bravo_l7a2_onenan";
		displayName = "OneNan's L7A2 GPMG";
		descriptionShort = "Legendary GPMG with lightweight construction.";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
		};
	};
	
	class rhs_weap_ak74m;
	class rhs_weap_ak74m_fullplum : rhs_weap_ak74m
	{
		class EventHandlers;
	};
	class bravo_ak74m_blackfire : rhs_weap_ak74m_fullplum
	{
		scope = 1;
		baseWeapon = "bravo_ak74m_blackfire";
		displayName = "Blackfire's AK-74M";
		descriptionShort = "Legendary assault rifle with a high profit margin.";
		class EventHandlers : EventHandlers
		{
			class bravo_extras_eh
			{
				fired = "_this call bravo_fnc_bfAKfiredEH";
			};
		};
	};
	
	class Rifle_Base_F;
	class Tier1_HK416_base : Rifle_Base_F
	{
		class Single;
		class FullAuto;
	}
	class Tier1_HK416D145_LMT : Tier1_HK416_base
	{};
	class Tier1_HK416D10_LMT : Tier1_HK416D145_LMT
	{};
	class Tier1_SIG_MCX_115_Virtus : Tier1_HK416D10_LMT
	{};
	class Tier1_SIG_MCX_115_Virtus_FDE : Tier1_SIG_MCX_115_Virtus
	{
		class WeaponSlotsInfo;
	};
	class bravo_t1_mcx115_fde_airsoft : Tier1_SIG_MCX_115_Virtus_FDE
	{
		baseWeapon = "bravo_t1_mcx115_fde_airsoft";
		displayName = "MCX 11.5 Virtus (Airsoft) (FDE)";
		descriptionShort = "CALL YOUR HITS";
		magazines[] = {"bravo_125rnd_stanag_airsoft_pmag"};
		magazineWell[] = {"bravo_stanag4179_airsoft"};
		caseless[] = {"",1,1,1};
		aidispersioncoefx = 10;
		aidispersioncoefy = 14;
		dispersion = 0.002;
		fireLightDuration = 0;
		fireLightDiffuse[] = {0,0,0};
		fireLightIntensity = 0;
		flashSize = 0;
		initSpeed = 115;
		maxRecoilSway = 0.001;
		maxRange = 50;
		maxZeroing = 50;
		discretedistance[] = {50};
		discreteDistanceCameraPoint[] = {"eye"};
		recoil = "NoRecoil";
		recoilProne = "NoRecoil";
		rhs_grip1_change = "bravo_t1_mcx115_fde_airsoft_grip";
		rhs_grip2_change = "bravo_t1_mcx115_fde_airsoft_grip2";
		rhs_grip3_change = "bravo_t1_mcx115_fde_airsoft_grip";
		class Single : Single
		{
			dispersion = 0.002;
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			dispersion = 0.002;
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"RHSUSF_MP7_Closure_SoundSet","RHSUSF_MP7_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "tier1_gemtech_halo";
				slot = "MuzzleSlot";
			};
		};
		class GunFire{};
		class GunClouds{};
		class GunParticles{};
	};
	
	class bravo_t1_mcx115_fde_airsoft_grip : bravo_t1_mcx115_fde_airsoft
	{
		dexterity = 1.70929;
		aimTransitionSpeed = 0.874895;
		scopeArsenal = 0;
		handAnim[] = {"OFP2_ManSkeleton","Tier1_Weapons\HK416s\anim\handpose_VFG.rtm"};
	};
	class bravo_t1_mcx115_fde_airsoft_grip2 : bravo_t1_mcx115_fde_airsoft_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","Tier1_Weapons\HK416s\anim\handpose_AFG.rtm"};
	};
};