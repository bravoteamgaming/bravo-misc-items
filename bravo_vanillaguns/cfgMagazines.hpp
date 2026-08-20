class cfgMagazines
{
	class 75rnd_762x39_AK12_Mag_F;
	class bravo_75rnd_762x39mm_qjb95_mag : 75rnd_762x39_AK12_Mag_F
	{
		displayName = "7.62 mm 75Rnd QJB-95 Magazine";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_co.paa"};
		modelSpecial = "a3\Weapons_F_exp\MagazineProxies\mag_58x42_CTAR_100rnd";
		picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_Mag_F_CA.paa";
	};
	class bravo_75rnd_762x39mm_qjb95_tracer_mag : bravo_75rnd_762x39mm_qjb95_mag
	{
		displayName = "7.62 mm 75Rnd QJB-95 Tracer Magazine";
		tracersEvery = 1;
	};
	
	class 20rnd_650x39_Cased_Mag_F;
	class bravo_20rnd_556x45mm_qbu97a_m855a1 : 20rnd_650x39_Cased_Mag_F
	{
		displayName = "5.56 mm 20Rnd QBU-97A M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45 mm NATO<br />Rounds: 20<br />Used in: QBU-97A";
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		initSpeed = 960;
		tracersEvery = 0;
		lastRoundsTracer = 3;
	};
	class bravo_20rnd_556x45mm_qbu97a_m856a1 : bravo_20rnd_556x45mm_qbu97a_m855a1
	{
		displayName = "5.56 mm 20Rnd QBU-97A M856A1 (Tracer) Magazine";
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		lastRoundsTracer = 0;
		tracersEvery = 1;
	};
	class bravo_20rnd_556x45mm_qbu97a_mk262 : bravo_20rnd_556x45mm_qbu97a_m855a1
	{
		displayName = "5.56 mm 20Rnd QBU-97A Mk262 Mod 1 Magazine";
		ammo = "rhs_ammo_556x45_Mk262_Ball";
		initSpeed = 838;
	};
	class bravo_20rnd_556x45mm_qbu97a_m995 : bravo_20rnd_556x45mm_qbu97a_m855a1
	{
		displayName = "5.56 mm 20Rnd QBU-97A M995 AP Magazine";
		ammo = "rhs_ammo_556x45_M995_AP";
		initSpeed = 1024;
	};
	
	class gm_30rnd_9x19mm_b_dm11_mp5_blk;
	class bravo_30rnd_57x28mm_mx : gm_30rnd_9x19mm_b_dm11_mp5_blk
	{
		ammo = "b_570x28_ball";
		displayName = "5.7 mm 30Rnd MX Magazine";
		descriptionShort = "Caliber: 5.7x28 mm<br />Rounds: 30<br />Used in: MXCQC";
		initSpeed = 716;
		mass = 12;
	};
	
	class 30Rnd_9x21_Mag;
	class bravo_30rnd_57x28mm_cpw : 30Rnd_9x21_Mag
	{
		ammo = "b_570x28_ball";
		displayName = "5.7 mm 30Rnd CPW Magazine";
		descriptionShort = "Caliber: 5.7x28 mm<br />Rounds: 30<br />Used in: CPW";
		initSpeed = 716;
	};
	class bravo_30rnd_46x30mm_ap_cpw : 30Rnd_9x21_Mag
	{
		ammo = "rhs_ammo_46x30_AP";
		displayName = "4.6 mm 30Rnd AP CPW Magazine";
		descriptionShort = "Caliber: 4.6x30 mm<br />Rounds: 30<br />Used in: CPW";
		initSpeed = 681;
	};
	class bravo_30rnd_46x30mm_fmj_cpw : 30Rnd_9x21_Mag
	{
		ammo = "rhs_ammo_46x30_FMJ";
		displayName = "4.6 mm 30Rnd FMJ CPW Magazine";
		descriptionShort = "Caliber: 4.6x30 mm<br />Rounds: 30<br />Used in: CPW";
		initSpeed = 621;
	};
	class bravo_30rnd_46x30mm_jhp_cpw : 30Rnd_9x21_Mag
	{
		ammo = "rhs_ammo_46x30_JHP";
		displayName = "4.6 mm 30Rnd JHP CPW Magazine";
		descriptionShort = "Caliber: 4.6x30 mm<br />Rounds: 30<br />Used in: CPW";
		initSpeed = 691;
	};
};

class cfgMagazineWells
{
	class CBA_762x39_RPK
	{
		bravo_vanillaguns_mags[] = { "bravo_75rnd_762x39mm_qjb95_mag", "bravo_75rnd_762x39mm_qjb95_tracer_mag" };
	};
	class bravo_762x39_qjb
	{
		bravo_vanillaguns_mags[] = { "bravo_75rnd_762x39mm_qjb95_mag", "bravo_75rnd_762x39mm_qjb95_tracer_mag" };
	};
	class bravo_556x45_qbu97a
	{
		bravo_vanillaguns_mags[] = { "bravo_20rnd_556x45mm_qbu97a_m855a1", "bravo_20rnd_556x45mm_qbu97a_m856a1", "bravo_20rnd_556x45mm_qbu97a_mk262", "bravo_20rnd_556x45mm_qbu97a_m995"};
	};
	class bravo_57x28_mx
	{
		bravo_vanillaguns_mags[] = {
			"bravo_30rnd_57x28mm_mx"
		};
	};
	class bravo_57x28_cpw
	{
		bravo_vanillaguns_mags[] = {
			"bravo_30rnd_57x28mm_cpw"
		};
	};
	class bravo_46x30_cpw
	{
		bravo_vanillaguns_mags[] = {
			"bravo_30rnd_46x30mm_jhp_cpw",
			"bravo_30rnd_46x30mm_fmj_cpw",
			"bravo_30rnd_46x30mm_ap_cpw"
		};
	};
};