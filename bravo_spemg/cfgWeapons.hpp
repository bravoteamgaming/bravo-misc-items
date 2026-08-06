class asdg_OpticRail1913;

class CfgWeapons
{	
	class SPE_MG34;
	class bravo_mg34f2 : SPE_MG34
	{
		baseWeapon = "bravo_mg34f2";
		displayName = "MG 34F2";
		descriptionShort = "Light machine gun<br />Caliber: 7.62x51 mm NATO";
		magazines[] = {"bravo_50rnd_762x51mm_mg34"};
		magazineWell[] = {"bravo_762x51_mg34", "CBA_762x51_LINKS"};
	};
	class bravo_mg34f1 : SPE_MG34
	{
		baseWeapon = "bravo_mg34f1";
		displayName = "MG 34F1";
		descriptionShort = "Light machine gun<br />Caliber: .30-06 Springfield";
		magazines[] = {"bravo_50rnd_762x63mm_mg34"};
		magazineWell[] = {"bravo_762x63_mg34", "SPE_3006_Short_Belt", "CBA_3006_Belt"};
	};
	
	class SPE_M1919A6;
	class bravo_ksp42b_65 : SPE_M1919A4
	{
		baseWeapon = "bravo_ksp42B_65";
		displayName = "Ksp M/42B (early)";
		descriptionShort = "Medium machine gun<br />Caliber: 6.5x55 mm Swedish";
		magazines[] = {"bravo_50rnd_65x55mm_m1919"};
		magazineWell[] = {"bravo_65x55_m1919"};
	};
	class bravo_ksp42b_762 : SPE_M1919A4
	{
		baseWeapon = "bravo_ksp42B_65";
		displayName = "Ksp M/42B (late)";
		descriptionShort = "Medium machine gun<br />Caliber: 7.62x51 mm NATO";
		magazines[] = {"bravo_50rnd_762x51mm_m1919"};
		magazineWell[] = {"bravo_762x51_m1919", "CBA_762x51_LINKS"};
	};
};