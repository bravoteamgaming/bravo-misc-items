
	class rhsusf_acc_su230_base;
	class rhsusf_acc_su230_mrds_base : rhsusf_acc_su230_base
	{
		class ItemInfo;
	};
	class rhsusf_acc_su230_mrds : rhsusf_acc_su230_mrds_base
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230_mrds_ni";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230_mrds_ni";
		MTR_switchItemHintText = "Irons";
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230_mrds_ni : rhsusf_acc_su230_mrds
	{
		displayName = "SU-230/PVS MRDS [B]";
		rhs_optic_base = "bravo_rhs_su230_mrds_ni";
		MRT_SwitchItemNextClass = "rhsusf_acc_su230_mrds";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230_mrds";
		MTR_switchItemHintText = "No irons";
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
		MRT_SwitchItemNextClass = "rhsusf_acc_su230_mrds_c";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230_mrds_c";
		MTR_switchItemHintText = "Irons";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_mrds_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230_mrds_c_ca.paa";
		weaponInfoType = "rhsusf_acc_su230_mrds_c_handler";
	};
	
	class rhsusf_acc_su230_mrds_c : rhsusf_acc_su230_mrds_base
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230_mrds_c_ni";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230_mrds_c_ni";
		MTR_switchItemHintText = "Irons";
	};
	
	class rhsusf_acc_su230_mrds_base_3d : rhsusf_acc_su230_mrds_base
	{
		class ItemInfo : ItemInfo
		{};
	};
	class rhsusf_acc_su230_mrds_3d : rhsusf_acc_su230_mrds_base_3d
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230_mrds_ni_3d";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230_mrds_ni_3d";
		MTR_switchItemHintText = "Irons";
	};
	class bravo_rhs_su230_mrds_ni_3d : rhsusf_acc_su230_mrds_3d
	{
		displayName = "SU-230/PVS MRDS [B]";
		rhs_optic_base = "bravo_rhs_su230_mrds_ni";
		MRT_SwitchItemNextClass = "rhsusf_acc_su230_mrds_3d";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230_mrds_3d";
		MTR_switchItemHintText = "No irons";
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
		MRT_SwitchItemNextClass = "rhsusf_acc_su230_mrds_c_3d";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230_mrds_c_3d";
		MTR_switchItemHintText = "No irons";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_mrds_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230_mrds_c_ca.paa";
		weaponInfoType = "rhsusf_acc_su230_mrds_c_3d_handler";
	};
	
	class rhsusf_acc_su230_mrds_c_3d : rhsusf_acc_su230_mrds_base_3d
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230_mrds_c_ni_3d";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230_mrds_c_ni_3d";
		MTR_switchItemHintText = "Irons";
	};
	
	class rhsusf_acc_su230a_mrds : rhsusf_acc_su230_mrds
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230a_mrds_ni";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230a_mrds_ni";
		MTR_switchItemHintText = "Irons";
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230a_mrds_ni : rhsusf_acc_su230a_mrds
	{
		displayName = "SU-230A/PVS MRDS [B]";
		rhs_optic_base = "bravo_rhs_su230a_mrds_ni";
		MRT_SwitchItemNextClass = "rhsusf_acc_su230a_mrds";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230a_mrds";
		MTR_switchItemHintText = "No rons";
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
		MRT_SwitchItemNextClass = "rhsusf_acc_su230a_mrds_c";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230a_mrds_c";
		MTR_switchItemHintText = "No irons";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds_c";
		weaponInfoType = "rhsusf_acc_su230a_mrds_c_handler";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230a_mrds_c_ca.paa";
	};
	
	class rhsusf_acc_su230a_mrds_c : rhsusf_acc_su230a_mrds
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230a_mrds_c_ni";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230a_mrds_c_ni";
		MTR_switchItemHintText = "Irons";
	};
	
	class rhsusf_acc_su230a_mrds_3d : rhsusf_acc_su230_mrds_3d
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230a_mrds_ni_3d";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230a_mrds_ni_3d";
		MTR_switchItemHintText = "Irons";
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230a_mrds_ni_3d : rhsusf_acc_su230a_mrds_3d
	{
		displayName = "SU-230A/PVS MRDS [B]";
		rhs_optic_base = "bravo_rhs_su230a_mrds_ni";
		MRT_SwitchItemNextClass = "rhsusf_acc_su230a_mrds_3d";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230a_mrds_3d";
		MTR_switchItemHintText = "No irons";
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
		MRT_SwitchItemNextClass = "rhsusf_acc_su230a_mrds_c_3d";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230a_mrds_c_3d";
		MTR_switchItemHintText = "No irons";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds_c";
		weaponInfoType = "rhsusf_acc_su230a_mrds_c_3d_handler";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230a_mrds_c_ca.paa";
	};
	
	class rhsusf_acc_su230a_mrds_c_3d : rhsusf_acc_su230a_mrds_3d
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230a_mrds_c_ni_3d";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230a_mrds_c_ni_3d";
		MTR_switchItemHintText = "Irons";
	};
	
	class rhsusf_acc_su230 : rhsusf_acc_su230_base
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230_ni";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230_ni";
		MTR_switchItemHintText = "Irons";
		class ItemInfo;
	};
	class bravo_rhs_su230_ni : rhsusf_acc_su230
	{
		displayName = "SU-230/PVS [B]";
		rhs_optic_base = "bravo_rhs_su230_ni";
		MRT_SwitchItemNextClass = "rhsusf_acc_su230";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230";
		MTR_switchItemHintText = "No irons";
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
		MRT_SwitchItemNextClass = "rhsusf_acc_su230_c";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230_c";
		MTR_switchItemHintText = "No irons";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_c";
		weaponInfoType = "rhsusf_acc_su230_c_handler";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230_c_ca.paa";
	};
	
	class rhsusf_acc_su230_c : rhsusf_acc_su230_base
	{
		
		MRT_SwitchItemNextClass = "bravo_rhs_su230_c_ni";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230_c_ni";
		MTR_switchItemHintText = "Irons";
	};
	
	class rhsusf_acc_su230_base_3d : rhsusf_acc_su230_base
	{
		class ItemInfo;
	};
	class rhsusf_acc_su230_3d : rhsusf_acc_su230_base_3d
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230_ni_3d";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230_ni_3d";
		MTR_switchItemHintText = "Irons";
		class ItemInfo;
	};
	class bravo_rhs_su230_ni_3d : rhsusf_acc_su230_3d
	{
		displayName = "SU-230/PVS [B]";
		rhs_optic_base = "bravo_rhs_su230_ni";
		MRT_SwitchItemNextClass = "rhsusf_acc_su230_3d";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230_3d";
		MTR_switchItemHintText = "No irons";
		class ItemInfo;
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
		MRT_SwitchItemNextClass = "rhsusf_acc_su230_c_3d";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230_c_3d";
		MTR_switchItemHintText = "No irons";
		weaponInfoType = "rhsusf_acc_su230_c_3d_handler";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230_c_ca.paa";
	};
	
	class rhsusf_acc_su230_c_3d : rhsusf_acc_su230_base_3d
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230_c_ni_3d";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230_c_ni_3d";
		MTR_switchItemHintText = "Irons";
	};
	
	class rhsusf_acc_su230a : rhsusf_acc_su230
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230a_ni";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230a_ni";
		MTR_switchItemHintText = "Irons";
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230a_ni : rhsusf_acc_su230a
	{
		displayName = "SU-230A/PVS [B]";
		rhs_optic_base = "bravo_rhs_su230a_ni";
		MRT_SwitchItemNextClass = "rhsusf_acc_su230a";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230a";
		MTR_switchItemHintText = "No irons";
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
		MRT_SwitchItemNextClass = "rhsusf_acc_su230a_c";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230a_c";
		MTR_switchItemHintText = "No irons";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230a_c_ca.paa";
		weaponInfoType = "rhsusf_acc_su230a_c_handler";
	};
	
	class rhsusf_acc_su230a_c : rhsusf_acc_su230a
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230a_c_ni";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230a_c_ni";
		MTR_switchItemHintText = "Irons";
	};
	
	class rhsusf_acc_su230a_3d : rhsusf_acc_su230_3d
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230a_ni_3d";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230a_ni_3d";
		MTR_switchItemHintText = "Irons";
		class ItemInfo : ItemInfo
		{};
	};
	class bravo_rhs_su230a_ni_3d : rhsusf_acc_su230a_3d
	{
		displayName = "SU-230A/PVS [B]";
		rhs_optic_base = "bravo_rhs_su230a_ni";
		MRT_SwitchItemNextClass = "rhsusf_acc_su230a_3d";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230a_3d";
		MTR_switchItemHintText = "No irons";
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
		MRT_SwitchItemNextClass = "rhsusf_acc_su230a_c_3d";
		MRT_SwitchItemPrevClass = "rhsusf_acc_su230a_c_3d";
		MTR_switchItemHintText = "No irons";
		rhs_optic_base = "bravo_rhs_su230a_c_ni";
		model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_c";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_su230a_c_ca.paa";
	};
	
	class rhsusf_acc_su230a_c_3d : rhsusf_acc_su230a_3d
	{
		MRT_SwitchItemNextClass = "bravo_rhs_su230a_c_ni_3d";
		MRT_SwitchItemPrevClass = "bravo_rhs_su230a_c_ni_3d";
		MTR_switchItemHintText = "Irons";
	};