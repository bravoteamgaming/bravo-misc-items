class gm_wheel_base;
class cfgVehicles
{
	class gm_wheeled_base;
	class gm_wheeled_car_base : gm_wheeled_base
	{
		class sounds;
	};
	class gm_p601_base : gm_wheeled_car_base
	{
		class TextureSources;
		class sounds : sounds
		{
			class engine_01_ext;
			class engine_01_int;
			class engine_03_ext;
			class engine_03_int;
			class engine_07_ext;
			class engine_07_int;
		};
		class complexGearbox;
		class Wheels
		{
			class wheel_1_1 : gm_wheel_base
			{};
			class wheel_1_2 : wheel_1_1
			{};
			class wheel_2_1 : wheel_1_1
			{};
			class wheel_2_2 : wheel_2_1
			{};
		};
	};
	class gm_gc_civ_p601_base : gm_p601_base
	{};
	class gm_gc_civ_p601 : gm_gc_civ_p601_base
	{};
	class njt_p601_sport : gm_gc_civ_p601
	{
		crewCrashProtection = 0.9;
		displayName = "P601 RS";
		displayNameShort = "P601 RS";
		antiRollbarForceCoef = 10;
		antiRollbarForceLimit = 15;
		antiRollbarSpeedMax = 40;
		thrustDelay = 0.2;
		enginePower = 400;
		maxOmega = 816;
		peakTorque = 400;
		maxSpeed = 200;
		redRPM = 7800;
		terrainCoef = 2.8;
		dampersBumpCoef = 1;
		switchTime = 0.4;
		differentialType = "all_open";
		torqueCurve[] = {{"(0)",0},{"1/7",0.72},{"2/7",0.82},{"3/7",0.95},{"4/7",1},{"5/7",0.98},{"6/7",0.7},{1,0}};
		class sounds : sounds
		{
			class engine_01_ext : engine_01_ext
			{
				frequency = "2 * (randomizer*0.05+0.45)+(0.5*(rpm/4000))";
			};
			class engine_01_int : engine_01_int
			{
				frequency = "2 * (randomizer*0.05+0.45)+(0.5*(rpm/4000))";
			};
			class engine_03_ext : engine_03_ext
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/4000))";
			};
			class engine_03_int : engine_03_int
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/4000))";
			};
			class engine_07_ext : engine_07_ext
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/4000))";
			};
			class engine_07_int : engine_07_int
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/4000))";
			};
		};
		class complexGearbox : complexGearbox
		{
			GearboxRatios[] = {"R1",-7.381,"N",0,"D1",5.909,"D2",4.277,"D3",3.458,"D4",2.086,"D5",1.086};
		};
		class Wheels : Wheels
		{
			class wheel_1_1 : wheel_1_1
			{
				maxBrakeTorque = 800;
				springStrength = 15000;
			};
			class wheel_1_2 : wheel_1_2
			{
				maxBrakeTorque = 800;
				springStrength = 15000;
			};
			class wheel_2_1 : wheel_2_1
			{
				maxHandBrakeTorque = 35000;
				springStrength = 15000;
			};
			class wheel_2_2 : wheel_2_2
			{
				maxHandBrakeTorque = 35000;
				springStrength = 15000;
			};
		};
	};
	
	class njt_p601_wrx : njt_p601_sport
	{
		gm_TacticalNumbersDefaultNumber = "##";
		crewCrashProtection = 0.2;
		displayName = "P601 WRX";
		displayNameShort = "P601 WRX";
		antiRollbarForceCoef = 14;
		antiRollbarForceLimit = 19;
		antiRollbarSpeedMax = 150;
		thrustDelay = 0.1;
		enginePower = 600;
		maxOmega = 1216;
		peakTorque = 600;
		maxSpeed = 300;
		redRPM = 11500;
		terrainCoef = 2.3;
		dampersBumpCoef = 1;
		switchTime = 0.1;
		differentialType = "all_open";
		torqueCurve[] = {{"(0)",0},{"1/7",0.72},{"2/7",0.82},{"3/7",0.95},{"4/7",1},{"5/7",0.98},{"6/7",0.75},{1,0.6}};
		class complexGearbox : complexGearbox
		{
			GearboxRatios[] = {"R1",-7.381,"N",0,"D1",6,"D2",4.5,"D3",3.5,"D4",2.5,"D5",1.5,"D6",0.9,"D7",0.7};
		};
		class sounds : sounds
		{
			class engine_01_ext : engine_01_ext
			{
				frequency = "1 * (randomizer*0.05+0.45)+(0.5*(rpm/5000))";
			};
			class engine_01_int : engine_01_int
			{
				frequency = "1 * (randomizer*0.05+0.45)+(0.5*(rpm/5000))";
			};
			class engine_03_ext : engine_03_ext
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/5000))";
			};
			class engine_03_int : engine_03_int
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/5000))";
			};
			class engine_07_ext : engine_07_ext
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/5000))";
				sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_05_ext",1.58489,1,400};
			};
			class engine_07_int : engine_07_int
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/5000))";
				sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_05_int",0.584893,1};
			};
		};
		class Wheels : Wheels
		{
			class wheel_1_1 : wheel_1_1
			{
				latStiffX = 3;
				latStiffY = 33;
				longitudinalStiffnessPerUnitGravity = 6000;
				frictionVsSlipGraph[] = {{0,1},{0.06,1.8},{0.7,1}};
				maxBrakeTorque = 1200;
				springStrength = 24000;
				springDamperRate = 3200;
			};
			class wheel_1_2 : wheel_1_2
			{
				latStiffX = 3;
				latStiffY = 33;
				longitudinalStiffnessPerUnitGravity = 6000;
				frictionVsSlipGraph[] = {{0,1},{0.06,1.8},{0.7,1}};
				maxBrakeTorque = 1200;
				springStrength = 24000;
				springDamperRate = 3200;
			};
			class wheel_2_1 : wheel_2_1
			{
				latStiffX = 3;
				latStiffY = 33;
				longitudinalStiffnessPerUnitGravity = 6000;
				frictionVsSlipGraph[] = {{0,1},{0.06,1.8},{0.7,1}};
				maxBrakeTorque = 900;
				maxHandBrakeTorque = 35000;
				springStrength = 25000;
				springDamperRate = 3300;
			};
			class wheel_2_2 : wheel_2_2
			{
				latStiffX = 3;
				latStiffY = 33;
				longitudinalStiffnessPerUnitGravity = 6000;
				frictionVsSlipGraph[] = {{0,1},{0.06,1.8},{0.7,1}};
				maxBrakeTorque = 900;
				maxHandBrakeTorque = 35000;
				springStrength = 25000;
				springDamperRate = 3300;
			};
		};
		class TextureSources : TextureSources
		{
			class njt_bravo_racing
			{
				author = "NikkoJT";
				displayName = "Bravo Team Racing";
				factions[] = {"gm_fc_bu_civ","gm_fc_cs_civ","gm_fc_gc_civ","gm_fc_hu_civ","gm_fc_pl_civ","gm_fc_ro_civ","gm_fc_ur_civ","gm_fc_be_civ","gm_fc_ca_civ","gm_fc_dk_civ","gm_fc_fr_civ","gm_fc_ic_civ","gm_fc_it_civ","gm_fc_lu_civ","gm_fc_nl_civ","gm_fc_no_civ","gm_fc_po_civ","gm_fc_uk_civ","gm_fc_us_civ","gm_fc_gr_civ","gm_fc_tu_civ","gm_fc_ge_civ","gm_fc_sp_civ","gm_fc_au_civ","gm_fc_sz_civ","gm_fc_fi_civ","gm_fc_sw_civ"};
				textures[] = {"\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_wheel_01_co.paa","\njt_trabi_sport\assets\p601_bravo_ext_01_co.paa","\njt_trabi_sport\assets\p601_bravo_ext_01_co.paa","\njt_trabi_sport\assets\p601_bravo_ext_02_co.paa","\njt_trabi_sport\assets\p601_bravo_ext_02_co.paa"};
			};
		};
	};
	
};