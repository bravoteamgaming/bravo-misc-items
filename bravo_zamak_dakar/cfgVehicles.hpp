class cfgVehicles
{
	class Truck_F;
	class Truck_02_base_F : Truck_F
	{
		class complexGearbox;
	};
	class Truck_02_box_base_lxWS : Truck_02_base_F
	{
		class eventHandlers;
	};
	class C_Truck_02_racing_lxWS : Truck_02_box_base_lxWS
	{};
	class bravo_zamak_dakar : C_Truck_02_racing_lxWS
	{
		displayName = "KamAZ Dakar Flyer Special";
		displayNameShort = "KamAZ DF";
		crewCrashProtection = 0.8;
		class complexGearbox : complexGearbox
		{
			GearboxRatios[] = {"R1",-7.4,"N",0,"D1",8.8,"D2",7,"D3",5.5,"D4",4.6,"D5",3.2,"D6",1.9, "D7", 1, "D8", 0.8};
			transmissionRatios[] = {"High", 6.5};
		};
		changeGearOmegaRatios[] = {
			1.00683,0.341297,
			0.238908,0.070648,
			0.993174,0.114778,
			0.955631,0.241297,
			0.887372,0.343686,
			0.887372,0.411945,
			1.00683,0.446075,
			1.00683,0.476075,
			1.00683,0.56075,
			1.00683,0.646075
		};
		differentialType = "all_open";
		antiRollbarForceCoef = 10;
		antiRollbarForceLimit = 15;
		antiRollbarSpeedMax = 80;
		enginePower = 1200;
		peakTorque = 1300;
		maxOmega = 2216;
		idleRpm = 1200;
		redRpm = 12000;
		terrainCoef = 1.7;
		switchTime = 0.5;
		maxSpeed = 250;
		torqueCurve[] = {{"(0)",0},{"1/7",0.8},{"2/7",0.85},{"3/7",0.95},{"4/7",1},{"5/7",0.98},{"6/7",0.85},{1,0.8}};
		gm_VehicleStartupAction[] = {"gm_startEngine",0.52};
		engineMOI = 2;
		class eventHandlers : eventHandlers
		{
			class bravo_gm_engineOn
			{
				engine = "_this call gm_core_vehicles_fnc_engine;";
			};
		};
	};	
};