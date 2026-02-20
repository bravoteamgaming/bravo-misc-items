class CfgWeapons
{	
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
};