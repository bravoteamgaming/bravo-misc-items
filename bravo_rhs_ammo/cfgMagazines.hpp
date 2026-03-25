class CfgMagazines
{
	class CA_LauncherMagazine;
	class UK3CB_Saeghe2_Missile : CA_LauncherMagazine
	{
		ammo = "bravo_m47_dragon3_ammo";
		mass = 272.05;
	};
	class UK3CB_M47_Missile : UK3CB_Saeghe2_Missile
	{
		ammo = "UK3CB_M47_AT";
		mass = 252.87;
	};
	class bravo_m47_dragon2_missile : UK3CB_M47_Missile
	{
		displayName = "M47 Dragon II";
		ammo = "bravo_m47_dragon2_ammo";
	};
	class bravo_m47_dragon3_missile : UK3CB_M47_Missile
	{
		displayName = "M47 Dragon III";
		ammo = "bravo_m47_dragon3_ammo";
		mass = 272.05;
	};
};

class CfgMagazineWells
{
	class CBA_M47_Dragon
	{
		bravo_rhs_ammo_magazines[] = {"UK3CB_M47_Missile", "bravo_m47_dragon2_missile", "bravo_m47_dragon3_missile"};
	};
};