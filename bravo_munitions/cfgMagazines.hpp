class CfgMagazines
{
	class 1rnd_he_grenade_shell;
	class bravo_1rnd_40mm_gl_mine : 1rnd_he_grenade_shell
	{
		displayName = "40 mm Proximity Mine";
		displayNameShort = "Mine";
		ammo = "bravo_40mm_gl_mine";
		descriptionShort = "Type: Grenade-Launched Proximity Mine<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: NATO 40x46mm grenade launchers"
	};
	class rhs_vog25;
	class bravo_1rnd_40mm_gl_mine_vog : rhs_vog25
	{
		displayName = "40 mm VOG Proximity Mine";
		displayNameShort = "Mine";
		ammo = "bravo_40mm_gl_mine_vog";
		descriptionShort = "Type: Grenade-Launched Proximity Mine<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: Russian 40mm grenade launchers"
	};
	
	class APERSMine_range_mag;
	class bravo_trapped_gun_mine_nato_mag : APERSMine_range_mag
	{
		displayName = "Trapped Gun [NATO]";
		displayNameShort = "Trapped Gun";
		ammo = "bravo_trapped_gun_mine_nato_ammo";
	};
	class bravo_trapped_gun_mine_natocw_mag : bravo_trapped_gun_mine_nato_mag
	{
		displayName = "Trapped Gun [NATO CW]";
		displayNameShort = "Trapped Gun";
		ammo = "bravo_trapped_gun_mine_natocw_ammo";
	};
	class bravo_trapped_gun_mine_ru_mag : bravo_trapped_gun_mine_nato_mag
	{
		displayName = "Trapped Gun [RU]";
		displayNameShort = "Trapped Gun";
		ammo = "bravo_trapped_gun_mine_ru_ammo";
	};
	class bravo_trapped_gun_mine_rucw_mag : bravo_trapped_gun_mine_nato_mag
	{
		displayName = "Trapped Gun [RU CW]";
		displayNameShort = "Trapped Gun";
		ammo = "bravo_trapped_gun_mine_rucw_ammo";
	};
	class bravo_trapped_gun_mine_csat_mag : bravo_trapped_gun_mine_nato_mag
	{
		displayName = "Trapped Gun [CSAT]";
		displayNameShort = "Trapped Gun";
		ammo = "bravo_trapped_gun_mine_csat_ammo";
	};
	class bravo_trapped_gun_mine_ww2ger_mag : bravo_trapped_gun_mine_nato_mag
	{
		displayName = "Trapped Gun [WW2 GER]";
		displayNameShort = "Trapped Gun";
		ammo = "bravo_trapped_gun_mine_ww2ger_ammo";
	};
	class bravo_trapped_gun_mine_ww2allied_mag : bravo_trapped_gun_mine_nato_mag
	{
		displayName = "Trapped Gun [WW2 Allied]";
		displayNameShort = "Trapped Gun";
		ammo = "bravo_trapped_gun_mine_ww2allied_ammo";
	};
	
	class rhs_mag_maaws_he;
	class bravo_1rnd_84mm_delayfuze_he_impact : rhs_mag_maaws_he
	{
		displayName = "84 mm FFV441 HE (Programmable, impact)";
		displayNameShort = "441 HE Impact";
		descriptionShort = "Caliber: 84mm <br />Rounds: 1<br />Used in: Carl Gustaf<br />Double-click to set";
	};
	class bravo_1rnd_84mm_delayfuze_he_100 : bravo_1rnd_84mm_delayfuze_he_impact
	{
		displayName = "84 mm FFV441 HE (Programmable, 100m)";
		displayNameShort = "441 HE 100";
		ammo = "bravo_84mm_delayfuze_he_100";
		scope = 1;
		ace_arsenal_uniquebase = "bravo_1rnd_84mm_delayfuze_he_impact";
	};
	class bravo_1rnd_84mm_delayfuze_he_125 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 125m)";
		displayNameShort = "441 HE 125";
		ammo = "bravo_84mm_delayfuze_he_125";
	};
	class bravo_1rnd_84mm_delayfuze_he_150 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 150m)";
		displayNameShort = "441 HE 150";
		ammo = "bravo_84mm_delayfuze_he_150";
	};
	class bravo_1rnd_84mm_delayfuze_he_175 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 175m)";
		displayNameShort = "441 HE 175";
		ammo = "bravo_84mm_delayfuze_he_175";
	};
	class bravo_1rnd_84mm_delayfuze_he_200 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 200m)";
		displayNameShort = "441 HE 200";
		ammo = "bravo_84mm_delayfuze_he_200";
	};
	class bravo_1rnd_84mm_delayfuze_he_225 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 225m)";
		displayNameShort = "441 HE 225";
		ammo = "bravo_84mm_delayfuze_he_225";
	};
	class bravo_1rnd_84mm_delayfuze_he_250 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 250m)";
		displayNameShort = "441 HE 250";
		ammo = "bravo_84mm_delayfuze_he_250";
	};
	class bravo_1rnd_84mm_delayfuze_he_300 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 300m)";
		displayNameShort = "441 HE 300";
		ammo = "bravo_84mm_delayfuze_he_300";
	};
	class bravo_1rnd_84mm_delayfuze_he_400 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 400m)";
		displayNameShort = "441 HE 400";
		ammo = "bravo_84mm_delayfuze_he_400";
	};
	class bravo_1rnd_84mm_delayfuze_he_500 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 500m)";
		displayNameShort = "441 HE 500";
		ammo = "bravo_84mm_delayfuze_he_500";
	};
	class bravo_1rnd_84mm_delayfuze_he_600 : bravo_1rnd_84mm_delayfuze_he_100
	{
		displayName = "84 mm FFV441 HE (Programmable, 600m)";
		displayNameShort = "441 HE 600";
		ammo = "bravo_84mm_delayfuze_he_600";
	};
	
	class mraws_he_f;
	/*
	class bravo_1rnd_84mm_flechette : mraws_he_f
	{
		displayName = "84 mm FFV401 Flechette";
		displayNameShort = "401 Flechette";
		descriptionShort = "Caliber: 84mm <br />Rounds: 1<br />Used in: Carl Gustaf";
		ammo = "bravo_84mm_flechette";
	};
	*/
	
	class bravo_1rnd_84mm_smoke : mraws_he_f
	{
		displayName = "84 mm FFV469 Smoke";
		displayNameShort = "469 Smoke";
		descriptionShort = "Caliber: 84mm <br />Rounds: 1<br />Used in: Carl Gustaf";
		ammo = "bravo_84mm_smoke";
	};
	
	class bravo_1rnd_84mm_delayfuze_he2_impact : mraws_he_f
	{
		displayName = "84 mm FFV448 HE (Programmable, impact)";
		displayNameShort = "448 HE Impact";
		descriptionShort = "Caliber: 84mm <br />Rounds: 1<br />Used in: Carl Gustaf<br />Double-click to set";
	};
	class bravo_1rnd_84mm_delayfuze_he2_100 : bravo_1rnd_84mm_delayfuze_he2_impact
	{
		displayName = "84 mm FFV448 HE (Programmable, 100m)";
		displayNameShort = "448 HE 100";
		ammo = "bravo_84mm_delayfuze_he2_100";
		ace_arsenal_uniquebase = "bravo_1rnd_84mm_delayfuze_he2_impact";
		scope = 1;
	};
	class bravo_1rnd_84mm_delayfuze_he2_125 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 125m)";
		displayNameShort = "448 HE 125";
		ammo = "bravo_84mm_delayfuze_he2_125";
	};
	class bravo_1rnd_84mm_delayfuze_he2_150 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 150m)";
		displayNameShort = "448 HE 150";
		ammo = "bravo_84mm_delayfuze_he2_150";
	};
	class bravo_1rnd_84mm_delayfuze_he2_175 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 175m)";
		displayNameShort = "448 HE 175";
		ammo = "bravo_84mm_delayfuze_he2_175";
	};
	class bravo_1rnd_84mm_delayfuze_he2_200 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 200m)";
		displayNameShort = "448 HE 200";
		ammo = "bravo_84mm_delayfuze_he2_200";
	};
	class bravo_1rnd_84mm_delayfuze_he2_225 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 225m)";
		displayNameShort = "448 HE 225";
		ammo = "bravo_84mm_delayfuze_he2_225";
	};
	class bravo_1rnd_84mm_delayfuze_he2_250 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 250m)";
		displayNameShort = "448 HE 250";
		ammo = "bravo_84mm_delayfuze_he2_250";
	};
	class bravo_1rnd_84mm_delayfuze_he2_300 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 300m)";
		displayNameShort = "448 HE 300";
		ammo = "bravo_84mm_delayfuze_he2_300";
	};
	class bravo_1rnd_84mm_delayfuze_he2_400 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 400m)";
		displayNameShort = "448 HE 400";
		ammo = "bravo_84mm_delayfuze_he2_400";
	};
	class bravo_1rnd_84mm_delayfuze_he2_500 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 500m)";
		displayNameShort = "448 HE 500";
		ammo = "bravo_84mm_delayfuze_he2_500";
	};
	class bravo_1rnd_84mm_delayfuze_he2_600 : bravo_1rnd_84mm_delayfuze_he2_100
	{
		displayName = "84 mm FFV448 HE (Programmable, 600m)";
		displayNameShort = "448 HE 600";
		ammo = "bravo_84mm_delayfuze_he2_600";
	};
	
	class 1Rnd_RC40_HE_Shell_RF;
	class bravo_1rnd_40mm_gl_cuas : 1rnd_rc40_he_shell_rf
	{
		displayName = "40 mm Skylance C-UAS";
		displayNameShort = "C-UAS";
		descriptionShort = "Type: Grenade-Launched Counter-UAS Munition. Range 500 metres.<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: NATO 40x46mm grenade launchers";
		ammo = "bravo_40mm_gl_cuas_launch";
	};
	class bravo_1rnd_40mm_gl_cuas_vog : 1rnd_rc40_he_shell_rf
	{
		displayName = "40 mm VOG-6G77 C-UAS";
		displayNameShort = "C-UAS";
		descriptionShort = "Type: Grenade-Launched Counter-UAS Munition. Range 500 metres.<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: Russian 40mm grenade launchers";
		ammo = "bravo_40mm_gl_cuas_launch";
	};
};
class CfgMagazineWells
{
	class UGL_40x36
	{
		bravo_munitions_magazines[] = {"bravo_1rnd_40mm_gl_mine", "bravo_1rnd_40mm_gl_cuas"};
	};
	class VOG_40mm
	{
		bravo_munitions_magazines[] = {"bravo_1rnd_40mm_gl_mine_vog", "bravo_1rnd_40mm_gl_cuas_vog"};
	};
	class CBA_Carl_Gustaf
	{
		bravo_munitions_magazines[] = {
			"bravo_1rnd_84mm_delayfuze_he_100",
			"bravo_1rnd_84mm_delayfuze_he_125",
			"bravo_1rnd_84mm_delayfuze_he_150",
			"bravo_1rnd_84mm_delayfuze_he_175",
			"bravo_1rnd_84mm_delayfuze_he_200",
			"bravo_1rnd_84mm_delayfuze_he_225",
			"bravo_1rnd_84mm_delayfuze_he_250",
			"bravo_1rnd_84mm_delayfuze_he_300",
			"bravo_1rnd_84mm_delayfuze_he_400",
			"bravo_1rnd_84mm_delayfuze_he_500",
			"bravo_1rnd_84mm_delayfuze_he_600",
			"bravo_1rnd_84mm_delayfuze_he_impact",
			"bravo_1rnd_84mm_delayfuze_he2_100",
			"bravo_1rnd_84mm_delayfuze_he2_125",
			"bravo_1rnd_84mm_delayfuze_he2_150",
			"bravo_1rnd_84mm_delayfuze_he2_175",
			"bravo_1rnd_84mm_delayfuze_he2_200",
			"bravo_1rnd_84mm_delayfuze_he2_225",
			"bravo_1rnd_84mm_delayfuze_he2_250",
			"bravo_1rnd_84mm_delayfuze_he2_300",
			"bravo_1rnd_84mm_delayfuze_he2_400",
			"bravo_1rnd_84mm_delayfuze_he2_500",
			"bravo_1rnd_84mm_delayfuze_he2_600",
			"bravo_1rnd_84mm_delayfuze_he2_impact",
	//		"bravo_1rnd_84mm_flechette",
			"bravo_1rnd_84mm_smoke"
		};
	};
};