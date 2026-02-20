class CfgWeapons
{	
	class rifle_long_base_f;
	class uk3cb_hs50 : rifle_long_base_f
	{
		class single;
		class weaponSlotInfo;
	};
	class bravo_hs50_20 : uk3cb_hs50
	{
		descriptionShort = "20 mm anti-materiel rifle";
		displayName = "Steyr HS-50/20";
		baseWeapon = "bravo_hs50_20";
		magazines[] = {"bravo_3rnd_hs50_20_apds", "bravo_3rnd_hs50_20_he"};
		class single : single
		{
			class standardSound
			{
				soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
			};
		};
		class weaponSlotInfo : weaponSlotInfo
		{
			mass = 330;
		};
	};
	
	class grenadeLauncher;
	class Throw : GrenadeLauncher
	{
		class ThrowMuzzle;
		class bravo_saxbomb_muzzle : ThrowMuzzle
		{
			magazines[] = {"bravo_saxbomb"};
		};
		class bravo_randomNade_muzzle : ThrowMuzzle
		{
			magazines[] = {"bravo_randomNade"};
		};
		class bravo_multiNade_muzzle : ThrowMuzzle
		{
			magazines[] = {"bravo_multiNade"};
		};
		muzzles[] += { "bravo_saxbomb_muzzle", "bravo_randomNade_muzzle", "bravo_multiNade_muzzle"};
	};
	/*
	class rhs_weap_TOW_launcher;
	class bravo_ckem_launcher : rhs_weap_TOW_launcher
	{
		displayName = "BGM-166 CKEM Launcher";
		magazines[] = {"bravo_2rnd_ckem_ground"};
		maxRange = 10000;
		minRange = 200;
		class topDown
		{};
	};
	*/
};