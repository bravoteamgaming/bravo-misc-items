class cfgMagazines
{
	class 75rnd_762x39_AK12_Mag_F;
	class bravo_75rnd_762x39mm_qjb95_mag : 75rnd_762x39_AK12_Mag_F
	{
		displayName = "7.62x39 mm 75Rnd QJB-95 Magazine";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_co.paa"};
		modelSpecial = "a3\Weapons_F_exp\MagazineProxies\mag_58x42_CTAR_100rnd";
		picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_Mag_F_CA.paa";
	};
	class bravo_75rnd_762x39mm_qjb95_tracer_mag : bravo_75rnd_762x39mm_qjb95_mag
	{
		displayName = "7.62x39 mm 75Rnd QJB-95 Tracer Magazine";
		tracersEvery = 1;
	};
};

class cfgMagazineWells
{
	class CBA_762x39_RPK
	{
		bravo_qbzak_mags[] = { "bravo_75rnd_762x39mm_qjb95_mag", "bravo_75rnd_762x39mm_qjb95_tracer_mag" };
	};
	class bravo_762x39_qjb
	{
		bravo_qbzak_mags[] = { "bravo_75rnd_762x39mm_qjb95_mag", "bravo_75rnd_762x39mm_qjb95_tracer_mag" };
	};
};