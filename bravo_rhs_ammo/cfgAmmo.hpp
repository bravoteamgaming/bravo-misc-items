class CfgAmmo
{
	class BulletBase;
	class B_762x51_Ball;
	class B_556x45_Ball;
	class B_762x54_Ball;
	class B_127x99_Ball;
	class B_127x99_SLAP;
	class rhsusf_ammo_basic_penetrator;
	
	class rhs_B_545x39_Ball : B_556x45_Ball
	{
		caliber = 0.59;
	};
	class rhs_B_545x39_7N6_Ball : rhs_B_545x39_Ball
	{
		caliber = 0.62;
	};
	
	class rhs_B_762x39_Ball : B_762x51_Ball
	{
		caliber = 0.76;
	};
	class rhs_B_762x54_Ball : B_762x51_Ball
	{
		caliber = 0.53;
	};
	
	class rhs_ammo_762x51_M80_Ball : BulletBase
	{
		caliber = 1.1;
	};
	class rhs_ammo_762x51_M118_Special_Ball : rhs_ammo_762x51_M80_Ball
	{
		caliber = 1.8;
		hit = 16;
	};
	class rhs_ammo_762x51_M993_Ball : rhs_ammo_762x51_M80_Ball
	{
		caliber = 2.2;
	};
	class rhs_ammo_762x51_M80A1EPR_Ball : rhs_ammo_762x51_M80_Ball
	{
		caliber = 1.2;
	};
	class rhs_ammo_762x51_Mk316_Special_Ball : rhs_ammo_762x51_M118_Special_Ball
	{
		caliber = 1.1;
	};
	class rhs_ammo_762x51_M61_AP : rhs_ammo_762x51_M80_Ball
	{
		caliber = 1.4;
	};
	
	class rhs_ammo_556x45_Mk262_Ball : B_556x45_Ball
	{
		caliber = 0.87;
	};
	class rhs_ammo_556x45_Mk318_Ball : B_556x45_Ball
	{
		caliber = 0.87;
	};
	class rhs_ammo_556x45_M995_AP : B_556x45_Ball
	{
		caliber = 1.6;
	};
	class rhs_ammo_556x45_M193_Ball : B_556x45_Ball
	{
		caliber = 0.6;
	};
	class rhs_ammo_556x45_M855_Ball : B_556x45_Ball
	{
		caliber = 0.7;
	};
	class rhs_ammo_556x45_M885A1_Ball : B_556x45_Ball
	{
		caliber = 0.87;
	};
	
	class rhsusf_B_300winmag : B_762x54_Ball
	{
		caliber = 1.15;
	};
	
	class rhsusf_ammo_127x99_M33_Ball : B_127x99_Ball
	{
		caliber = 2.6;
	};
	
	class rhs_ammo_127x99_SLAP : B_127x99_SLAP
	{
		caliber = 3.4;
	};
	
	class rhs_ammo_M136_penetrator : rhsusf_ammo_basic_penetrator
	{
		hit = 370;
	};
	class rhs_ammo_maaws_HEAT_penetrator : rhsusf_ammo_basic_penetrator
	{
		hit = 450;
	};
	class rhs_ammo_M136_hedp_penetrator : rhs_ammo_M136_penetrator
	{
		hit = 450;
	};
};