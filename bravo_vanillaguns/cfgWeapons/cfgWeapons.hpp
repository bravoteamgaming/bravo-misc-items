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
	
	#include "mxcqc.hpp"
	
	#include "f2000.hpp"
	
	class hgun_PDW2000_F;
	class bravo_cpw_57 : hgun_PDW2000_F
	{
		baseWeapon = "bravo_cpw_57";
		displayName = "CPW 57";
		descriptionShort = "Submachine Gun<br />Caliber: 5.7x28 mm";
		magazineWell[] = {"bravo_57x28_cpw"};
		magazines[] = {"bravo_30rnd_57x28mm_cpw"};
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