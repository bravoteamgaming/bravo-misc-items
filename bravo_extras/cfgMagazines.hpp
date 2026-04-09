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
	
	class gm_1Rnd_40mm_heat_pg7v_rpg7;
	class bravo_1rnd_40mm_heat_pg7v_jamsheed : gm_1Rnd_40mm_heat_pg7v_rpg7
	{
		initSpeed = 300;
		displayName = "Legendary PG-7V";
		ammo = "bravo_rocket_40mm_heat_pg7v_jamsheed";
		descriptionShort = "Blessed anti-tank rocket that hits exactly what the fuck you're aiming at, inshallah.";
	};
	
	class rhsusf_200Rnd_556x45_mixed_soft_pouch;
	class bravo_200rnd_556x45_m249_zaphod : rhsusf_200Rnd_556x45_mixed_soft_pouch
	{
		displayName = "Legendary 200Rnd M249 Belt Pouch";
		descriptionShort = "Improved high-explosive ammunition for a legendary M249.";
		ammo = "bravo_ammo_556x45_he_tracer_red";
	};
	
	class UK3CB_BAF_762_L42A1_20Rnd_T;
	class bravo_20rnd_762x51_l129a1_connie : UK3CB_BAF_762_L42A1_20Rnd_T
	{
		displayName = "Legendary 20Rnd L129A1 Magazine";
		descriptionShort = "Improved hypervelocity armour-piercing ammunition for a legendary L129A1.";
		ammo = "bravo_ammo_762x51_hvap_tracer_red";
		initSpeed = 1500;
	};
	
	class rhs_mag_30Rnd_556x45_Mk318_PMAG;
	class bravo_500rnd_556x45_mk18_zyneks : rhs_mag_30Rnd_556x45_Mk318_PMAG
	{
		displayName = "Legendary 500Rnd Mk 18 Magazine";
		descriptionShort = "Improved high-capacity magazines for a legendary Mk 18.";
		count = 500;
	};
	class bravo_125rnd_stanag_airsoft_pmag : rhs_mag_30Rnd_556x45_Mk318_PMAG
	{
		displayName = "6 mm 125Rnd STANAG Airsoft Magazine (PMAG)";
		displayNameShort = "Ball";
		descriptionShort = "Caliber: 6x6mm <br />Rounds: 125<br />Used in: airosft guns";
		ammo = "bravo_ammo_6mm_airsoft";
		count = 125;
		initSpeed = 115.6;
		mass = 4;
	};
	class bravo_125rnd_stanag_airsoft_emag : bravo_125rnd_stanag_airsoft_pmag
	{
		displayName = "6 mm 125Rnd STANAG Airsoft Magazine (EMAG)";
		picture = "\Tier1_Weapons\Magazines\data\ui_EMag_ca.paa";
		modelSpecial = "\Tier1_Weapons\Magazines\EMag.p3d";
		model = "\Tier1_Weapons\Magazines\EMag_ground.p3d";
	};
	class bravo_125rnd_stanag_airsoft_stanag : bravo_125rnd_stanag_airsoft_pmag
	{
		displayName = "6 mm 125Rnd STANAG Airsoft Magazine";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M200_Stanag_ca.paa";
		model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_n_30rnd";
		hiddenSelections[] = {"camo","camo01","camo02"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa","rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"};
		mass = 5;
	};
	
	class rhs_mag_M433_HEDP;
	class bravo_1rnd_40mm_hedp_dave : rhs_mag_M433_HEDP
	{
		displayName = "Legendary 40mm HEDP Round";
		descriptionShort = "Improved HEDP grenades for a legendary M4A1 M320.";
		ammo = "bravo_ammo_40mm_hedp_dave";
	};
};
class CfgMagazineWells
{
	class cba_9x18_pm
	{
		bravo_extras_mags[] = {"bravo_1rnd_9x18mm_sp_pm"};
	};
	class bravo_rpg7_jamsheed
	{
		bravo_extras_mags[] = {"bravo_1rnd_40mm_heat_pg7v_jamsheed"};
	};
	class bravo_l129a1_connie
	{
		bravo_extras_mags[] = {"bravo_20rnd_762x51_l129a1_connie"};
	};
	class bravo_mk18_zyneks
	{
		bravo_extras_mags[] = {"bravo_500rnd_556x45_mk18_zyneks"};
	};
	class bravo_m320_dave
	{
		bravo_extras_mags[] = {"bravo_1rnd_40mm_hedp_dave"};
	};
	class bravo_m249_zaphod
	{
		bravo_extras_mags[] = {"bravo_200rnd_556x45_m249_zaphod"};
	};
	class bravo_stanag4179_airsoft
	{
		bravo_extras_mags[] = {"bravo_125rnd_stanag_airsoft_pmag", "bravo_125rnd_stanag_airsoft_stanag", "bravo_125rnd_stanag_airsoft_emag"};
	};
};