/*
class mode_semiauto;
class launcher_base_f;
class rhs_weap_maaws : launcher_base_f
{
	dispersion = 0.07;
	class single : mode_semiauto
	{
		dispersion = 0.07;
	};
};
*/
class cfgWeapons
{
	class default;
	class put : default
	{
		class MineMuzzle;
		class bravo_trappedGunMineMuzzle : MineMuzzle
		{
			magazines[] = {
				"bravo_trapped_gun_mine_nato_mag",
				"bravo_trapped_gun_mine_natocw_mag",
				"bravo_trapped_gun_mine_ru_mag",
				"bravo_trapped_gun_mine_rucw_mag",
				"bravo_trapped_gun_mine_csat_mag",
				"bravo_trapped_gun_mine_ww2ger_mag",
				"bravo_trapped_gun_mine_ww2allied_mag"
			};
		};
		muzzles[] += {"bravo_trappedGunMineMuzzle"};
	};

	class launch_O_Titan_F;
	class rhs_weap_fim92 : launch_O_Titan_F
	{
		magazines[] += {
			"bravo_1rnd_missile_fim92f_bad"
		};
		magazineWell[] = {"bravo_stinger"};
	};

	class rhs_weap_strela;
	class rhs_weap_igla : rhs_weap_strela
	{
		magazines[] += {
			"bravo_1rnd_missile_9k38_bad"
		};
		magazineWell[] = {"bravo_igla"};
	};
	
	class UK3CB_KH2002_BASE;
	class UK3CB_KH2002 : UK3CB_KH2002_BASE
	{
		model = "lxrf\weapons_rf\Rifles\khaybar\Khaybar_RF.p3d";
		magazineReloadSwitchPhase = 0.48;
	};
	
	class UK3CB_KH2002_Carbine : UK3CB_KH2002_BASE
	{
		model = "lxrf\weapons_rf\Rifles\khaybar\KhaybarC_RF.p3d";
		magazineReloadSwitchPhase = 0.48;
	};
	class UK3CB_KH2002_UGL : UK3CB_KH2002_BASE
	{
		model = "lxrf\weapons_rf\Rifles\khaybar\Khaybar_GL_RF.p3d";
		magazineReloadSwitchPhase = 0.48;
	};
	
	class rhs_weap_m136;
	class rhs_weap_m72a7 : rhs_weap_m136
	{
		class WeaponSlotsInfo;
	};
	class bravo_fgm202 : rhs_weap_m72a7
	{
		baseWeapon = "bravo_fgm202";
		displayName = "FGM-202 Predator-NG";
		descriptionShort = "Missile launcher<br/>Caliber: 66 mm<br/>Type: Single-shot Anti-Tank with visual and IR guidance";
		magazines[] = {"bravo_1rnd_missile_fgm202"};
		lockedTargetSound[] = {"\FIR_AirWeaponSystem_US\sound\Sidewinder_growling.wss",4.5,1.1};
		lockingTargetSound[] = {"\FIR_AirWeaponSystem_US\sound\Sidewinder_growling.wss",4,1};
		canLock = 2;
		cmImmunity = 0.8;
		weaponLockDelay = 3;
		weaponLockSystem = "1 + 2";
		lockAcquire = 1;
		class ItemInfo
		{
			onHoverText = "FGM-202";
			RMBhint = "FGM-202";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 82;
		};
	};
	
	class rhs_weap_m72a7_used;
	class bravo_fgm202_used : rhs_weap_m72a7_used
	{
		baseWeapon = "bravo_fgm202_used";
		displayName = "FGM-202 Predator-NG (used)";
	};
};