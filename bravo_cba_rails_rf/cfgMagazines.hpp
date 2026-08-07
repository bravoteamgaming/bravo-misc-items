class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	class 30Rnd_65x39_caseless_green : 30Rnd_65x39_caseless_mag
	{
		picture = "\lxrf\weapons_rf\Rifles\khaybar\data\ui\icon_30Rnd_65x39_caseless_green_ca.paa";
		modelSpecial = "\lxrf\weapons_rf\Rifles\khaybar\mag_65x39mm_30rnd_RF.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[]  = {"camo"};
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Rifles\Khaybar\data\Khaybar_02_CO"};
		hiddenSelectionsMaterials[] = {"a3\weapons_f\rifles\khaybar\data\khaybar_02.rvmat"};
	};
	class 30Rnd_65x39_caseless_green_mag_Tracer : 30Rnd_65x39_caseless_green
	{
		picture = "\lxrf\weapons_rf\Rifles\khaybar\data\ui\icon_30Rnd_65x39_caseless_green_mag_Tracer_ca.paa";
	};

	class bravo_20Rnd_65x39_caseless_green_RF : 30Rnd_65x39_caseless_green
	{
		displayName = "6.5 mm 20Rnd Caseless Mag";
		descriptionShort = "Caliber: 6.5x39 mm - Caseless<br />Rounds: 20<br />Used in: Katiba, Type 115";
		count = 20;
		modelSpecial = "\lxrf\weapons_rf\Rifles\khaybar\mag_65x39mm_20rnd_RF.p3d";
		picture = "\lxrf\weapons_rf\Rifles\khaybar\data\ui\icon_20Rnd_65x39_caseless_green_RF_ca.paa";
	};
	class bravo_20Rnd_65x39_caseless_green_mag_Tracer_RF: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		displayName = "6.5 mm 20Rnd Tracer (Green) Caseless Mag";
		descriptionShort = "Caliber: 6.5x39 mm Tracer (Green) - Caseless<br />Rounds: 20<br />Used in: Katiba, Type 115";
		count = 20;
		modelSpecial = "\lxrf\weapons_rf\Rifles\khaybar\mag_65x39mm_20rnd_RF.p3d";
		picture = "\lxrf\weapons_rf\Rifles\khaybar\data\ui\icon_20Rnd_65x39_caseless_green_mag_Tracer_RF_ca.paa";
	};
};

class CfgMagazineWells
{
	class Katiba_65x39
	{
		bravo_cba_rails_rf_mags[] = {
			"bravo_20Rnd_65x39_caseless_green_RF",
			"bravo_20Rnd_65x39_caseless_green_mag_Tracer_RF"
		};
	};
	class CBA_65x39_Katiba
	{
		bravo_cba_rails_rf_mags[] = {
			"bravo_20Rnd_65x39_caseless_green_RF",
			"bravo_20Rnd_65x39_caseless_green_mag_Tracer_RF"
		};
	};
};