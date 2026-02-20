class CfgMagazines
{
	class SPE_50Rnd_792x57;
	class bravo_50rnd_762x51_mg34 : SPE_50Rnd_792x57
	{
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 50<br />Used in: MG 34F2";
		displayName = "7.62 mm 50Rnd MG 34F2";
		displayNameShort = "Ball";
		ammo = "gm_bullet_762x51mm_B_DM111";
		initSpeed = 820;
		lastRoundsTracer = 3;
		tracersEvery = 0;
	};
	class bravo_50rnd_762x51_mg34_red : SPE_50Rnd_792x57
	{
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 50<br />Used in: MG 34F2";
		displayName = "7.62 mm 50Rnd MG 34F2 Tracer (Red)";
		displayNameShort = "Tracer";
		ammo = "gm_bullet_762x51mm_B_T_DM21";
		initSpeed = 820;
		lastRoundsTracer = 3;
		tracersEvery = 2;
	};
	
	class bravo_50rnd_762x63_mg34 : SPE_50Rnd_792x57
	{
		descriptionShort = "Caliber: .30-06 Springfield<br />Rounds: 50<br />Used in: MG 34F1";
		displayName = ".30-06 50Rnd MG 34F1";
		displayNameShort = "Ball";
		ammo = "SPE_B_762x63_Ball";
		initSpeed = 855;
		lastRoundsTracer = 3;
		tracersEvery = 0;
	};
	class bravo_50rnd_762x63_mg34_red : SPE_50Rnd_792x57
	{
		descriptionShort = "Caliber: .30-06 Springfield<br />Rounds: 50<br />Used in: MG 34F1";
		displayName = ".30-06 50Rnd MG 34F1 Tracer (Red)";
		displayNameShort = "Tracer";
		ammo = "SPE_B_762x63_Ball";
		initSpeed = 855;
		lastRoundsTracer = 3;
		tracersEvery = 2;
	};
};

class CfgMagazineWells
{
	class bravo_762x51_mg34
	{
		bravo_mg34f2_mags[] = { "bravo_50rnd_762x51_mg34", "bravo_50rnd_762x51_mg34_red" };
	};
	class bravo_762x63_mg34
	{
		bravo_mg34f1_mags[] = { "bravo_50rnd_762x63_mg34", "bravo_50rnd_762x63_mg34_red" };
	};
	class CBA_762x51_LINKS
	{
		bravo_3cb_baf_mags[] = { "UK3CB_BAF_762_100Rnd", "UK3CB_BAF_762_100Rnd_Blank", "UK3CB_BAF_762_100Rnd_T", "UK3CB_BAF_762_200Rnd", "UK3CB_BAF_762_200Rnd_Blank", "UK3CB_BAF_762_200Rnd_T" };
	};
};