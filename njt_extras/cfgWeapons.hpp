class CfgWeapons
{	
	class rifle_long_base_f;
	class uk3cb_hs50 : rifle_long_base_f
	{
		class single;
		class weaponSlotInfo;
	};
	class njt_hs50_20 : uk3cb_hs50
	{
		descriptionShort = "20 mm anti-materiel rifle";
		displayName = "Steyr HS-50/20";
		baseWeapon = "njt_hs50_20";
		magazines[] = {"njt_3rnd_hs50_20_apds", "njt_3rnd_hs50_20_he"};
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
		class njt_saxbomb_muzzle : ThrowMuzzle
		{
			magazines[] = {"njt_saxbomb"};
		};
		class njt_randomNade_muzzle : ThrowMuzzle
		{
			magazines[] = {"njt_randomNade"};
		};
		class njt_multiNade_muzzle : ThrowMuzzle
		{
			magazines[] = {"njt_multiNade"};
		};
		muzzles[] += { "njt_saxbomb_muzzle", "njt_randomNade_muzzle", "njt_multiNade_muzzle"};
	};
	/*
	class rhs_weap_TOW_launcher;
	class njt_ckem_launcher : rhs_weap_TOW_launcher
	{
		displayName = "BGM-166 CKEM Launcher";
		magazines[] = {"njt_2rnd_ckem_ground"};
		maxRange = 10000;
		minRange = 200;
		class topDown
		{};
	};
	*/
};