class CfgAmmo
{
	/*
	class rhs_ammo_tow2a_at;
	class rhs_ammo_tow2b_at : rhs_ammo_tow2a_at
	{
		class eventHandlers;
	};
	class bravo_ckem_missile : rhs_ammo_tow2b_at
	{
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_fly_F.p3d";
		
		hit = 550;
		caliber = 45;
		indirectHit = 15;
		indirectHitRange = 1;
		explosive = 0.1;
		thrust = 4000;
		thrustTime = 0.8;
		initTime = 0.1;
		maxSpeed = 2200;
		timeToLive = 6;
		
		airFriction = 0.05;
		sideAirFriction = 0;
		maneuvrability = 4;
		trackOversteer = 1;
		trackLead = 1;
		
		typicalSpeed = 2100;
		simulationStep = 0.001;
		maxControlRange = 8000;
		submunitionAmmo = "bravo_ckem_penetrator";
		submunitionParentSpeedCoef = 1;
		submunitionConeAngle = 0.001;
		submunitionDirectionType = "submunitionmodeldirection";
		submunitionConeAngleHorizontal = 0.001;
		submunitionConeType[] = {{0,0}};
		submunitionInitialOffset[] = {0,0,-0.1};
		warheadName = "AP";
		triggerOnImpact = 1;
		class topDown
		{};
		delete rhs_guideMode;
		delete rhs_ballisticMode;
		class eventHandlers : eventHandlers
		{
			class rhs_guidance
			{};
		};
	};
	class sh_120mm_apfsds_tracer_red;
	class bravo_ckem_penetrator : sh_120mm_apfsds_tracer_red
	{
		hit = 650;
		caliber = 80;
	};
	*/
	class GrenadeHand;
	class bravo_saxbomb_ammo : GrenadeHand
	{
		timeToLive = 9;
		explosionTime = 8;
		indirectHit = 10;
		indirectHitRange = 8;
		ace_frag_metal = 300;
		class eventHandlers
		{
			class bravo_eh
			{
				init = "_this spawn bravo_fnc_saxBombInit";
			};
		};
	};
	

	class bravo_multiNade_ammo : GrenadeHand
	{
		timeToLive = 6;
		explosionTime = 2;
		indirectHit = 0;
		explosionForceCoef = 0;
		indirectHitRange = 0;
		hit = 0;
		suppressionRadiusHit = 0;
		ace_frag_skip = 1;
		explosionEffects = "";
		explosionSoundEffect = "";
		explosive = 0;
		soundSetExplosion[] = {"bravo_soundset_cashkaching"};
		submunitionConeType[] = {"random", 4};
		submunitionConeAngle = 360;
		deleteParentWhenTriggered = 0;
		submunitionParentSpeedCoef = 0.5;
		submunitionInitialOffset[] = {0.2, 0.2, 0};
		submunitionDirectionType = "SubmunitionAutoLeveling";
		triggerOnImpact = 1;
		submunitionAmmo = "bravo_multinade_deploy";
		submunitionInitSpeed = 1;
		craterEffects = "";
		class camShakeExplode
		{
			distance = 5;
			duration = 1;
			frequency = 20;
			power = 4;
		};
	};
	
	class bravo_multiNade_deploy : GrenadeHand
	{
		timeToLive = 0.01;
		explosive = 0;
		indirectHit = 0;
		explosionForceCoef = 0;
		indirectHitRange = 0;
		hit = 0;
		suppressionRadiusHit = 0;
		ace_frag_skip = 0;
		explosionEffects = "";
		explosionSoundEffect = "";
		craterEffects = "";
		class camShakeExplode
		{
			distance = 5;
			duration = 1;
			frequency = 20;
			power = 4;
		};
		class eventHandlers
		{
			class bravo_eh
			{
				init = "_this spawn bravo_fnc_multiNadeDeploy";
			};
		};
	};
	
	class bravo_randomNade_ammo : GrenadeHand
	{
		timeToLive = 8;
		explosionTime = 5.7;
		indirectHit = 0;
		indirectHitRange = 0;
		hit = 0;
		ace_frag_skip = 1;
		explosionEffects = "";
		explosionSoundEffect = "";
		explosive = 1;
		soundSetExplosion[] = {"bravo_soundset_fart3"};
		model = "\A3\Structures_F_Heli\Items\Sport\Football_01_F.p3d";
		class eventHandlers
		{
			class bravo_eh
			{
				init = "_this spawn bravo_fnc_randomNadeInit";
			};
		};
	};
	
	class gm_rocket_40mm_heat_pg7v;
	class bravo_rocket_40mm_heat_pg7v_jamsheed : gm_rocket_40mm_heat_pg7v
	{
		manualControl = 1;
		maxSpeed = 300;
		thrust = 50;
		thrustTime = 2;
		maxControlRange = 1000;
		simulation = "shotMissile";
		ace_frag_charge = 300;
		ace_frag_classes[] = {"ace_frag_tiny_hd", "ace_frag_small_hd", "ace_frag_tiny", "ace_frag_small"};
		ace_frag_gurney_c = 2600;
		ace_frag_gurney_k = 0.4;
		ace_frag_metal = 200;
		timeToLive = 8;
		trackLead = 1;
		trackOversteer = 1;
		maneuvrability = 8;
		sideAirFriction = 0.3;
		missileManualControlCone = 40;
		missileKeepLockedCone = 90;
		missileLockCone = 90;
		submunitionAmmo = "rhs_ammo_TOW2_AT_penetrator";
	};
	
	class rhsusf_40mm_HEDP;
	class bravo_ammo_40mm_hedp_dave : rhsusf_40mm_HEDP
	{
		indirectHitRange = 12;
		caliber = 6;
		indirectHit = 12;
		submunitionAmmo = "bravo_ammo_40mm_hedp_hp_penetrator";
	};
	
	class rhs_ammo_40mmHEDP_penetrator;
	class bravo_ammo_40mm_hedp_hp_penetrator : rhs_ammo_40mmHEDP_penetrator
	{
		caliber = 6;
		hit = 100;
	};
	
	class rhs_ammo_556x45_M855A1_Ball_Red;
	class bravo_ammo_556x45_he_tracer_red : rhs_ammo_556x45_M855A1_Ball_Red
	{
		explosive = 0.5;
		indirectHit = 4;
		indirectHitRange = 2.76;
		explosionEffects = "RHS_ExploSmallAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
		craterEffects = "ATMissileCrater";
	};
	class bravo_ammo_6mm_airsoft : rhs_ammo_556x45_M855A1_Ball_Red
	{
		ace_bulletlength = 6;
		ace_caliber = 6;
		ace_bulletmass = 0.3;
		ace_dragmodel = 1;
		ace_barrellengths[] = {100, 200, 300, 600};
		ace_muzzlevelocities[] = {100, 100, 100, 100};
		ace_ammotempmuzzlevelocityshifts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		ACE_ballisticCoefficients[] = {0.141};
		airFriction = -0.000771;
		cartridge = "";
		caliber = 0.01;
		hit = 0.1;
		dangerRadiusBulletClose = 5;
		dangerRadiusHit = 5;
		deflectionSlowDown = 0.5;
		typicalSpeed = 100;
		visibleFire = 1;
	};
	
	class UK3CB_BAF_762_Ball_L42A1_Tracer_Red;
	class bravo_ammo_762x51_hvap_tracer_red : UK3CB_BAF_762_Ball_L42A1_Tracer_Red
	{
		caliber = 6;
	};
};