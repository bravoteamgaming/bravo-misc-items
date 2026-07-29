class 75rnd_762x39_AK12_Mag_F;
class bravo_75rnd_762x39mm_qjb95_mag : 75rnd_762x39_AK12_Mag_F
{
	displayName = "7.62x39 mm 75Rnd QJB-95 Magazine";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_co.paa"};
	modelSpecial = "a3\Weapons_F_exp\MagazineProxies\mag_58x42_CTAR_100rnd";
};
class bravo_75rnd_762x39mm_qjb95_tracer_mag : bravo_75rnd_762x39mm_qjb95_mag
{
	displayName = "7.62x39 mm 75Rnd QJB-95 Tracer Magazine";
	tracersEvery = 1;
};

class cfgMagazineWells
{
	class CBA_762x39_AK
	{
		bravo_qbzak_mags[] = { "bravo_75rnd_762x39mm_qjb95_mag", "bravo_75rnd_762x39mm_qjb95_tracer_mag" };
	};
};