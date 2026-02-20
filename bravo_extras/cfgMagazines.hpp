class CfgMagazines
{
	class uk3cb_hs50_50bmg_M33_5Rnd_magazine;
	class bravo_3rnd_hs50_20_apds : uk3cb_hs50_50bmg_M33_5Rnd_magazine
	{
		displayName = "20 mm 3Rnd HS-50/20 APDS Magazine";
		displayNameShort = "APDS-T";
		descriptionShort = "Caliber: 20x139mm <br />Rounds: 3<br />Used in: HS-50/20 Anti-materiel Rifle";
		ammo = "gm_bullet_20x139mm_apds_t_dm63";
		count = 3;
		tracersEvery = 1;
	};
	class bravo_3rnd_hs50_20_he : uk3cb_hs50_50bmg_M33_5Rnd_magazine
	{
		displayName = "20 mm 3Rnd HS-50/20 HE Magazine";
		displayNameShort = "HE-T";
		descriptionShort = "Caliber: 20x139mm <br />Rounds: 3<br />Used in: HS-50/20 Anti-materiel Rifle";
		ammo = "gm_bullet_20x139mm_he_t_dm51";
		count = 3;
		tracersEvery = 1;
	};
	/*
	class rhs_mag_2rnd_tow2b;
	class bravo_2rnd_ckem_ground : rhs_mag_2rnd_tow2b
	{
		ammo = "bravo_ckem_missile";
		displayName = "BGM-166 CKEM";
		displayNameShort = "CKEM";
	};
	*/
	
	class gm_8rnd_9x18mm_b_pst_pm_blk;
	class bravo_1rnd_9x18mm_sp_pm : gm_8rnd_9x18mm_b_pst_pm_blk
	{
		displayName = "Go Fuck Yourself";
		displayNameShort = "FU";
		count = 1;
		ammo = "b_40mm_gpr_tracer_red";
	};
	
	class handGrenade;
	class bravo_saxBomb : handGrenade
	{
		mass = 11;
		displayName = "Sax Bomb";
		displayNameShort = "Sax Bomb";
		descriptionShort = "Type: Party Bomb<br />Rounds: 1<br />Used in: Hand";
		ammo = "bravo_saxbomb_ammo";
	};
	class bravo_randomNade : handGrenade
	{
		mass = 30;
		displayName = "Grenade of Several Possibilities";
		displayNameShort = "???";
		descriptionShort = "Are you sure about that?";
		ammo = "bravo_randomNade_ammo";
	};
	class bravo_multiNade : handGrenade
	{
		mass = 22;
		displayName = "Grenade of More Grenades";
		displayNameShort = "Grenades";
		descriptionShort = "This is getting out of hand!";
		ammo = "bravo_multiNade_ammo";
	};
};
class CfgMagazineWells
{
	class cba_9x18_pm
	{
		bravo_extras_mags[] = {"bravo_1rnd_9x18mm_sp_pm"};
	};
};