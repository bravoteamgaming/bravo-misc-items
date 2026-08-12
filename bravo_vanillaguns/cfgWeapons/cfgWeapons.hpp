class asdg_OpticRail1913;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_58;
class asdg_MuzzleSlot_556;

class CfgWeapons
{	
	class SDAR_Base_F;
	class arifle_SDAR_F : SDAR_base_F
	{
		class single;
		class weaponSlotsInfo;
	};
	
	class bravo_sdar_762 : arifle_SDAR_F
	{
		baseWeapon = "bravo_sdar_762";
		canShootInWater = 0;
		modes[] = {"single"};
		displayName = "RFB";
		descriptionShort = "Battle rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[] = {"rhs_mag_30Rnd_762x51_m61_fnfal"};
		magazineWell[] = {"CBA_762x51_FAL","CBA_762x51_FAL_L"};
		recoil = "rhs_recoil_fnfal";
		class single : single
		{
			class standardSound
			{
				soundSetShot[] = {"SPE_enfield_no2_Shot_SoundSet","SPE_pistol_Tail_SoundSet","SPE_enfield_no2_stereoLayer_SoundSet"};
			};
		};
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
		};
	};
	
	#include "tavor7.hpp"
	
	#include "qbzqbu.hpp"
	
	#include "type215.hpp"
	
	#include "msbs.hpp"
	
	class LMG_Mk200_F;
	class LMG_Mk200_black_F : LMG_Mk200_F
	{};
	
	class bravo_mk200_556 : LMG_Mk200_F
	{
		baseWeapon = "bravo_mk200_556";
		displayName = "Stoner 99 LMG 556";
		descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazineWell[] = {"M249_556x45", "CBA_556x45_MINIMI"};
		magazines[] = {"rhsusf_100rnd_556x45_soft_pouch_coyote", "200rnd_556x45_box_red_f"};
	};
	
	class bravo_mk200_556_blk : LMG_Mk200_black_F
	{
		baseWeapon = "bravo_mk200_556_blk";
		displayName = "Stoner 99 LMG 556 (Black)";
		descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45 mm";
		magazineWell[] = {"M249_556x45", "CBA_556x45_MINIMI"};
		magazines[] = {"rhsusf_100rnd_556x45_soft_pouch", "200rnd_556x45_box_red_f"};
	};
	
	class arifle_MX_base_F;
	class arifle_MXC_F : arifle_MX_base_F
	{
		class WeaponSlotsInfo;
		class single;
		class fullauto;
		class ACE_Burst_far;
		class fullauto_medium;
		class single_far_optics2;
		class single_medium_optics2;
		class single_medium_optics1;
	};
	class bravo_mxcqc : arifle_MXC_F
	{
		baseWeapon = "bravo_mxcqc";
		displayName = "MXCQC";
		descriptionShort = "PDW<br />Caliber: 5.7x28 mm";
		magazineWell[] = {"bravo_57x28_mx"};
		magazines[] = {"bravo_30rnd_57x28mm_mx"};
		recoil = "bravo_recoil_mxcqc";
		dispersion = 0.001;
		maxZeroing = 400;
		discreteDistance[] = {50, 100, 200, 300, 400};
		dexterity = 1.65;
		inertia = 0.39;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 69;
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
		class single : single
		{
			dispersion = 0.001;
			reloadTime = 0.057;
			class StandardSound
			{
				soundSetShot[] = {"RHSGREF_scorp_Shot_SoundSet","RHSGREF_pistol1_Tail_SoundSet"};
			};
		};
		class FullAuto : FullAuto
		{
			dispersion = 0.001;
			reloadTime = 0.057;class StandardSound
			{
				soundSetShot[] = {"RHSGREF_scorp_Shot_SoundSet","RHSGREF_pistol1_Tail_SoundSet"};
			};
		};
		class fullauto_medium : FullAuto
		{
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			maxRange = 100;
			maxRangeProbab = 0.05;
			midRange = 75;
			midRangeProbab = 0.7;
			minRange = 20;
			minRangeProbab = 0.5;
			showToPlayer = 0;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far : fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			burst = "2 + round random 3";
			maxRange = 400;
			maxRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.2;
			minRange = 200;
			minRangeProbab = 0.1;
		};
		class single_medium_optics1 : Single
		{
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			maxRange = 400;
			maxRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			minRange = 120;
			minRangeProbab = 0.2;
			requiredOpticType = 1;
		};
		class single_medium_optics2 : single_medium_optics1
		{
			aiRateOfFire = 7;
			aiRateOfFireDistance = 700;
			maxRange = 500;
			maxRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			minRange = 100;
			minRangeProbab = 0.1;
			requiredOpticType = 2;
		};
		class single_far_optics2 : single_medium_optics1
		{
			aiRateOfFireDistance = 800;
			maxRange = 550;
			minRange = 200;
		};
	};
	class bravo_mxcqc_blk : bravo_mxcqc
	{
		baseWeapon = "bravo_mxcqc_blk";
		displayName = "MXCQC (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
		picture = "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_cqc_black_X_CA.paa";
	};
	class bravo_mxcqc_khk : bravo_mxcqc
	{
		baseWeapon = "bravo_mxcqc_khk";
		displayName = "MXCQC (Khaki)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Short_khk_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\MX\Data\UI\icon_arifle_MXC_khk_F_X_CA.paa";
	};
};

class CfgRecoils
{
	class recoil_smg_02;
	class bravo_recoil_mxcqc : recoil_smg_02
	{
		kickBack[] = {0.01, 0.02};
		muzzleOuter[] = {0.015, 0.5, 0.15, 0.15};
		permanent = 0.03;
		temporary = 0.01;
	};
};