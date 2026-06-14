
	class rhsusf_acc_su230_base;
	class rhsusf_acc_su230_mrds_base : rhsusf_acc_su230_base
	{
		class ItemInfo;
	};
	class rhsusf_acc_su230_mrds : rhsusf_acc_su230_mrds_base
	{
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230_mrds_ni : rhsusf_acc_su230_mrds
	{
		displayName = "SU-230/PVS MRDS [B]";
		rhs_optic_base = "bravo_rhs_su230_mrds_ni";
		class ItemInfo : ItemInfo
		{
			class OpticsModes
			{
				class Elcan_mrds
				{
					cameraDir = "";
					distanceZoomMax = 200;
					distanceZoomMin = 200;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 3;
					opticsPPEffects[] = {""};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.1;
					opticsZoomMin = 0.275;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class Elcan_x4
				{
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomMin = 0.0625;
					useModelOptics = 1;
					visionMode[] = {};
				};
				class Elcan_x1
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.6;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	class bravo_rhs_su230_mrds_c_ni : bravo_rhs_su230_mrds_ni
	{
		displayName = "SU-230/PVS MRDS Coyote [B]";
		rhs_optic_base = "bravo_rhs_su230_mrds_c_ni";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_mrds_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230_mrds_c_ca.paa";
		weaponInfoType = "rhsusf_acc_su230_mrds_c_handler";
	};
	
	class rhsusf_acc_su230_mrds_base_3d : rhsusf_acc_su230_mrds_base
	{
		class ItemInfo : ItemInfo
		{};
	};
	class rhsusf_acc_su230_mrds_3d : rhsusf_acc_su230_mrds_base_3d
	{};
	class bravo_rhs_su230_mrds_ni_3d : rhsusf_acc_su230_mrds_3d
	{
		displayName = "SU-230/PVS MRDS [B]";
		rhs_optic_base = "bravo_rhs_su230_mrds_ni";
		class ItemInfo : ItemInfo
		{
			class OpticsModes
			{
				class Elcan_mrds
				{
					cameraDir = "";
					distanceZoomMax = 200;
					distanceZoomMin = 200;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 3;
					opticsPPEffects[] = {""};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.1;
					opticsZoomMin = 0.275;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class Elcan_x4
				{
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.15;
					opticsZoomMax = 0.15;
					opticsZoomMin = 0.1;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class Elcan_x1
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.6;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	class bravo_rhs_su230_mrds_c_ni_3d : bravo_rhs_su230_mrds_ni_3d
	{
		displayName = "SU-230/PVS MRDS Coyote [B]";
		rhs_optic_base = "bravo_rhs_su230_mrds_c_ni";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_mrds_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230_mrds_c_ca.paa";
		weaponInfoType = "rhsusf_acc_su230_mrds_c_3d_handler";
	};
	
	class rhsusf_acc_su230a_mrds : rhsusf_acc_su230_mrds
	{
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230a_mrds_ni : rhsusf_acc_su230a_mrds
	{
		displayName = "SU-230A/PVS MRDS [B]";
		rhs_optic_base = "bravo_rhs_su230a_mrds_ni";
		class ItemInfo : ItemInfo
		{
			class OpticsModes
			{
				class Elcan_mrds
				{
					cameraDir = "";
					distanceZoomMax = 200;
					distanceZoomMin = 200;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 3;
					opticsPPEffects[] = {""};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.1;
					opticsZoomMin = 0.275;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class Elcan_x4
				{
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomMin = 0.0625;
					useModelOptics = 1;
					visionMode[] = {};
				};
				class Elcan_x1
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.6;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	class bravo_rhs_su230a_mrds_c_ni : bravo_rhs_su230a_mrds_ni
	{
		displayName = "SU-230A/PVS MRDS Coyote [B]";
		rhs_optic_base = "bravo_rhs_su230a_mrds_c_ni";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds_c";
		weaponInfoType = "rhsusf_acc_su230a_mrds_c_handler";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230a_mrds_c_ca.paa";
	};
	
	class rhsusf_acc_su230a_mrds_3d : rhsusf_acc_su230_mrds_3d
	{
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230a_mrds_ni_3d : rhsusf_acc_su230a_mrds_3d
	{
		displayName = "SU-230A/PVS MRDS [B]";
		rhs_optic_base = "bravo_rhs_su230a_mrds_ni";
		class ItemInfo : ItemInfo
		{
			class OpticsModes
			{
				class Elcan_mrds
				{
					cameraDir = "";
					distanceZoomMax = 200;
					distanceZoomMin = 200;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 3;
					opticsPPEffects[] = {""};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.1;
					opticsZoomMin = 0.275;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class Elcan_x4
				{
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.15;
					opticsZoomMax = 0.15;
					opticsZoomMin = 0.1;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class Elcan_x1
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.6;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	class bravo_rhs_su230a_mrds_c_ni_3d : bravo_rhs_su230a_mrds_ni_3d
	{
		displayName = "SU-230A/PVS MRDS Coyote [B]";
		rhs_optic_base = "bravo_rhs_su230a_mrds_c_ni";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds_c";
		weaponInfoType = "rhsusf_acc_su230a_mrds_c_3d_handler";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230a_mrds_c_ca.paa";
	};
	
	class rhsusf_acc_su230 : rhsusf_acc_su230_base
	{
		class ItemInfo;
	};
	class bravo_rhs_su230_ni : rhsusf_acc_su230
	{
		displayName = "SU-230/PVS [B]";
		rhs_optic_base = "bravo_rhs_su230_ni";
		class ItemInfo : ItemInfo
		{
			class OpticsModes
			{
				class Elcan_x4
				{
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomMin = 0.0625;
					useModelOptics = 1;
					visionMode[] = {};
				};
				class Elcan_x1
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.6;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	class bravo_rhs_su230_c_ni : bravo_rhs_su230_ni
	{
		displayName = "SU-230/PVS Coyote [B]";
		rhs_optic_base = "bravo_rhs_su230_c_ni";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_c";
		weaponInfoType = "rhsusf_acc_su230_c_handler";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230_c_ca.paa";
	};
	
	class rhsusf_acc_su230_base_3d : rhsusf_acc_su230_base
	{
		class ItemInfo;
	};
	class rhsusf_acc_su230_3d : rhsusf_acc_su230_base_3d
	{};
	class bravo_rhs_su230_ni_3d : rhsusf_acc_su230_3d
	{
		displayName = "SU-230/PVS [B]";
		rhs_optic_base = "bravo_rhs_su230_ni";
		class ItemInfo : ItemInfo
		{
			class OpticsModes
			{
				class Elcan_x4
				{
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.15;
					opticsZoomMax = 0.15;
					opticsZoomMin = 0.1;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class Elcan_x1
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.6;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	class bravo_rhs_su230_c_ni_3d : bravo_rhs_su230_ni_3d
	{
		displayName = "SU-230/PVS Coyote [B]";
		rhs_optic_base = "bravo_rhs_su230_c_ni";
		weaponInfoType = "rhsusf_acc_su230_c_3d_handler";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230_c_ca.paa";
	};
	
	class rhsusf_acc_su230a : rhsusf_acc_su230
	{
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230a_ni : rhsusf_acc_su230a
	{
		displayName = "SU-230A/PVS [B]";
		rhs_optic_base = "bravo_rhs_su230a_ni";
		class ItemInfo : ItemInfo
		{
			class OpticsModes
			{
				class Elcan_x4
				{
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomMin = 0.0625;
					useModelOptics = 1;
					visionMode[] = {};
				};
				class Elcan_x1
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.6;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	class bravo_rhs_su230a_c_ni : bravo_rhs_su230a_ni
	{
		displayName = "SU-230A/PVS Coyote [B]";
		rhs_optic_base = "bravo_rhs_su230a_c_ni";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230a_c_ca.paa";
		weaponInfoType = "rhsusf_acc_su230a_c_handler";
	};
	
	class rhsusf_acc_su230a_3d : rhsusf_acc_su230_3d
	{
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230a_ni_3d : rhsusf_acc_su230a_3d
	{
		displayName = "SU-230A/PVS [B]";
		rhs_optic_base = "bravo_rhs_su230a_ni";
		class ItemInfo : ItemInfo
		{
			class OpticsModes
			{
				class Elcan_x4
				{
					cameraDir = "";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.15;
					opticsZoomMax = 0.15;
					opticsZoomMin = 0.1;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class Elcan_x1
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.6;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		};
	};
	class bravo_rhs_su230a_c_ni_3d : bravo_rhs_su230a_ni_3d
	{
		displayName = "SU-230A/PVS Coyote [B]";
		weaponInfoType = "rhsusf_acc_su230a_c_3d_handler";
		rhs_optic_base = "bravo_rhs_su230a_c_ni";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230a_c_ca.paa";
	};