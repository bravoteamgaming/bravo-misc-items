class gm_wheel_base;
class cfgVehicles
{
	class gm_wheeled_base;
	class gm_wheeled_car_base : gm_wheeled_base
	{
		class sounds;
	};
	class gm_w123_base : gm_wheeled_car_base
	{
		class TextureSources;
		class sounds : sounds
		{
			class engine_01_ext;
			class engine_01_int;
			class engine_03_ext;
			class engine_03_int;
			class engine_04_ext;
			class engine_04_int;
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
	class gm_ge_civ_w123_base : gm_w123_base
	{};
	class gm_ge_civ_w123 : gm_ge_civ_w123_base
	{};
	
	class njt_w123_hammer : gm_ge_civ_w123
	{
		gm_TacticalNumbersDefaultNumber = "##";
		crewCrashProtection = 0.9;
		displayName = "W123 AMG Hammer Prototype";
		displayNameShort = "W123 Hammer";
		antiRollbarForceCoef = 10;
		antiRollbarForceLimit = 13;
		antiRollbarSpeedMax = 120;
		thrustDelay = 0.1;
		enginePower = 620;
		maxOmega = 1246;
		peakTorque = 620;
		maxSpeed = 300;
		redRPM = 11500;
		idleRPM = 800;
		terrainCoef = 4.5;
		dampersBumpCoef = 1;
		switchTime = 0.12;
		differentialType = "rear_limited";
		torqueCurve[] = {{"(0)",0},{"1/7",0.72},{"2/7",0.82},{"3/7",0.95},{"4/7",1},{"5/7",0.98},{"6/7",0.75},{1,0.6}};
		class complexGearbox : complexGearbox
		{
			GearboxRatios[] = {"R1",-7.381,"N",0,"D1",6,"D2",4.5,"D3",3.5,"D4",2.5,"D5",1.5,"D6",0.9};
		};
		class sounds : sounds
		{
			class engine_01_ext : engine_01_ext
			{
				frequency = "1 * (randomizer*0.05+0.45)+(0.5*(rpm/5000))";
				sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_03_ext",1.12202,1,280};
			};
			class engine_01_int : engine_01_int
			{
				frequency = "1 * (randomizer*0.05+0.45)+(0.5*(rpm/5000))";
				sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_03_int",0.122019,1};
			};
			class engine_03_ext : engine_03_ext
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/5000))";
				sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_06_ext",1.58489,1,400};
			};
			class engine_03_int : engine_03_int
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/5000))";
				sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_06_int",0.584893,1};
			};
			class engine_04_ext : engine_04_ext
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/5000))";
				sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_07_ext",1.58489,1,400};
			};
			class engine_04_int : engine_04_int
			{
				frequency = "(randomizer*0.05+0.15)+(0.8*(rpm/5000))";
				sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_07_int",0.584893,1};
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
				maxBrakeTorque = 1900;
				springStrength = 57020;
				springDamperRate = 9000;
			};
			class wheel_1_2 : wheel_1_2
			{
				latStiffX = 3;
				latStiffY = 33;
				longitudinalStiffnessPerUnitGravity = 6000;
				frictionVsSlipGraph[] = {{0,1},{0.06,1.8},{0.7,1}};
				maxBrakeTorque = 1900;
				springStrength = 57020;
				springDamperRate = 9000;
			};
			class wheel_2_1 : wheel_2_1
			{
				latStiffX = 3;
				latStiffY = 33;
				longitudinalStiffnessPerUnitGravity = 6000;
				frictionVsSlipGraph[] = {{0,1},{0.06,1.8},{0.7,1}};
				maxBrakeTorque = 1200;
				maxHandBrakeTorque = 35000;
				springStrength = 54000;
				springDamperRate = 8308;
			};
			class wheel_2_2 : wheel_2_2
			{
				latStiffX = 3;
				latStiffY = 33;
				longitudinalStiffnessPerUnitGravity = 6000;
				frictionVsSlipGraph[] = {{0,1},{0.06,1.8},{0.7,1}};
				maxBrakeTorque = 1200;
				maxHandBrakeTorque = 35000;
				springStrength = 54000;
				springDamperRate = 8308;
			};
		};
		
		class TextureSources : TextureSources
		{
			class njt_bravo_racing
			{
				author = "NikkoJT";
				displayName = "Bravo Team Racing";
				materials[] = {"\gm\gm_vehicles\gm_land\gm_wheeled\gm_w123\data\gm_w123_rim_01_shiny.rvmat","\gm\gm_vehicles\gm_land\gm_wheeled\gm_w123\data\gm_w123_ext_01_shiny.rvmat","\gm\gm_vehicles\gm_land\gm_wheeled\gm_w123\data\gm_w123_ext_02_shiny.rvmat"};
				factions[] = {"gm_fc_bu_civ","gm_fc_cs_civ","gm_fc_gc_civ","gm_fc_hu_civ","gm_fc_pl_civ","gm_fc_ro_civ","gm_fc_ur_civ","gm_fc_be_civ","gm_fc_ca_civ","gm_fc_dk_civ","gm_fc_fr_civ","gm_fc_ic_civ","gm_fc_it_civ","gm_fc_lu_civ","gm_fc_nl_civ","gm_fc_no_civ","gm_fc_po_civ","gm_fc_uk_civ","gm_fc_us_civ","gm_fc_gr_civ","gm_fc_tu_civ","gm_fc_ge_civ","gm_fc_sp_civ","gm_fc_au_civ","gm_fc_sz_civ","gm_fc_fi_civ","gm_fc_sw_civ"};
				textures[] = {"\njt_w123_hammer\assets\w123_bravo_ext_02_camo_co.paa","\njt_w123_hammer\assets\w123_bravo_ext_01_camo_co.paa"};
			};
			class njt_pin
			{
				author = "NikkoJT";
				displayName = "Doriane Pin";
				materials[] = {"\gm\gm_vehicles\gm_land\gm_wheeled\gm_w123\data\gm_w123_rim_01_shiny.rvmat","\gm\gm_vehicles\gm_land\gm_wheeled\gm_w123\data\gm_w123_ext_01_shiny.rvmat","\gm\gm_vehicles\gm_land\gm_wheeled\gm_w123\data\gm_w123_ext_02_shiny.rvmat"};
				factions[] = {"gm_fc_bu_civ","gm_fc_cs_civ","gm_fc_gc_civ","gm_fc_hu_civ","gm_fc_pl_civ","gm_fc_ro_civ","gm_fc_ur_civ","gm_fc_be_civ","gm_fc_ca_civ","gm_fc_dk_civ","gm_fc_fr_civ","gm_fc_ic_civ","gm_fc_it_civ","gm_fc_lu_civ","gm_fc_nl_civ","gm_fc_no_civ","gm_fc_po_civ","gm_fc_uk_civ","gm_fc_us_civ","gm_fc_gr_civ","gm_fc_tu_civ","gm_fc_ge_civ","gm_fc_sp_civ","gm_fc_au_civ","gm_fc_sz_civ","gm_fc_fi_civ","gm_fc_sw_civ"};
				textures[] = {"\njt_w123_hammer\assets\w123_bravo_ext_02_camo_co.paa","\njt_w123_hammer\assets\w123_pin_ext_01_camo_co.paa"};
			};
		};
		
	};
	
};