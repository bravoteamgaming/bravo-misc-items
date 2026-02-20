class CfgAmmo
{
	class g_40mm_he;
	class njt_40mm_gl_mine : g_40mm_he
	{
		ace_frag_skip = 1;
		explosive = 0;
		indirectHit = 0;
		fuseDistance = 5;
		submunitionAmmo = "njt_40mm_gl_mine_stuck";
		triggerOnImpact = 1;
		submunitionInitSpeed = 0;
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0.05,-0.05};
		explosionEffects = "";
	};
	
	class rhs_g_vog25;
	class njt_40mm_gl_mine_vog : rhs_g_vog25
	{
		ace_frag_skip = 1;
		explosive = 0;
		indirectHit = 0;
		fuseDistance = 5;
		submunitionAmmo = "njt_40mm_gl_mine_stuck";
		triggerOnImpact = 1;
		submunitionInitSpeed = 0;
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0.05,-0.05};
		explosionEffects = "";
	};
	
//	class G_RC40_fake_RF;
	class njt_40mm_gl_cuas_launch : g_40mm_he
	{
		ace_frag_skip = 1;
		explosive = 0;
		indirectHit = 0;
		fuseDistance = 5;
		submunitionAmmo = "njt_40mm_gl_cuas_detector";
		triggerOnImpact = 0;
		submunitionInitSpeed = 0;
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0.05,-0.05};
		deleteParentWhenTriggered = 1;
		explosionEffects = "";
		SoundSetExplosion[] = {};
		soundHit1[] = {};
		soundHit2[] = {};
		soundHit3[] = {};
		soundHit4[] = {};
		triggerTime = 1.5;
	};
	
	class ammo_Missile_AMRAAM_C;

	class njt_40mm_gl_cuas_detector : ammo_Missile_AMRAAM_C
	{
		model = "\z\ace\addons\missile_clgp\data\ace_pike_ammo.p3d";
		submunitionAmmo = "njt_40mm_gl_cuas_seeker";
		submunitionDirectionType = "SubmunitionTargetDirection";
		submunitionConeAngle = 0.001;
		triggerOnImpact = 0;
		indirectHit = 8;
		hit = 8;
		indirectHitRange = 5;
		deleteParentWhenTriggered = 1;
		thrust = 6;
		initTime = 0;
		thrustTime = 1;
		maxSpeed = 3;
		fuseDistance = 0;
		explosionEffects = "";
		SoundSetExplosion[] = {};
		soundHit1[] = {};
		soundHit2[] = {};
		soundHit3[] = {};
		soundHit4[] = {};
		autoseektarget = 0;
		class components
		{
			class sensorsManagerComponent
			{
				class components
				{
					class activeRadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 10;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 60;
						minTrackableATL = 5;
						maxTrackableATL = 1000;
						typeRecognitionDistance = 500;
						class AirTarget
						{
							minRange = 1000;
							maxRange = 1000;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 1000;
						};
					};
				};
			};
		};
		maneuvrability = 0;
		timeToLive = 4;
		proximityExplosionDistance = 0;
		ace_frag_charge = 10;
		ace_frag_metal = 10;
		ace_frag_classes[] = {"ace_frag_tiny", "ace_frag_tiny_HD"};
		class eventHandlers
		{
			class njt_eh
			{
				init = "(_this#0) spawn njt_fnc_glCUAS;";
			};
		};
	};
	class njt_40mm_gl_cuas_seeker : ammo_Missile_AMRAAM_C
	{
		// model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl_fly.p3d";
		model = "\z\ace\addons\missile_clgp\data\ace_pike_ammo.p3d";
		indirectHit = 8;
		hit = 8;
		indirectHitRange = 5;
		ace_frag_charge = 10;
		autoseektarget = 0;
		ace_frag_metal = 10;
		ace_frag_classes[] = {"ace_frag_tiny", "ace_frag_tiny_HD"};
		explosionEffects = "ExploAmmoExplosion";
		SoundSetExplosion[] = {"Shell30mm40mm_Exp_SoundSet","Shell30mm40mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.77828,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.77828,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.77828,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.77828,1,1600};
		class components
		{
			class sensorsManagerComponent
			{
				class components
				{
					class activeRadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 10;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = 0;
						maxTrackableSpeed = 60;
						minTrackableATL = 5;
						maxTrackableATL = 1000;
						typeRecognitionDistance = 500;
						class AirTarget
						{
							minRange = 1000;
							maxRange = 1000;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 1000;
						};
					};
				};
			};
		};
		maneuvrability = 30;
		sideAirFriction = 0.5;
		timeToLive = 8;
		proximityExplosionDistance = 10;
		missileLockCone = 360;
		missileKeepLockedCone = 360;
		missileLockMinDistance = 5;
		missileLockMaxDistance = 800;
		missileLockMaxSpeed = 60;
		trackLead = 1;
		trackOversteer = 1;
		thrust = 200;
		maxSpeed = 500;
		thrustTime = 1;
		fuseDistance = 0;
		initTime = 0;
	};
	
	class apersmine_range_ammo;
	class njt_40mm_gl_mine_stuck : apersmine_range_ammo
	{
		defaultMagazine = "";
		model = "\A3\weapons_f\ammo\UGL_slug";
		hit = 8;
		indirectHit = 8;
		explosionEffects = "GrenadeExplosion";
		mineTrigger = "RangeTriggerBounding";
		class EventHandlers
		{
			class njt_eh
			{
				init = "_this#0 call njt_fnc_stickToObject; _this#0 spawn njt_fnc_stickyMineEffect";
			};
		};
	};
	
	class njt_trapped_gun_mine_nato_ammo : apersmine_range_ammo
	{
		defaultMagazine = "njt_trapped_gun_mine_nato_mag";
		class eventHandlers
		{
			class njt_eh
			{
				init = "_this#0 call njt_fnc_gunTrapCreate";
				deleted = "if (local (_this#0)) then {deleteVehicle (attachedObjects (_this#0))}";
			};
		};
		njt_gunTrapClasses[] = {"rhs_weap_xm2010", "rhs_weap_m249_pip_s_para", "rhs_weap_m4_m320", "rhs_weap_mk17_std", "rhs_weap_g36kv_ag36", "rhs_weap_mk18_m320", "rhs_weap_m136", "rhs_weap_m72a7"};
	};
	class njt_trapped_gun_mine_csat_ammo : njt_trapped_gun_mine_nato_ammo
	{
		defaultMagazine = "njt_trapped_gun_mine_csat_mag";
		njt_gunTrapClasses[] = {"arifle_katiba_gl_f", "srifle_dmr_07_blk_f", "arifle_ctars_blk_f", "mmg_01_tan_f", "launch_rpg32_green_f"};
	};
	class njt_trapped_gun_mine_ru_ammo : njt_trapped_gun_mine_nato_ammo
	{
		defaultMagazine = "njt_trapped_gun_mine_ru_mag";
		njt_gunTrapClasses[] = {"rhs_weap_ak105_zenitco01_b33", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_pkp", "rhs_weap_svdp_npz", "rhs_weap_rpk74m", "rhs_weap_rpg26", "rhs_weap_rpg7"};
	};
	class njt_trapped_gun_mine_natocw_ammo : njt_trapped_gun_mine_nato_ammo
	{
		defaultMagazine = "njt_trapped_gun_mine_natocw_mag";
		njt_gunTrapClasses[] = {"gm_m16a2_blk", "rhs_weap_m249", "rhs_weap_m14", "gm_mp5n_surefire_blk", "gm_m72a3_oli", "gm_g3a3_blk", "gm_mg3_blk"};
	};
	class njt_trapped_gun_mine_rucw_ammo : njt_trapped_gun_mine_nato_ammo
	{
		defaultMagazine = "njt_trapped_gun_mine_rucw_mag";
		njt_gunTrapClasses[] = {"rhs_weap_ak74", "rhs_weap_akm_gp25", "gm_rpk74_wud", "gm_rpkn_wud", "rhs_weap_pkm", "rhs_weap_rpg7", "rhs_weap_rpg18"};
	};
	class njt_trapped_gun_mine_ww2ger_ammo : njt_trapped_gun_mine_nato_ammo
	{
		defaultMagazine = "njt_trapped_gun_mine_ww2ger_mag";
		njt_gunTrapClasses[] = {"spe_fg42_e", "spe_k98zf39", "spe_mg34", "spe_stg44", "spe_mp40", "spe_faustpatrone"};
	};
	class njt_trapped_gun_mine_ww2allied_ammo : njt_trapped_gun_mine_nato_ammo
	{
		defaultMagazine = "njt_trapped_gun_mine_ww2allied_mag";
		njt_gunTrapClasses[] = {"spe_m1a1_bazooka", "spex_no4_mk1_enfield_scoped_dunkel", "spex_m1928a1_thompson", "spe_lmg_303_mk2", "spe_m1919a6", "spe_sten_mk2_suppressed"};
	};
	
	class rhs_ammo_maaws_HE;
	class njt_84mm_delayfuze_he_100 : rhs_ammo_maaws_HE
	{
		ace_frag_skip = 0;
		ace_frag_metal = 2300;
		ace_frag_charge = 400;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = 0.6;
		ace_frag_classes[] = {"ace_frag_small", "ace_frag_small_hd"};
		timeToLive = 0.385;
	};
	class njt_84mm_delayfuze_he_125 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 0.485;
	};
	class njt_84mm_delayfuze_he_150 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 0.579;
	};
	class njt_84mm_delayfuze_he_175 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 0.681;
	};
	class njt_84mm_delayfuze_he_200 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 0.777;
	};
	class njt_84mm_delayfuze_he_225 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 0.872;
	};
	class njt_84mm_delayfuze_he_250 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 0.969;
	};
	class njt_84mm_delayfuze_he_300 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 1.168;
	};
	class njt_84mm_delayfuze_he_400 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 1.558;
	};
	class njt_84mm_delayfuze_he_500 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 1.958;
	};
	class njt_84mm_delayfuze_he_600 : njt_84mm_delayfuze_he_100
	{
		timeToLive = 2.35;
	};
	
	class r_mraaws_he_f;
	/*
	class njt_84mm_flechette : r_mraaws_he_f
	{
		// model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		ace_frag_skip = 1;
		soundSetExplosion[] = {};
		explosive = 0;
		indirectHit = 2;
		indirectHitRange = 1;
		submunitionAmmo = "njt_84mm_flechette_stage2";
//		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 800;
		submunitionConeAngle = 0.001;
		submunitionConeAngleHorizontal = 0.001;
		submunitionParentSpeedCoef = 0;
		explosionEffects = "";
//		submunitionConeType[] = {"poissondisc",9};
		submunitionConeType[] = {{0,0}};
		deleteParentWhenTriggered = 0;
		triggerOnImpact = 1;
		sideAirFriction = 0;
		triggerTime = 0.01;
		fuseDistance = 0;
		maxSpeed = 600;
		penetrationDirDistribution = 0.001;
		delete warheadName;
		
		class eventHandlers
		{
			class njt_eh
			{
				init = "(_this#0) call njt_fnc_maawsFlechetteSubmunitions";
			};
		};

	};
	
	class b_12gauge_pellets_submunition;
	class njt_84mm_flechette_stage2 : b_12gauge_pellets_submunition
	{
		submunitionAmmo = "njt_84mm_flechette_dart";
		submunitionInitSpeed = 800;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 1;
	};

	class b_127x108_ball;
	class njt_84mm_flechette_dart : b_127x108_ball
	{
		explosive = 0;
		indirectHit = 10;
		indirectHitRange = 1;
		hit = 15;
		caliber = 0.4;
	};
	*/
	
	class njt_84mm_smoke : r_mraaws_he_f
	{
		hit = 80;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.3;
		explosive = 0.1;
		ExplosionEffects = "UK3CB_WPExplosion";
		SoundSetExplosion[] = {"","",""};
		ace_frag_metal = 200;
		ace_frag_charge = 50;
		ace_frag_classes[] = { "ace_frag_small_hd", "ace_frag_tiny_hd"};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",3.16228,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",3.16228,1,1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",3.16228,1,1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",3.16228,1,1300};
		class EventHandlers
		{
			class njt_EH
			{
				init = "(_this#0) addEventHandler ['Explode', {[getPosASL (_this#0)] spawn njt_fnc_create3CBSmoke}]";
			};
		};
	};
	
	class njt_84mm_delayfuze_he2_100 : r_mraaws_he_f
	{
		ace_frag_classes[] = {"ace_frag_small", "ace_frag_small_HD"};
		ace_frag_metal = 2500;
		timeToLive = 0.281;
	};
	class njt_84mm_delayfuze_he2_125 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 0.351;
	};
	class njt_84mm_delayfuze_he2_150 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 0.431;
	};
	class njt_84mm_delayfuze_he2_175 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 0.498;
	};
	class njt_84mm_delayfuze_he2_200 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 0.571;
	};
	class njt_84mm_delayfuze_he2_225 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 0.646;
	};
	class njt_84mm_delayfuze_he2_250 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 0.718;
	};
	class njt_84mm_delayfuze_he2_300 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 0.862;
	};
	class njt_84mm_delayfuze_he2_400 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 1.157;
	};
	class njt_84mm_delayfuze_he2_500 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 1.453;
	};
	class njt_84mm_delayfuze_he2_600 : njt_84mm_delayfuze_he2_100
	{
		timeToLive = 1.752;
	};
};