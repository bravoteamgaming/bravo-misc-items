class CfgAmmo
{
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
};