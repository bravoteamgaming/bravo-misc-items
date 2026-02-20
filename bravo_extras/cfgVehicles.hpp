class CfgVehicles
{
	/*
	class rhsusf_stryker_m1126_base;
	class rhsusf_stryker_m1126_m2_base : rhsusf_stryker_m1126_base
	{
		class Turrets;
	};
	class rhsusf_stryker_m1134_base : rhsusf_stryker_m1126_m2_base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class rhsusf_stryker_m1134_wd : rhsusf_stryker_m1134_base
	{};
	class bravo_stryker_m1134_ckem : rhsusf_stryker_m1134_wd
	{
		displayName = "M1134E5 CKEM";
		displayNameShort = "M1134E5";
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {"bravo_ckem_launcher","rhsusf_weap_M6"};
				magazines[] = {"rhsusf_mag_l8a3_16", "bravo_2rnd_ckem_ground", "bravo_2rnd_ckem_ground", "bravo_2rnd_ckem_ground", "bravo_2rnd_ckem_ground", "bravo_2rnd_ckem_ground", "bravo_2rnd_ckem_ground"};
			};
		};
	};
	*/

	class WeaponHolderSimulated;
	class bravo_weaponholder_multinade : WeaponHolderSimulated
	{
		displayName = "Grenade of More Grenades";
		scope = 2;
		model = "\A3\Weapons_f\ammo\Handgrenade_throw";
		class transportMagazines
		{
			class mag_bravo_multiNade
			{
				magazine = "bravo_multiNade";
				count = 1;
			};
		};
	};
	
	class Module_F;
	class bravo_module_gbp : module_f
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "Toggle Global Grunt Birthday Party";
		category = "Effects";
		function = "bravo_fnc_gbpModule";
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 0;
		curatorInfoType = "";
	};
};