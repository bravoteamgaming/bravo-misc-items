class CfgAmmo
{
	class BulletBase;
	class B_762x51_Ball;
	class B_556x45_Ball;
	
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
};