class Mode_FullAuto;
class CfgWeapons
{
	class Launcher_Base_F;
	class uk3cb_saeghe2 : Launcher_Base_F
	{
		class WeaponSlotsInfo
		{
			mass = 66.14;
		};
	};
	class uk3cb_m47 : uk3cb_saeghe2
	{
		magazineWell[] = {"CBA_M47_Dragon"};
	};
	
	class Rifle_Base_F;
	class rhs_weap_saw_base : Rifle_Base_F
	{
		class FullAuto;
	};
	class rhs_weap_lmg_minimipara : rhs_weap_saw_base
	{
		class FullAuto : FullAuto
		{
			dispersion = 0.0008;
		};
	};
	
	class Rifle_Long_Base_F;
	class rhs_pkp_base : Rifle_Long_Base_F
	{
		class FullAuto : Mode_FullAuto
		{
			dispersion = 0.0010193;
		};
	};
};