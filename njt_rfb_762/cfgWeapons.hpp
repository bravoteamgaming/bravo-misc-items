class asdg_OpticRail1913;

class CfgWeapons
{	
	class SDAR_Base_F;
	class arifle_SDAR_F : SDAR_base_F
	{
		class single;
		class weaponSlotsInfo;
	};
	
	class njt_sdar_762 : arifle_SDAR_F
	{
		baseWeapon = "njt_sdar_762";
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
};