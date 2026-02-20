class asdg_OpticRail1913;

class CfgWeapons
{	
	class SPE_MG34;
	class njt_mg34f2 : SPE_MG34
	{
		baseWeapon = "njt_mg34f2";
		displayName = "MG 34F2";
		descriptionShort = "Light machine gun<br />Caliber: 7.62x51 mm NATO";
		magazines[] = {"njt_50rnd_762x51_mg34"};
		magazineWell[] = {"njt_762x51_mg34", "CBA_762x51_LINKS"};
	};
	class njt_mg34f1 : SPE_MG34
	{
		baseWeapon = "njt_mg34f1";
		displayName = "MG 34F1";
		descriptionShort = "Light machine gun<br />Caliber: .30-06 Springfield";
		magazines[] = {"njt_50rnd_762x63_mg34"};
		magazineWell[] = {"njt_762x63_mg34", "SPE_3006_Short_Belt", "CBA_3006_Belt"};
	};
};