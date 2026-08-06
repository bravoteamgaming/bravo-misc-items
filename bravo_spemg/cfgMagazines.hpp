class CfgMagazines
{
	class SPE_50Rnd_792x57;
	class bravo_50rnd_762x51mm_mg34 : SPE_50Rnd_792x57
	{
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 50<br />Used in: MG 34F2";
		displayName = "7.62 mm 50Rnd MG 34F2 Belt";
		displayNameShort = "Ball";
		ammo = "gm_bullet_762x51mm_B_DM111";
		initSpeed = 820;
		lastRoundsTracer = 3;
		tracersEvery = 0;
	};
	class bravo_50rnd_762x51mm_mg34_red : bravo_50rnd_762x51mm_mg34
	{
		displayName = "7.62 mm 50Rnd MG 34F2 Tracer (Red) Belt";
		displayNameShort = "Tracer";
		ammo = "gm_bullet_762x51mm_B_T_DM21";
		tracersEvery = 2;
	};
	
	class bravo_50rnd_762x63mm_mg34 : SPE_50Rnd_792x57
	{
		descriptionShort = "Caliber: .30-06 Springfield<br />Rounds: 50<br />Used in: MG 34F1";
		displayName = ".30-06 50Rnd MG 34F1 Belt";
		displayNameShort = "Ball";
		ammo = "SPE_B_762x63_Ball";
		initSpeed = 855;
		lastRoundsTracer = 3;
		tracersEvery = 0;
	};
	class bravo_50rnd_762x63mm_mg34_red : bravo_50rnd_762x63mm_mg34
	{
		displayName = ".30-06 50Rnd MG 34F1 Tracer (Red) Belt";
		displayNameShort = "Tracer";
		tracersEvery = 2;
	};
	
	class SPE_50Rnd_762x63;
	class bravo_50rnd_65x55mm_m1919 : SPE_50Rnd_762x63
	{
		descriptionShort = "Caliber: 6.5x55 mm Swedish<br />Rounds: 50<br />Used in: Ksp m/42";
		displayName = "6.5 mm 50Rnd Ksp m/42 Belt";
		displayNameShort = "Ball";
		ammo = "bravo_bullet_65x55_m1941";
		initSpeed = 800;
		lastRoundsTracer = 3;
		tracersEvery = 0;
	};
	class bravo_50rnd_65x55mm_m1919_red : bravo_50rnd_65x55mm_m1919
	{
		displayName = "6.5 mm 50Rnd Ksp m/42 Tracer (Red) Belt";
		displayNameShort = "Tracer";
		tracersEvery = 2;
	};
	
	class bravo_50rnd_762x51mm_m1919 : SPE_50Rnd_762x63
	{
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 50<br />Used in: Ksp m/42";
		displayName = "7.62 mm 50Rnd Ksp m/42 Belt";
		displayNameShort = "Ball";
		ammo = "gm_bullet_762x51mm_B_DM111";
		initSpeed = 800;
		lastRoundsTracer = 3;
		tracersEvery = 0;
	};
	class bravo_50rnd_762x51mm_m1919_red : bravo_50rnd_762x51mm_m1919
	{
		displayName = "7.62 mm 50Rnd Ksp m/42 Tracer (Red) Belt";
		displayNameShort = "Tracer";
		ammo = "gm_bullet_762x51mm_B_T_DM21";
		tracersEvery = 2;
	};
	
	class SPE_100Rnd_762x63;
	class bravo_100rnd_65x55mm_m1919 : SPE_100Rnd_762x63
	{
		descriptionShort = "Caliber: 6.5x55 mm Swedish<br />Rounds: 100<br />Used in: Ksp m/42";
		displayName = "6.5 mm 100Rnd Ksp m/42 Belt";
		displayNameShort = "Ball";
		ammo = "bravo_bullet_65x55_m1941";
		initSpeed = 800;
		lastRoundsTracer = 3;
		tracersEvery = 0;
	};
	class bravo_100rnd_65x55mm_m1919_red : bravo_100rnd_65x55mm_m1919
	{
		displayName = "6.5 mm 100Rnd Ksp m/42 Tracer (Red) Belt";
		displayNameShort = "Tracer";
		tracersEvery = 2;
	};
	
	class bravo_100rnd_762x51mm_m1919 : SPE_100Rnd_762x63
	{
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 100<br />Used in: Ksp m/42";
		displayName = "7.62 mm 100Rnd Ksp m/42 Belt";
		displayNameShort = "Ball";
		ammo = "gm_bullet_762x51mm_B_DM111";
		initSpeed = 800;
		lastRoundsTracer = 3;
		tracersEvery = 0;
	};
	class bravo_100rnd_762x51mm_m1919_red : bravo_100rnd_762x51mm_m1919
	{
		displayName = "7.62 mm 100Rnd Ksp m/42 Tracer (Red) Belt";
		displayNameShort = "Tracer";
		ammo = "gm_bullet_762x51mm_B_T_DM21";
		tracersEvery = 2;
	};
	
	class SPE_5Rnd_792x57;
	class bravo_5rnd_65x55mm_m1941_clip : SPE_5Rnd_792x57
	{
		descriptionShort = "Caliber: 6.5x55 mm Swedish<br />Rounds: 5<br />Used in: Swedish Mausers";
		displayName = "6.5 mm 5Rnd Clip";
		displayNameShort = "Ball";
		ammo = "bravo_bullet_65x55_m1941";
		initSpeed = 800;
		lastRoundsTracer = 0;
		tracersEvery = 0;
	};
	class bravo_5rnd_65x55mm_m1941_red_clip : bravo_5rnd_65x55mm_m1941_clip
	{
		displayName = "6.5 mm 5Rnd Tracer (Red) Clip";
		displayNameShort = "Tracer";
		lastRoundsTracer = 5;
		tracersEvery = 5;
	};
	class bravo_5rnd_65x55mm_pprj_clip : bravo_5rnd_65x55mm_m1941_clip
	{
		displayName = "6.5 mm 5Rnd pprj m/41 Clip";
		displayNameShort = "AP";
	};
};

class CfgMagazineWells
{
	class bravo_762x51_mg34
	{
		bravo_spemg_mags[] = { "bravo_50rnd_762x51mm_mg34", "bravo_50rnd_762x51mm_mg34_red" };
	};
	class bravo_762x63_mg34
	{
		bravo_spemg_mags[] = { "bravo_50rnd_762x63mm_mg34", "bravo_50rnd_762x63mm_mg34_red" };
	};
	class bravo_65x55_m1919
	{
		bravo_spemg_mags[] = { "bravo_50rnd_65x55mm_m1919", "bravo_50rnd_65x55mm_m1919_red", "bravo_100rnd_65x55mm_m1919", "bravo_100rnd_65x55mm_m1919_red" };
	};
	class bravo_762x51_m1919
	{
		bravo_spemg_mags[] = { "bravo_50rnd_762x51mm_m1919", "bravo_50rnd_762x51mm_m1919_red", "bravo_100rnd_762x51mm_m1919", "bravo_100rnd_762x51mm_m1919_red" };
	};
	class bravo_5rnd_65x55_clip
	{
		bravo_spemg_mags[] = { "bravo_5rnd_65x55mm_m1941_clip", "bravo_5rnd_65x55mm_pprj_clip", "bravo_5rnd_65x55mm_m1941_red_clip" };
	};
};