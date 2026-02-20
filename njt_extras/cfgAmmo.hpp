class CfgAmmo
{
	/*
	class rhs_ammo_tow2a_at;
	class rhs_ammo_tow2b_at : rhs_ammo_tow2a_at
	{
		class eventHandlers;
	};
	class njt_ckem_missile : rhs_ammo_tow2b_at
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
		submunitionAmmo = "njt_ckem_penetrator";
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
	class njt_ckem_penetrator : sh_120mm_apfsds_tracer_red
	{
		hit = 650;
		caliber = 80;
	};
	*/
	class GrenadeHand;
	class njt_saxbomb_ammo : GrenadeHand
	{
		timeToLive = 9;
		explosionTime = 8;
		indirectHit = 10;
		indirectHitRange = 8;
		ace_frag_metal = 300;
		class eventHandlers
		{
			class njt_eh
			{
				init = "_this spawn njt_fnc_saxBombInit";
			};
		};
	};
	

	class njt_multiNade_ammo : GrenadeHand
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
		soundSetExplosion[] = {"njt_soundset_cashkaching"};
		submunitionConeType[] = {"random", 4};
		submunitionConeAngle = 360;
		deleteParentWhenTriggered = 0;
		submunitionParentSpeedCoef = 0.5;
		submunitionInitialOffset[] = {0.2, 0.2, 0};
		submunitionDirectionType = "SubmunitionAutoLeveling";
		triggerOnImpact = 1;
		submunitionAmmo = "njt_multinade_deploy";
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
	
	class njt_multiNade_deploy : GrenadeHand
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
			class njt_eh
			{
				init = "_this spawn njt_fnc_multiNadeDeploy";
			};
		};
	};
	
	class njt_randomNade_ammo : GrenadeHand
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
		soundSetExplosion[] = {"njt_soundset_fart3"};
		model = "\A3\Structures_F_Heli\Items\Sport\Football_01_F.p3d";
		class eventHandlers
		{
			class njt_eh
			{
				init = "_this spawn njt_fnc_randomNadeInit";
			};
		};
	};
};