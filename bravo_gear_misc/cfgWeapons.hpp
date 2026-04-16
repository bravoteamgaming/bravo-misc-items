class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail
{
	class compatibleItems
	{
		bravo_rhs_su230a_mrds_ni_3d = 1;
		bravo_rhs_su230a_mrds_ni = 1;
		bravo_rhs_su230_mrds_ni_3d = 1;
		bravo_rhs_su230_mrds_ni = 1;
		bravo_rhs_su230a_mrds_c_ni_3d = 1;
		bravo_rhs_su230a_mrds_c_ni = 1;
		bravo_rhs_su230_mrds_c_ni_3d = 1;
		bravo_rhs_su230_mrds_c_ni = 1;
		bravo_rhs_su230a_ni_3d = 1;
		bravo_rhs_su230a_ni = 1;
		bravo_rhs_su230_ni_3d = 1;
		bravo_rhs_su230_ni = 1;
		bravo_rhs_su230a_c_ni_3d = 1;
		bravo_rhs_su230a_c_ni = 1;
		bravo_rhs_su230_c_ni_3d = 1;
		bravo_rhs_su230_c_ni = 1;
	};
};

class cfgWeapons
{
	class pistol;
	class pistol_base_f : pistol
	{
		class weaponSlotsInfo;
	};
	class hgun_Glock19_RF : pistol_base_f
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{
			mass = 13.63;
		};
	};
	
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
	
	class rhsusf_opscore_fg_pelt;
	class bravo_fast_fg_headset_medic : rhsusf_opscore_fg_pelt
	{
		displayName = "FAST Ballistic (Foliage Green/Headset/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\opscore_fg_medic_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","","",""};
	};
	class bravo_fast_fg_headset_stupid : rhsusf_opscore_fg_pelt
	{
		displayName = "FAST Ballistic (Foliage Green/Headset/Stupid)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\opscore_fg_stupid_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","","",""};
	};
	class bravo_fast_fg_headset_stickers : rhsusf_opscore_fg_pelt
	{
		displayName = "FAST Ballistic (Foliage Green/Headset/Stickers)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\opscore_fg_stickers_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","","",""};
	};
	
	class rhsusf_opscore_coy_cover;
	class bravo_fast_coy_cover_headset : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (Coyote Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_cb_co.paa",""};
	};
	class bravo_fast_mtr_cover_headset : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (Multitarn Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_mtr_co.paa",""};
	};
	class bravo_fast_mm14_cover_headset : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (MM-14 Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_mm14_co.paa",""};
	};
	class bravo_fast_mtp_cover_headset : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (MTP Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_mtp_co.paa",""};
	};
	class bravo_fast_mtp_cover_headset_red : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (MTP Cover/Headset/Red Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_mtp_red_co.paa",""};
	};
	class bravo_fast_mtp_cover_headset_blue : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (MTP Cover/Headset/Blue Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_mtp_blue_co.paa",""};
	};
	class bravo_fast_tan_cover_headset : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (Tan Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_tan_co.paa",""};
	};
	class bravo_fast_tan_cover_headset_blue : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (Tan Cover/Headset/Blue Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_tan_blue_co.paa",""};
	};
	class bravo_fast_tan_cover_headset_red : rhsusf_opscore_coy_cover
	{
		displayName = "FAST Ballistic (Tan Cover/Headset/Red Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_tan_red_co.paa",""};
	};
	
	class rhsusf_opscore_ut_pelt;
	class bravo_fast_ut_headset_medic : rhsusf_opscore_ut_pelt
	{
		displayName = "FAST Ballistic (Urban Tan/Headset/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\opscore_medic_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","","\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",""};
	};
	class bravo_fast_ut_headset_barvo : rhsusf_opscore_ut_pelt
	{
		displayName = "FAST Ballistic (Urban Tan/Headset/Barvo)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\opscore_barvo_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","","\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",""};
	};
	class bravo_fast_ut_headset_stickers : rhsusf_opscore_ut_pelt
	{
		displayName = "FAST Ballistic (Urban Tan/Headset/Stickers)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\opscore_stickers_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","","\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",""};
	};
	
	class rhsusf_opscore_rg_cover;
	class bravo_fast_rg_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Ranger Green Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_rg_co.paa",""};
	};
	class bravo_fast_flk_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Flecktarn Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_flk_co.paa",""};
	};
	class bravo_fast_bme_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (BME Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_bme_co.paa",""};
	};
	class bravo_fast_rg_cover_headset_red : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Ranger Green Cover/Headset/Red Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_rg_red_co.paa",""};
	};
	class bravo_fast_rg_cover_headset_blue : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Ranger Green Cover/Headset/Blue Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_rg_blue_co.paa",""};
	};
	class bravo_fast_org_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Orange Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_org_co.paa",""};
	};
	class bravo_fast_win_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Winter Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_win_co.paa",""};
	};
	class bravo_fast_un_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Blue Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_un_co.paa",""};
	};
	class bravo_fast_m90_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (M/90 Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_m90_co.paa",""};
	};
	class bravo_fast_jit_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Jietai Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_jit_co.paa",""};
	};
	class bravo_fast_khk_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (Khaki Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_khk_co.paa",""};
	};
	class bravo_fast_amc_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (AMC Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_amc_co.paa",""};
	};
	class bravo_fast_amc_cover : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (AMC Cover)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","","","","\bravo_gear_misc\assets\fs_cover_amc_co.paa",""};
	};
	class bravo_fast_ldf_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (LDF Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_ldf_co.paa",""};
	};
	class bravo_fast_catw_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (CADPAT-TW Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_catw_co.paa",""};
	};
	class bravo_fast_camt_cover_headset : rhsusf_opscore_rg_cover
	{
		displayName = "FAST Ballistic (CADPAT-MT Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_camt_co.paa",""};
	};
	
	class rhsusf_opscore_bk_pelt;
	class bravo_fast_bk_headset_medic : rhsusf_opscore_bk_pelt
	{
		displayName = "FAST Ballistic (Black/Headset/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\opscore_blk_medic_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"};
	};
	
	class rhsusf_opscore_mc_cover_pelt;
	class bravo_fast_mc_cover_headset_red : rhsusf_opscore_mc_cover_pelt
	{
		displayName = "FAST Ballistic (Multicam Cover/Headset/Red Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","","\bravo_gear_misc\assets\fs_cover_red_co.paa",""};
	};
	class bravo_fast_mc_cover_headset_blue : rhsusf_opscore_mc_cover_pelt
	{
		displayName = "FAST Ballistic (Multicam Cover/Headset/Blue Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","","\bravo_gear_misc\assets\fs_cover_blue_co.paa",""};
	};
	class bravo_fast_dcu_cover_headset : rhsusf_opscore_mc_cover_pelt
	{
		displayName = "FAST Ballistic (DCU Cover/Headset)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","\bravo_gear_misc\assets\fs_cover_dcu_co.paa",""};
	};
	
	class rhs_6b27m_green;
	class bravo_6b27m_green_medic : rhs_6b27m_green
	{
		displayName = "6B27M (Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b27_medic_co.paa"};
	};
	class bravo_6b27m_green_red : rhs_6b27m_green
	{
		displayName = "6B27M (Red Team)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b27_red_co.paa"};
	};
	class bravo_6b27m_green_blue : rhs_6b27m_green
	{
		displayName = "6B27M (Blue Team)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b27_blue_co.paa"};
	};
	class bravo_6b27m_green_ua : rhs_6b27m_green
	{
		displayName = "6B27M (Ukraine)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b27_ua_co.paa"};
	};
	class bravo_6b27m_green_d : rhs_6b27m_green
	{
		displayName = "6B27M (Delta)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b27_d_co.paa"};
	};
	class bravo_6b27m_green_owo : rhs_6b27m_green
	{
		displayName = "6B27M (OwO)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b27_owo_co.paa"};
	};
	class bravo_6b27m_green_uwu : rhs_6b27m_green
	{
		displayName = "6B27M (UwU)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b27_uwu_co.paa"};
	};
	
	class rhs_6b27m_green_ess;
	class bravo_6b27m_green_ess_medic : rhs_6b27m_green_ess
	{
		displayName = "6B27M (ESS/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b27_medic_co.paa"};
	};
	
	class rhs_6b26_green;
	class bravo_6b26_green_medic : rhs_6b26_green
	{
		displayName = "6B26 (Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b26_medic_co.paa"};
	};
	
	class rhs_6b26_ess_green;
	class bravo_6b26_green_ess_medic : rhs_6b26_ess_green
	{
		displayName = "6B26 (ESS/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6b26_medic_co.paa"};
	};
	
	class rhsusf_ach_bare_headset;
	class bravo_ach_bare_headset_medic : rhsusf_ach_bare_headset
	{
		displayName = "ACH (Headset/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_green_medic_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	
	class rhsusf_ach_bare_headset_ess;
	class bravo_ach_bare_headset_ess_medic : rhsusf_ach_bare_headset_ess
	{
		displayName = "ACH (Headset/ESS/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_green_medic_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class bravo_ach_bare_headset_ess_red : rhsusf_ach_bare_headset_ess
	{
		displayName = "ACH (Headset/ESS/Red Team)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_green_red_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class bravo_ach_bare_headset_ess_blue : rhsusf_ach_bare_headset_ess
	{
		displayName = "ACH (Headset/ESS/Blue Team)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_green_blue_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	
	class rhsusf_ach_bare_tan;
	class bravo_ach_bare_tan_cool : rhsusf_ach_bare_tan
	{
		displayName = "ACH (Tan/Cool)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_tan_cool_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
	};
	
	class rhsusf_ach_bare_tan_headset;
	class bravo_ach_bare_tan_headset_medic : rhsusf_ach_bare_tan_headset
	{
		displayName = "ACH (Tan/Headset/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_tan_medic_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
	};
	
	class rhsusf_ach_bare_tan_headset_ess;
	class bravo_ach_bare_tan_headset_ess_medic : rhsusf_ach_bare_tan_headset_ess
	{
		displayName = "ACH (Tan/Headset/ESS/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_tan_medic_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
	};
	class bravo_ach_bare_tan_headset_ess_red : rhsusf_ach_bare_tan_headset_ess
	{
		displayName = "ACH (Tan/Headset/ESS/Red Team)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_tan_red_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
	};
	class bravo_ach_bare_tan_headset_ess_blue : rhsusf_ach_bare_tan_headset_ess
	{
		displayName = "ACH (Tan/Headset/ESS/Blue Team)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_helmet_mich_tan_blue_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
	};
	
	class rhsusf_mich_bare;
	class bravo_mich_bare_noflag : rhsusf_mich_bare
	{
		displayName = "MICH 2000 (No Flag)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class bravo_mich_bare_black_noflag : rhsusf_mich_bare
	{
		displayName = "MICH 2000 (Black/No Flag)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bare_mich_black_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	
	class rhsusf_mich_bare_headset;
	class bravo_mich_bare_headset_noflag : rhsusf_mich_bare_headset
	{
		displayName = "MICH 2000 (Headset/No Flag)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class bravo_mich_bare_headset_red : rhsusf_mich_bare_headset
	{
		displayName = "MICH 2000 (Headset/Red Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_red_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class bravo_mich_bare_headset_blue : rhsusf_mich_bare_headset
	{
		displayName = "MICH 2000 (Headset/Blue Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_blue_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class bravo_mich_bare_black_headset_noflag : rhsusf_mich_bare_headset
	{
		displayName = "MICH 2000 (Black/Headset/No Flag)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bare_mich_black_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	
	class rhsusf_mich_bare_alt;
	class bravo_mich_bare_alt_noflag : rhsusf_mich_bare_alt
	{
		displayName = "MICH 2000 (Alt/No Flag)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class bravo_mich_bare_alt_medic : rhsusf_mich_bare_alt
	{
		displayName = "MICH 2000 (Alt/Medic)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_medic_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class bravo_mich_bare_black_alt_medic : rhsusf_mich_bare_alt
	{
		displayName = "MICH 2000 (Black/Alt/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bare_mich_black_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_medic_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	class bravo_mich_bare_black_alt_noflag : rhsusf_mich_bare_alt
	{
		displayName = "MICH 2000 (Black/Alt/No Flag)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bare_mich_black_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_od_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	
	class rhsusf_mich_bare_tan;
	class bravo_mich_bare_tan_noflag : rhsusf_mich_bare_tan
	{
		displayName = "MICH 2000 (Tan/No Flag)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_tan_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
	};
	
	class rhsusf_mich_bare_tan_headset;
	class bravo_mich_bare_tan_headset_noflag : rhsusf_mich_bare_tan_headset
	{
		displayName = "MICH 2000 (Tan/Headset/No Flag)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_tan_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class bravo_mich_bare_tan_headset_red : rhsusf_mich_bare_tan_headset
	{
		displayName = "MICH 2000 (Tan/Headset/Red Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_tan_red_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class bravo_mich_bare_tan_headset_blue : rhsusf_mich_bare_tan_headset
	{
		displayName = "MICH 2000 (Tan/Headset/Blue Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_tan_blue_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	
	class rhsusf_mich_bare_alt_tan;
	class bravo_mich_bare_alt_tan_noflag : rhsusf_mich_bare_alt_tan
	{
		displayName = "MICH 2000 (Tan/Alt/No Flag)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_tan_noflag_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
	};
	class bravo_mich_bare_alt_tan_medic : rhsusf_mich_bare_alt_tan
	{
		displayName = "MICH 2000 (Tan/Alt/Medic)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa","\bravo_gear_misc\assets\mich_acc_tan_medic_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
	};
	
	class rhsusf_mich_bare_norotos_arc_alt_tan_headset;
	class bravo_mich_bare_norotos_arc_alt_tan_headset_red : rhsusf_mich_bare_norotos_arc_alt_tan_headset
	{
		displayName = "MICH 2000 (Tan/Norotos/ARC/Headset/Red Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_norotos_arc_co.paa","\bravo_gear_misc\assets\mich_acc_tan_red_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class bravo_mich_bare_norotos_arc_alt_tan_headset_blue : rhsusf_mich_bare_norotos_arc_alt_tan_headset
	{
		displayName = "MICH 2000 (Tan/Norotos/ARC/Headset/Blue Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_norotos_arc_co.paa","\bravo_gear_misc\assets\mich_acc_tan_blue_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	
	class rhsusf_mich_bare_norotos_arc_headset;
	class bravo_mich_bare_norotos_arc_headset_red : rhsusf_mich_bare_norotos_arc_headset
	{
		displayName = "MICH 2000 (Norotos/ARC/Headset/Red Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa","\bravo_gear_misc\assets\mich_acc_od_red_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	class bravo_mich_bare_norotos_arc_headset_blue : rhsusf_mich_bare_norotos_arc_headset
	{
		displayName = "MICH 2000 (Norotos/ARC/Headset/Blue Team)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa","\bravo_gear_misc\assets\mich_acc_od_blue_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"};
	};
	
	class rhsusf_mich_bare_norotos_arc;
	class bravo_mich_bare_norotos_arc_black : rhsusf_mich_bare_norotos_arc_headset
	{
		displayName = "MICH 2000 (Black/Norotos/ARC)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bare_mich_black_norotos_arc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	
	class rhsusf_mich_bare_norotos_arc_alt;
	class bravo_mich_bare_norotos_arc_alt_black : rhsusf_mich_bare_norotos_arc_alt
	{
		displayName = "MICH 2000 (Black/Norotos/ARC/Alt)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bare_mich_black_norotos_arc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	};
	
	class rhssaf_helmet_m97_olive_nocamo;
	class bravo_m97_olive_medic : rhssaf_helmet_m97_olive_nocamo
	{
		displayName = "M97 (Olive/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhssaf_m97_nocamo_medic_co.paa"};
	};
	class bravo_m97_olive_b2d : rhssaf_helmet_m97_olive_nocamo
	{
		displayName = "M97 (Olive/B2D)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhssaf_m97_nocamo_b2d_co.paa"};
	};
	class bravo_m97_olive_kilroy : rhssaf_helmet_m97_olive_nocamo
	{
		displayName = "M97 (Olive/Kilroy)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhssaf_m97_nocamo_kilroy_co.paa"};
	};
	
	class rhssaf_helmet_m97_black_nocamo_black_ess;
	class bravo_m97_black_ess_starbuck : rhssaf_helmet_m97_black_nocamo_black_ess
	{
		displayName = "M97 (Black/Black ESS/Starbuck)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhssaf_m97_nocamo_black_starbuck_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	
	class rhssaf_helmet_m97_black_nocamo;
	class bravo_m97_black_medic : rhssaf_helmet_m97_black_nocamo
	{
		displayName = "M97 (Black/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhssaf_m97_nocamo_black_medic_co.paa"};
	};
	
	class pasgt_tan;
	class bravo_pasgt_tan_medic : pasgt_tan
	{
		displayName = "PASGT Tan (Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\Pasgt_tan_medic_co.paa"};
	};
	class bravo_pasgt_tan_ua : pasgt_tan
	{
		displayName = "PASGT Tan (Ukraine)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\Pasgt_tan_ua_co.paa"};
	};
	class bravo_pasgt_tan_loss : pasgt_tan
	{
		displayName = "PASGT Tan (Defeatist)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\Pasgt_tan_loss_co.paa"};
	};
	
	class H_HelmetHBK_ear_F;
	class bravo_helmetHBK_ear_olive : H_HelmetHBK_ear_F
	{
		displayName = "Advanced Modular Helmet (Olive/Ear Protectors)";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\headgear\data\h_helmethbk_01_olive_co.paa"};
	};
	class bravo_helmetHBK_ear_winter : H_HelmetHBK_ear_F
	{
		displayName = "Advanced Modular Helmet (Winter/Ear Protectors)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_winter_co.paa"};
	};
	class bravo_helmetHBK_ear_tan : H_HelmetHBK_ear_F
	{
		displayName = "Advanced Modular Helmet (Tan/Ear Protectors)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_tan_co.paa"};
	};
	class bravo_helmetHBK_ear_multicam : H_HelmetHBK_ear_F
	{
		displayName = "Advanced Modular Helmet (Multicam/Ear Protectors)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_multicam_co.paa"};
	};
	class bravo_helmetHBK_ear_blue : H_HelmetHBK_ear_F
	{
		displayName = "Advanced Modular Helmet (Blue/Ear Protectors)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_un_co.paa"};
	};

	class H_HelmetHBK_chops_F;
	class bravo_helmetHBK_chops_olive : H_HelmetHBK_chops_F
	{
		displayName = "Advanced Modular Helmet (Olive/Chops)";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\headgear\data\h_helmethbk_01_olive_co.paa"};
	};
	class bravo_helmetHBK_chops_winter : H_HelmetHBK_chops_F
	{
		displayName = "Advanced Modular Helmet (Winter/Chops)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_winter_co.paa"};
	};
	class bravo_helmetHBK_chops_tan : H_HelmetHBK_chops_F
	{
		displayName = "Advanced Modular Helmet (Tan/Chops)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_tan_co.paa"};
	};
	class bravo_helmetHBK_chops_multicam : H_HelmetHBK_chops_F
	{
		displayName = "Advanced Modular Helmet (Multicam/Chops)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_multicam_co.paa"};
	};
	class bravo_helmetHBK_chops_blue : H_HelmetHBK_chops_F
	{
		displayName = "Advanced Modular Helmet (Blue/Chops)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_un_co.paa"};
	};
	
	class H_HelmetHBK_headset_F;
	class bravo_helmetHBK_headset_olive : H_HelmetHBK_headset_F
	{
		displayName = "Advanced Modular Helmet (Olive/Headset)";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\headgear\data\h_helmethbk_01_olive_co.paa"};
	};
	class bravo_helmetHBK_headset_winter : H_HelmetHBK_headset_F
	{
		displayName = "Advanced Modular Helmet (Winter/Headset)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_winter_co.paa"};
	};
	class bravo_helmetHBK_headset_tan : H_HelmetHBK_headset_F
	{
		displayName = "Advanced Modular Helmet (Tan/Headset)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_tan_co.paa"};
	};
	class bravo_helmetHBK_headset_multicam : H_HelmetHBK_headset_F
	{
		displayName = "Advanced Modular Helmet (Multicam/Headset)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_multicam_co.paa"};
	};
	class bravo_helmetHBK_headset_blue : H_HelmetHBK_headset_F
	{
		displayName = "Advanced Modular Helmet (Blue/Headset)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_un_co.paa"};
	};
	
	class H_HelmetHBK_F;
	class bravo_helmetHBK_winter : H_HelmetHBK_F
	{
		displayName = "Advanced Modular Helmet (Winter)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_winter_co.paa"};
	};
	class bravo_helmetHBK_tan : H_HelmetHBK_F
	{
		displayName = "Advanced Modular Helmet (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_tan_co.paa"};
	};
	class bravo_helmetHBK_multicam : H_HelmetHBK_F
	{
		displayName = "Advanced Modular Helmet (Multicam)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_multicam_co.paa"};
	};
	class bravo_helmetHBK_blue : H_HelmetHBK_F
	{
		displayName = "Advanced Modular Helmet (Blue)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\h_helmethbk_01_un_co.paa"};
	};
	
	class rhsusf_lwh_helmet_marpatd;
	class bravo_lwh_marpatd_fo : rhsusf_lwh_helmet_marpatd
	{
		displayName = "LWH MARPAT-D (Advisory)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\lwh_d_fo_co.paa"};
	};
	
	class rhsusf_lwh_helmet_marpatd_headset;
	class bravo_lwh_marpatd_headset_ess_medic : rhsusf_lwh_helmet_marpatd_headset
	{
		displayName = "LWH MARPAT-D (Headset/ESS/Medic)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_d_co.paa","\bravo_gear_misc\assets\lwh_acc_d_medic_co.paa"};
	};
	
	class rhsusf_lwh_helmet_marpatwd_headset;
	class bravo_lwh_marpatwd_headset_ess_medic : rhsusf_lwh_helmet_marpatwd_headset
	{
		displayName = "LWH MARPAT-WD (Headset/Tan ESS/Medic)";
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa","\bravo_gear_misc\assets\lwh_acc_d_medic_co.paa"};
	};
	
	class rhs_6b7_1m;
	class bravo_6b7_1m_red : rhs_6b7_1m
	{
		displayName = "6B7-1M (Red Team)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_6b7-1m_red_co.paa"};
	};
	class bravo_6b7_1m_blue : rhs_6b7_1m
	{
		displayName = "6B7-1M (Blue Team)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_6b7-1m_blue_co.paa"};
	};
	class bravo_6b7_1m_medic : rhs_6b7_1m
	{
		displayName = "6B7-1M (Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_6b7-1m_medic_co.paa"};
	}
	
	class rhs_6b7_1m_ess;
	class bravo_6b7_1m_ess_medic : rhs_6b7_1m_ess
	{
		displayName = "6B7-1M (ESS/Medic)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\rhs_6b7-1m_medic_co.paa"};
	};
	
	class H_Cap_marshal;
	class bravo_cap_headphones_bravo : H_Cap_marshal
	{
		displayName = "Rangemaster Cap (Bravo)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\capb_headphones_bravo_co.paa"};
	};
	
	class rhs_6b7_1m_olive;
	class bravo_6b7_1m_winter : rhs_6b7_1m_olive
	{
		displayName = "6B7-1M (Winter)";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","\bravo_gear_misc\assets\rhs_6b7-1m_winter_co.paa"};
	};
	class rhs_6b7_1m_bala2_olive;
	class bravo_6b7_1m_bala2_winter : rhs_6b7_1m_bala2_olive
	{
		displayName = "6B7-1M (Winter/Balaclava)";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","\bravo_gear_misc\assets\rhs_6b7-1m_winter_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"};
	};
	
	class h_helmetspecb_blk;
	class bravo_helmetspecb_multicam : h_helmetspecb_blk
	{
		displayName = "Enhanced Combat Helmet (Multicam)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\equip1_multicamhelmet_co.paa"};
	};
	class bravo_helmetspecb_green : h_helmetspecb_blk
	{
		displayName = "Enhanced Combat Helmet (Green)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\equip1_greenhelmet_co.paa"};
	};
	
	class h_helmetb_black;
	class bravo_helmetb_multicam : h_helmetb_black
	{
		displayName = "Combat Helmet (Multicam)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\equip1_multicamhelmet_co.paa"};
	};
	class bravo_helmetb_green : h_helmetb_black
	{
		displayName = "Combat Helmet (Green)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\equip1_greenhelmet_co.paa"};
	};
	
	class v_platecarrierl_ctrg;
	class v_platecarrierl_ctrg_noflag_lxws : v_platecarrierl_ctrg
	{
		scope = 2;
		scopeCurator = 2;
	};
	class v_platecarrierh_ctrg;
	class v_platecarrierh_ctrg_noflag_lxws : v_platecarrierh_ctrg
	{
		scope = 2;
		scopeCurator = 2;
	};
	class v_platecarrier_ctrg_lxws;
	class v_platecarrier_ctrg_noflag_lxws : v_platecarrier_ctrg_lxws
	{
		scope = 2;
		scopeCurator = 2;
	};
	class vest_camo_base;
	class v_platecarrier1_blk : vest_camo_base
	{
		class itemInfo;
	};
	class bravo_carrier_nobelt_rf_blk : v_platecarrier1_blk
	{
		displayName = "Carrier Lite Vest (Black)";
		model = "lxrf\characters_rf\vests\equip_b_vest02_rf.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa",""};
		class itemInfo : itemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "lxrf\characters_rf\vests\equip_b_vest02_rf.p3d";
		};
	};
	class bravo_carrier_nobelt_rf_rgr : bravo_carrier_nobelt_rf_blk
	{
		displayName = "Carrier Lite Vest (Green)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_rgr_noflag_F_co.paa",""};
	};
	class bravo_carrier_nobelt_rf_brn : bravo_carrier_nobelt_rf_blk
	{
		displayName = "Carrier Lite Vest (Brown)";
		hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment\vest\data\plate_carrier\plate_carrier_vest_brn_co.paa",""};
	};
	class bravo_carrier_nobelt_rf_mtpdes : bravo_carrier_nobelt_rf_blk
	{
		displayName = "Carrier Lite Vest (Desert MTP)";
		hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\vests\data\vests_desert_CO.paa", ""};
	};
	class bravo_carrier_nobelt_rf_win : bravo_carrier_nobelt_rf_blk
	{
		displayName = "Carrier Lite Vest (Winter)";
		hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment\vest\data\plate_carrier\plate_carrier_vest_win_co.paa",""};
	};
	class bravo_carrier_nobelt_rf_mtpwdl : bravo_carrier_nobelt_rf_blk
	{
		displayName = "Carrier Lite Vest (Woodland MTP)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Vests\Data\vests_wdl_co.paa",""};
	};
	class bravo_carrier_nobelt_rf_khk : bravo_carrier_nobelt_rf_blk
	{
		displayName = "Carrier Lite Vest (Khaki)";
		hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment\vest\data\plate_carrier\plate_carrier_vest_khk_co.paa",""};
	};
	class bravo_carrier_nobelt_rf_des : bravo_carrier_nobelt_rf_blk
	{
		displayName = "Carrier Lite Vest (Desert)";
		hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment\vest\data\plate_carrier\plate_carrier_vest_des_co.paa",""};
	};
	class bravo_carrier_nobelt_rf_mtptrp : bravo_carrier_nobelt_rf_blk
	{
		displayName = "Carrier Lite Vest (Tropic MTP)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_tna_F_co.paa",""};
	};
	
	class bravo_carrier_nobelt_ws_blk : V_PlateCarrier_CTRG_lxWS
	{
		displayName = "CTRG Plate Carrier Rig (Black)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa",""};
	};
	class bravo_carrier_nobelt_ws_rgr : bravo_carrier_nobelt_ws_blk
	{
		displayName = "CTRG Plate Carrier Rig (Green)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_rgr_noflag_F_co.paa",""};
	};
	class bravo_carrier_nobelt_ws_brn : bravo_carrier_nobelt_ws_blk
	{
		displayName = "CTRG Plate Carrier Rig (Brown)";
		hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment\vest\data\plate_carrier\plate_carrier_vest_brn_co.paa",""};
	};
	class bravo_carrier_nobelt_ws_win : bravo_carrier_nobelt_ws_blk
	{
		displayName = "CTRG Plate Carrier Rig (Winter)";
		hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment\vest\data\plate_carrier\plate_carrier_vest_win_co.paa",""};
	};
	class bravo_carrier_nobelt_ws_khk : bravo_carrier_nobelt_ws_blk
	{
		displayName = "CTRG Plate Carrier Rig (Khaki)";
		hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment\vest\data\plate_carrier\plate_carrier_vest_khk_co.paa",""};
	};
	class bravo_carrier_nobelt_ws_des : bravo_carrier_nobelt_ws_blk
	{
		displayName = "CTRG Plate Carrier Rig (Desert)";
		hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment\vest\data\plate_carrier\plate_carrier_vest_des_co.paa",""};
	};
	
	class itemCore;
	class uniform_base : itemCore
	{
		class itemInfo;
	};
	class rhs_uniform_6sh122_v1;
	class rhs_uniform_6sh122_gloves_v1 : rhs_uniform_6sh122_v1
	{
		class itemInfo;
	};
	class bravo_6sh122_gloves_olive : rhs_uniform_6sh122_gloves_v1
	{
		displayName = "6Sh122 (Olive/Gloves)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_6sh122_gloves_olive_unit";
		};
	};
	
	class rhs_uniform_g3_blk : uniform_base
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_cryeg3_bravocam : rhs_uniform_g3_blk
	{
		displayName = "G3 Uniform (BravoCam)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_bravocam_unit";
		};
	};
	
	class rhs_uniform_g3_rgr : uniform_base
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_cryeg3_cce : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (CCE)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_cce_unit";
		};
	};
	class bravo_cryeg3_dgt : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (Daguet)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_dgt_unit";
		};
	};
	class bravo_cryeg3_trp : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (Tropentarn)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_trp_unit";
		};
	};
	class bravo_cryeg3_flk : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (Flecktarn)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_flk_unit";
		};
	};
	class bravo_cryeg3_mtr : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (Multitarn)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_mtr_unit";
		};
	};
	class bravo_cryeg3_bme : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (BME)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_bme_unit";
		};
	};
	class bravo_cryeg3_m90 : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (M/90)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_m90_unit";
		};
	};
	class bravo_cryeg3_jit : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (Jietai)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_jit_unit";
		};
	};
	class bravo_cryeg3_90k : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (M/90K)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_90k_unit";
		};
	};
	class bravo_cryeg3_tan : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (Tan, Dull)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_tan_unit";
		};
	};
	class bravo_cryeg3_mm14 : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (MM-14)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_mm14_unit";
		};
	};
	class bravo_cryeg3_mtp : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (MTP)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_mtp_unit";
		};
	};
	class bravo_cryeg3_khk : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (Khaki)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_khk_unit";
		};
	};
	class bravo_cryeg3_amc : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (AMC)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_amc_unit";
		};
	};
	class bravo_cryeg3_ldf : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (LDF)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_ldf_unit";
		};
	};
	class bravo_cryeg3_catw : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (CADPAT-TW)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_catw_unit";
		};
	};
	class bravo_cryeg3_camt : rhs_uniform_g3_rgr
	{
		displayName = "G3 Uniform (CADPAT-MT)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_cryeg3_camt_unit";
		};
	};
	
	class u_i_combatuniform_shortsleeve : uniform_base
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_combatuniform_tactee_aaf_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues [AAF] (Tee)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_aaf_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_ion_dpm_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 02 [ION] (DPM)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_ion_dpm_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_ion_ddpm_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 02 [ION] (DDPM)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_ion_ddpm_ws_unit";
		};
	};
	class bravo_combatuniform_tshirt_ion_ddpm_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 03 [ION] (DDPM)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_ion_ddpm_ws_unit";
		};
	};
	class bravo_combatuniform_tshirt_ion_dpm_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 03 [ION] (DPM)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_ion_dpm_ws_unit";
		};
	};
	class bravo_combatuniform_tshirt_ion_marpatwd_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 03 [ION] (MARPAT-WD)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_ion_marpatwd_ws_unit";
		};
	};
	class bravo_combatuniform_tshirt_ion_marpatd_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 03 [ION] (MARPAT-D)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_ion_marpatd_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_ion_marpatwd_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 02 [ION] (MARPAT-WD)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_ion_marpatwd_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_ion_marpatd_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 02 [ION] (MARPAT-D)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_ion_marpatd_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_ion_mtp_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 02 [ION] (MTP)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_ion_mtp_ws_unit";
		};
	};
	class bravo_combatuniform_tshirt_ion_mtp_ws : u_i_combatuniform_shortsleeve
	{
		displayName = "Combat Fatigues T-Shirt 03 [ION] (MTP)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_ion_mtp_ws_unit";
		};
	};
	
	class uk3cb_ion_b_u_tshirt_uniform_01_wdl : uniform_base
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_combatuniformn_tactee_ion_mtpw : uk3cb_ion_b_u_tshirt_uniform_01_wdl
	{
		displayName = "Combat Fatigues T-Shirt [ION] (Woodland MTP)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniformn_tactee_ion_mtpw_unit";
		};
	};
	class bravo_combatuniformn_tactee_ion_mtpt : uk3cb_ion_b_u_tshirt_uniform_01_wdl
	{
		displayName = "Combat Fatigues T-Shirt [ION] (Tropic MTP)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniformn_tactee_ion_mtpt_unit";
		};
	};
	class bravo_combatuniformn_tactee_ion_mtp : uk3cb_ion_b_u_tshirt_uniform_01_wdl
	{
		displayName = "Combat Fatigues T-Shirt [ION] (MTP)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniformn_tactee_ion_mtp_unit";
		};
	};
	class bravo_combatuniformn_tactee_ion_mtpd : uk3cb_ion_b_u_tshirt_uniform_01_wdl
	{
		displayName = "Combat Fatigues T-Shirt [ION] (Desert MTP)";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniformn_tactee_ion_mtpd_unit";
		};
	};
	
	class uk3cb_baf_u_combatuniform_mtp_shortsleeve : u_i_combatuniform_shortsleeve
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_combatuniform_tactee_mtp_ws : uk3cb_baf_u_combatuniform_mtp_shortsleeve
	{
		displayName = "Combat Uniform MTP Combat Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_mtp_ws_unit";
		};
	};
	class bravo_combatuniform_tshirt_mtp_ws : uk3cb_baf_u_combatuniform_mtp_shortsleeve
	{
		displayName = "Combat Uniform MTP T-Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_mtp_ws_unit";
		};
	};
	
	class uk3cb_baf_u_combatuniform_ddpm_shortsleeve : u_i_combatuniform_shortsleeve
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_combatuniform_tshirt_ddpm_ws : uk3cb_baf_u_combatuniform_ddpm_shortsleeve
	{
		displayName = "Combat Uniform DDPM T-Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_ddpm_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_ddpm_ws : uk3cb_baf_u_combatuniform_ddpm_shortsleeve
	{
		displayName = "Combat Uniform DDPM Combat Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_ddpm_ws_unit";
		};
	};
	
	class uk3cb_baf_u_combatuniform_dpmw_shortsleeve : u_i_combatuniform_shortsleeve
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_combatuniform_tshirt_dpmw_ws : uk3cb_baf_u_combatuniform_dpmw_shortsleeve
	{
		displayName = "Combat Uniform DPM Wdl T-Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_dpmw_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_dpmw_ws : uk3cb_baf_u_combatuniform_dpmw_shortsleeve
	{
		displayName = "Combat Uniform DPM Wdl Combat Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_dpmw_ws_unit";
		};
	};
	
	class uk3cb_baf_u_combatuniform_dpmt_shortsleeve : u_i_combatuniform_shortsleeve
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_combatuniform_tshirt_dpmt_ws : uk3cb_baf_u_combatuniform_dpmt_shortsleeve
	{
		displayName = "Combat Uniform DPM Tmp T-Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_dpmt_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_dpmt_ws : uk3cb_baf_u_combatuniform_dpmt_shortsleeve
	{
		displayName = "Combat Uniform DPM Tmp Combat Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_dpmt_ws_unit";
		};
	};
	
	class uk3cb_baf_u_combatuniform_dpmtrop_shortsleeve : u_i_combatuniform_shortsleeve
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_combatuniform_tshirt_dpmtrop_ws : uk3cb_baf_u_combatuniform_dpmtrop_shortsleeve
	{
		displayName = "Combat Uniform DPM Trop T-Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_dpmtrop_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_dpmtrop_ws : uk3cb_baf_u_combatuniform_dpmtrop_shortsleeve
	{
		displayName = "Combat Uniform DPM Trop Combat Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_dpmtrop_ws_unit";
		};
	};
	
	class uk3cb_baf_u_combatuniform_dpmj_shortsleeve : u_i_combatuniform_shortsleeve
	{
		class itemInfo : itemInfo
		{};
	};
	class bravo_combatuniform_tshirt_dpmj_ws : uk3cb_baf_u_combatuniform_dpmj_shortsleeve
	{
		displayName = "Combat Uniform DPM Jun T-Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tshirt_dpmj_ws_unit";
		};
	};
	class bravo_combatuniform_tactee_dpmj_ws : uk3cb_baf_u_combatuniform_dpmj_shortsleeve
	{
		displayName = "Combat Uniform DPM Jun Combat Shirt [BAF]";
		class itemInfo : itemInfo
		{
			uniformClass = "bravo_combatuniform_tactee_dpmj_ws_unit";
		};
	};
	
	class gm_vest_armored_base;
	class gm_ge_vest_type18_base : gm_vest_armored_base
	{
		class ItemInfo;
	};
	class bravo_vest_type18_oli : gm_ge_vest_type18_base
	{
		displayName = "Type 18 Vest (Olive)";
		scope = 2;
		scopeArsenal = 2;
		picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_bgs_vest_type18_grn_ca";
		hiddenSelectionsTextures[] = {"bravo_gear_misc\assets\bravo_ge_vest_type18_oli_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"bravo_gear_misc\assets\bravo_ge_vest_type18_oli_co.paa"};
		};
	};
	class bravo_vest_type18_win : gm_ge_vest_type18_base
	{
		displayName = "Type 18 Vest (White)";
		scope = 2;
		scopeArsenal = 2;
		picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_bgs_vest_type18_grn_ca";
		hiddenSelectionsTextures[] = {"bravo_gear_misc\assets\bravo_ge_vest_type18_win_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"bravo_gear_misc\assets\bravo_ge_vest_type18_win_co.paa"};
		};
	};
	class bravo_vest_type18_des : gm_ge_vest_type18_base
	{
		displayName = "Type 18 Vest (Tan)";
		scope = 2;
		scopeArsenal = 2;
		picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_bgs_vest_type18_grn_ca";
		hiddenSelectionsTextures[] = {"bravo_gear_misc\assets\bravo_ge_vest_type18_des_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"bravo_gear_misc\assets\bravo_ge_vest_type18_des_co.paa"};
		};
	};
	
	class nomex_toq_addon;
	class bravo_nvg_swdg44_helmet : nomex_toq_addon
	{
		displayName = "(US) M-1944 SWDG (Helmet)";
		author = "sim-kar98-dough";
		descriptionShort = "Dust goggles";
		model = "simc_uaf_44\swdg_face.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		picture = "\simc_uaf_44_preview\icons\SWDG.paa";
		class ItemInfo
		{
			mass = 1;
			modelOff = "simc_uaf_44\swdg_face.p3d";
			uniformModel = "simc_uaf_44\swdg_face.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {};
		};
	};
	class bravo_nvg_swdg44_low : nomex_toq_addon
	{
		displayName = "(US) M-1944 SWDG (Low)";
		author = "sim-kar98-dough";
		descriptionShort = "Dust goggles";
		model = "simc_uaf_44\swdg_face.p3d";
		picture = "\simc_uaf_44_preview\icons\SWDG.paa";
		hiddenSelections[] = {"glass","jewgel"};
		hiddenSelectionsTextures[] = {"\simc_uaf_44\jewgel\glass_green_ca.paa",""};
		class ItemInfo
		{
			mass = 1;
			modelOff = "simc_uaf_44\swdg.p3d";
			uniformModel = "simc_uaf_44\swdg.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {"glass","jewgel"};
			hiddenSelectionsTextures[] = {"\simc_uaf_44\jewgel\glass_green_ca.paa",""};
		};
	};
	
	class bravo_nvg_helmetband : nomex_toq_addon
	{
		displayname = "(US) Helmet Band (IFA3)";
		author = "bigstone";
		descriptionShort = "Helmet band";
		model = "simc_uaf_44\helmet_band.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		picture = "\simc_uaf_44_preview\icons\band_ca.paa";
		class ItemInfo
		{
			mass = 2;
			modelOff = "simc_uaf_44\helmet_band.p3d";
			uniformModel = "simc_uaf_44\helmet_band.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {};
		};
	};
	
	class UK3CB_Earpiece_NVG;
	class bravo_nvg_prr : UK3CB_Earpiece_NVG
	{
		displayName = "Headset PRR";
		author = "3 Commando Brigade";
		picture = "\UK3CB_BAF_Equipment\bowman\data\ui\gear_bowman_ca.paa";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		model = "\uk3cb_baf_equipment\bowman\Bowman_headset.p3d";
		class ItemInfo
		{
			mass = 2;
			modelOff = "\uk3cb_baf_equipment\bowman\Bowman_headset.p3d";
			uniformModel = "\uk3cb_baf_equipment\bowman\Bowman_headset.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {""};
		};
	};
	class bravo_nvg_wsheadset : UK3CB_Earpiece_NVG
	{
		displayName = "Military Headset";
		author = "Rotators Collective";
		DLC = "ws";
		picture = "\lxws\characters_f_lxws\headgear\pmc\data\ui\gear_x_headpiece_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"lxws\characters_f_lxws\headgear\pmc\data\HeadMic_CO.paa"};
		model = "lxws\characters_f_lxws\headgear\pmc\HeadMic.p3d";
		class ItemInfo
		{
			mass = 2;
			modelOff = "lxws\characters_f_lxws\headgear\pmc\HeadMic.p3d";
			uniformModel = "lxws\characters_f_lxws\headgear\pmc\HeadMic.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"lxws\characters_f_lxws\headgear\pmc\data\HeadMic_CO.paa"};
		};
	};
	class bravo_nvg_gmgrasscamo1 : UK3CB_Earpiece_NVG
	{
		displayName = "Grass Helmet Camo 1";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_core\gm_core_characters\data\ui\picture_gm_hmd_foliage_summer_grass_01_ca.paa";
		model = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_01";
		class ItemInfo
		{
			mass = 1;
			modelOff = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_01";
			uniformModel = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_01";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_gmgrasscamo2 : UK3CB_Earpiece_NVG
	{
		displayName = "Grass Helmet Camo 2";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_core\gm_core_characters\data\ui\picture_gm_hmd_foliage_summer_grass_01_ca.paa";
		model = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_02";
		class ItemInfo
		{
			mass = 1;
			modelOff = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_02";
			uniformModel = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_02";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_gmgrasscamo3 : UK3CB_Earpiece_NVG
	{
		displayName = "Grass Helmet Camo 3";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_core\gm_core_characters\data\ui\picture_gm_hmd_foliage_summer_grass_01_ca.paa";
		model = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_03";
		class ItemInfo
		{
			mass = 1;
			modelOff = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_03";
			uniformModel = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_03";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_gmgrasscamo4 : UK3CB_Earpiece_NVG
	{
		displayName = "Grass Helmet Camo 4";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_core\gm_core_characters\data\ui\picture_gm_hmd_foliage_summer_grass_01_ca.paa";
		model = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_04";
		class ItemInfo
		{
			mass = 1;
			modelOff = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_04";
			uniformModel = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_grass_04";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_gmforestcamo1 : UK3CB_Earpiece_NVG
	{
		displayName = "Forest Helmet Camo 1";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_core\gm_core_characters\data\ui\picture_gm_hmd_foliage_summer_forest_01_ca.paa";
		model = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_01";
		class ItemInfo
		{
			mass = 1;
			modelOff = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_01";
			uniformModel = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_01";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_gmforestcamo2 : UK3CB_Earpiece_NVG
	{
		displayName = "Forest Helmet Camo 2";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_core\gm_core_characters\data\ui\picture_gm_hmd_foliage_summer_forest_01_ca.paa";
		model = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_02";
		class ItemInfo
		{
			mass = 1;
			modelOff = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_02";
			uniformModel = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_02";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_gmforestcamo3 : UK3CB_Earpiece_NVG
	{
		displayName = "Forest Helmet Camo 3";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_core\gm_core_characters\data\ui\picture_gm_hmd_foliage_summer_forest_01_ca.paa";
		model = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_03";
		class ItemInfo
		{
			mass = 1;
			modelOff = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_03";
			uniformModel = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_03";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_gmforestcamo4 : UK3CB_Earpiece_NVG
	{
		displayName = "Forest Helmet Camo 4";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_core\gm_core_characters\data\ui\picture_gm_hmd_foliage_summer_forest_01_ca.paa";
		model = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_04";
		class ItemInfo
		{
			mass = 1;
			modelOff = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_04";
			uniformModel = "gm\gm_core\gm_core_characters\gm_headgear_foliage_summer_forest_04";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_gmdustglasses_relaxed : UK3CB_Earpiece_NVG
	{
		displayName = "Dust Glasses (Relaxed)";
		author = "Global Mobilization";
		DLC = "gm";
		picture = "\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_facewear_dustglasses_ca";
		model = "\gm\gm_characters\gm_ge_characters\gm_ge_facewear_dustglasses_relaxed";
		class ItemInfo
		{
			mass = 1;
			modelOff = "\gm\gm_characters\gm_ge_characters\gm_ge_facewear_dustglasses_relaxed";
			uniformModel = "\gm\gm_characters\gm_ge_characters\gm_ge_facewear_dustglasses_relaxed";
			hmdType = 0;
			type = 616;
		};
	};
	class bravo_nvg_wirelessearpiece : UK3CB_Earpiece_NVG
	{
		displayName = "Wireless Earpiece";
		author = "Bohemia Interactive";
		DLC = "orange";
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_WirelessEarpiece_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_WirelessEarpiece_co.paa"};
		model = "\A3\Characters_F_Orange\Headgear\H_WirelessEarpiece_F.p3d";
		class ItemInfo
		{
			mass = 1;
			modelOff = "\A3\Characters_F_Orange\Headgear\H_WirelessEarpiece_F.p3d";
			uniformModel = "\A3\Characters_F_Orange\Headgear\H_WirelessEarpiece_F.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_WirelessEarpiece_co.paa"};
		};
	};
	
	class gm_ge_vest_armor_90_rifleman_flk;
	class bravo_gm_ge_vest_armor_90_rifleman_oli : gm_ge_vest_armor_90_rifleman_flk
	{
		displayName = "Flak Vest, Rifleman (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_rifleman_des : gm_ge_vest_armor_90_rifleman_flk
	{
		displayName = "Flak Vest, Rifleman (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_rifleman_khk : gm_ge_vest_armor_90_rifleman_flk
	{
		displayName = "Flak Vest, Rifleman (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_rifleman_cce : gm_ge_vest_armor_90_rifleman_flk
	{
		displayName = "Flak Vest, Rifleman (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_rifleman_dgt : gm_ge_vest_armor_90_rifleman_flk
	{
		displayName = "Flak Vest, Rifleman (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	
	class gm_ge_vest_armor_90_machinegunner_flk;
	class bravo_gm_ge_vest_armor_90_machinegunner_oli : gm_ge_vest_armor_90_machinegunner_flk
	{
		displayName = "Flak Vest, Machinegunner (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_machinegunner_des : gm_ge_vest_armor_90_machinegunner_flk
	{
		displayName = "Flak Vest, Machinegunner (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_machinegunner_khk : gm_ge_vest_armor_90_machinegunner_flk
	{
		displayName = "Flak Vest, Machinegunner (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_machinegunner_cce : gm_ge_vest_armor_90_machinegunner_flk
	{
		displayName = "Flak Vest, Machinegunner (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_machinegunner_dgt : gm_ge_vest_armor_90_machinegunner_flk
	{
		displayName = "Flak Vest, Machinegunner (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	
	class gm_ge_vest_armor_90_medic_flk;
	class bravo_gm_ge_vest_armor_90_medic_oli : gm_ge_vest_armor_90_medic_flk
	{
		displayName = "Flak Vest, Medic (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_medic_des : gm_ge_vest_armor_90_medic_flk
	{
		displayName = "Flak Vest, Medic (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_medic_khk : gm_ge_vest_armor_90_medic_flk
	{
		displayName = "Flak Vest, Medic (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_medic_cce : gm_ge_vest_armor_90_medic_flk
	{
		displayName = "Flak Vest, Medic (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_medic_dgt : gm_ge_vest_armor_90_medic_flk
	{
		displayName = "Flak Vest, Medic (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	
	class gm_ge_vest_armor_90_demolition_flk;
	class bravo_gm_ge_vest_armor_90_demolition_oli : gm_ge_vest_armor_90_demolition_flk
	{
		displayName = "Flak Vest, Demolition (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_demolition_des : gm_ge_vest_armor_90_demolition_flk
	{
		displayName = "Flak Vest, Demolition (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_demolition_khk : gm_ge_vest_armor_90_demolition_flk
	{
		displayName = "Flak Vest, Demolition (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_demolition_cce : gm_ge_vest_armor_90_demolition_flk
	{
		displayName = "Flak Vest, Demolition (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_armor_90_demolition_dgt : gm_ge_vest_armor_90_demolition_flk
	{
		displayName = "Flak Vest, Demolition (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	
	class gm_ge_vest_armor_90_leader_flk;
	class bravo_gm_ge_vest_armor_90_leader_oli : gm_ge_vest_armor_90_leader_flk
	{
		displayName = "Flak Vest, Leader (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_leader_des : gm_ge_vest_armor_90_leader_flk
	{
		displayName = "Flak Vest, Leader (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_leader_khk : gm_ge_vest_armor_90_leader_flk
	{
		displayName = "Flak Vest, Leader (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_leader_cce : gm_ge_vest_armor_90_leader_flk
	{
		displayName = "Flak Vest, Leader (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_leader_dgt : gm_ge_vest_armor_90_leader_flk
	{
		displayName = "Flak Vest, Leader (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	
	class gm_ge_vest_armor_90_crew_flk;
	class bravo_gm_ge_vest_armor_90_crew_oli : gm_ge_vest_armor_90_crew_flk
	{
		displayName = "Flak Vest, Crew (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_crew_des : gm_ge_vest_armor_90_crew_flk
	{
		displayName = "Flak Vest, Crew (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_crew_khk : gm_ge_vest_armor_90_crew_flk
	{
		displayName = "Flak Vest, Crew (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_crew_cce : gm_ge_vest_armor_90_crew_flk
	{
		displayName = "Flak Vest, Crew (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_crew_dgt : gm_ge_vest_armor_90_crew_flk
	{
		displayName = "Flak Vest, Crew (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	
	class gm_ge_vest_armor_90_flk;
	class bravo_gm_ge_vest_armor_90_oli : gm_ge_vest_armor_90_flk
	{
		displayName = "Flak Vest (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co"};
	};
	class bravo_gm_ge_vest_armor_90_des : gm_ge_vest_armor_90_flk
	{
		displayName = "Flak Vest (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
	};
	class bravo_gm_ge_vest_armor_90_khk : gm_ge_vest_armor_90_flk
	{
		displayName = "Flak Vest (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
	};
	class bravo_gm_ge_vest_armor_90_cce : gm_ge_vest_armor_90_flk
	{
		displayName = "Flak Vest (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co"};
	};
	class bravo_gm_ge_vest_armor_90_dgt : gm_ge_vest_armor_90_flk
	{
		displayName = "Flak Vest (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co"};
	};
	
	class gm_ge_vest_armor_90_officer_flk;
	class bravo_gm_ge_vest_armor_90_officer_oli : gm_ge_vest_armor_90_officer_flk
	{
		displayName = "Flak Vest, Officer (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_oli_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_officer_des : gm_ge_vest_armor_90_officer_flk
	{
		displayName = "Flak Vest, Officer (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_officer_khk : gm_ge_vest_armor_90_officer_flk
	{
		displayName = "Flak Vest, Officer (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_officer_cce : gm_ge_vest_armor_90_officer_flk
	{
		displayName = "Flak Vest, Officer (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	class bravo_gm_ge_vest_armor_90_officer_dgt : gm_ge_vest_armor_90_officer_flk
	{
		displayName = "Flak Vest, Officer (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_splischu_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	
	
	class gm_ge_vest_90_rifleman_flk;
	class bravo_gm_ge_vest_90_rifleman_oli : gm_ge_vest_90_rifleman_flk
	{
		displayName = "Belt Rig, Rifleman (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa"};
	};
	class bravo_gm_ge_vest_90_rifleman_des : gm_ge_vest_90_rifleman_flk
	{
		displayName = "Belt Rig, Rifleman (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa"};
	};
	class bravo_gm_ge_vest_90_rifleman_khk : gm_ge_vest_90_rifleman_flk
	{
		displayName = "Belt Rig, Rifleman (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	
	class gm_ge_vest_90_machinegunner_flk;
	class bravo_gm_ge_vest_90_machinegunner_oli : gm_ge_vest_90_machinegunner_flk
	{
		displayName = "Belt Rig, Machinegunner (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_90_machinegunner_des : gm_ge_vest_90_machinegunner_flk
	{
		displayName = "Belt Rig, Machinegunner (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_90_machinegunner_khk : gm_ge_vest_90_machinegunner_flk
	{
		displayName = "Belt Rig, Machinegunner (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	
	class gm_ge_vest_90_medic_flk;
	class bravo_gm_ge_vest_90_medic_oli : gm_ge_vest_90_medic_flk
	{
		displayName = "Belt Rig, Medic (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_90_medic_des : gm_ge_vest_90_medic_flk
	{
		displayName = "Belt Rig, Medic (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_90_medic_khk : gm_ge_vest_90_medic_flk
	{
		displayName = "Belt Rig, Medic (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	
	class gm_ge_vest_90_demolition_flk;
	class bravo_gm_ge_vest_90_demolition_oli : gm_ge_vest_90_demolition_flk
	{
		displayName = "Belt Rig, Demolition (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_90_demolition_des : gm_ge_vest_90_demolition_flk
	{
		displayName = "Belt Rig, Demolition (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	class bravo_gm_ge_vest_90_demolition_khk : gm_ge_vest_90_demolition_flk
	{
		displayName = "Belt Rig, Demolition (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa","\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_02_80_co"};
	};
	
	class gm_ge_vest_90_leader_flk;
	class bravo_gm_ge_vest_90_leader_oli : gm_ge_vest_90_leader_flk
	{
		displayName = "Belt Rig, Leader (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa"};
	};
	class bravo_gm_ge_vest_90_leader_des : gm_ge_vest_90_leader_flk
	{
		displayName = "Belt Rig, Leader (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa"};
	};
	class bravo_gm_ge_vest_90_leader_khk : gm_ge_vest_90_leader_flk
	{
		displayName = "Belt Rig, Leader (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	
	class gm_ge_vest_90_crew_flk;
	class bravo_gm_ge_vest_90_crew_oli : gm_ge_vest_90_crew_flk
	{
		displayName = "Belt Rig, Crew (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa"};
	};
	class bravo_gm_ge_vest_90_crew_des : gm_ge_vest_90_crew_flk
	{
		displayName = "Belt Rig, Crew (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa"};
	};
	class bravo_gm_ge_vest_90_crew_khk : gm_ge_vest_90_crew_flk
	{
		displayName = "Belt Rig, Crew (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	
	class gm_ge_vest_90_officer_flk;
	class bravo_gm_ge_vest_90_officer_oli : gm_ge_vest_90_officer_flk
	{
		displayName = "Belt Rig, Officer (Olive)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_oli_co.paa"};
	};
	class bravo_gm_ge_vest_90_officer_des : gm_ge_vest_90_officer_flk
	{
		displayName = "Belt Rig, Officer (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_des_co.paa"};
	};
	class bravo_gm_ge_vest_90_officer_khk : gm_ge_vest_90_officer_flk
	{
		displayName = "Belt Rig, Officer (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_vest_90_khk_co.paa"};
	};
	
	class gm_ge_headgear_m92_cover_base;
	class gm_ge_headgear_m92_cover_glasses_base;
	class gm_ge_headgear_m92_cover_glasses_oli : gm_ge_headgear_m92_cover_glasses_base
	{
		class ItemInfo;
	};
	class gm_ge_headgear_m92_cover_oli : gm_ge_headgear_m92_cover_base
	{
		class ItemInfo;
	};
	class bravo_ge_headgear_m92_cover_glasses_khk : gm_ge_headgear_m92_cover_glasses_oli
	{
		displayName = "Helmet M92 (Goggles, Khaki B)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
		};
	};
	class bravo_ge_headgear_m92_cover_khk : gm_ge_headgear_m92_cover_oli
	{
		displayName = "Helmet M92 (Khaki B)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
		};
	};
	class bravo_ge_headgear_m92_cover_cce : gm_ge_headgear_m92_cover_oli
	{
		displayName = "Helmet M92 (CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_cce_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_cce_co"};
		};
	};
	class bravo_ge_headgear_m92_cover_dgt : gm_ge_headgear_m92_cover_oli
	{
		displayName = "Helmet M92 (Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_dgt_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_dgt_co"};
		};
	};
	
	class bravo_ge_headgear_m92_cover_glasses_des : gm_ge_headgear_m92_cover_glasses_oli
	{
		displayName = "Helmet M92 (Goggles, Tan B)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		};
	};
	class bravo_ge_headgear_m92_cover_glasses_egy : gm_ge_headgear_m92_cover_glasses_oli
	{
		displayName = "Helmet M92 (Goggles, Egyptian Desert Rocks)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_egy_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_egy_co"};
		};
	};
	class bravo_ge_headgear_m92_cover_glasses_cce : gm_ge_headgear_m92_cover_glasses_oli
	{
		displayName = "Helmet M92 (Goggles, CCE)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_cce_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_cce_co"};
		};
	};
	class bravo_ge_headgear_m92_cover_glasses_dgt : gm_ge_headgear_m92_cover_glasses_oli
	{
		displayName = "Helmet M92 (Goggles, Daguet)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_dgt_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_dgt_co"};
		};
	};
	class bravo_ge_headgear_m92_cover_des : gm_ge_headgear_m92_cover_oli
	{
		displayName = "Helmet M92 (Tan B)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		};
	};
	class bravo_ge_headgear_m92_cover_egy : gm_ge_headgear_m92_cover_oli
	{
		displayName = "Helmet M92 (Egyptian Desert Rocks)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_egy_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_m92_cover_egy_co"};
		};
	};
	
	class gm_ge_headgear_m92_base;
	class gm_ge_headgear_m92_glasses_base;
	class gm_ge_headgear_m92_glasses_flk : gm_ge_headgear_m92_glasses_base
	{
		class ItemInfo;
	};
	class gm_ge_headgear_m92_flk : gm_ge_headgear_m92_base
	{
		class ItemInfo;
	};
	class bravo_ge_headgear_m92_glasses_khk : gm_ge_headgear_m92_glasses_flk
	{
		displayName = "Helmet M92 (Goggles, Khaki A)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
		};
	};
	class bravo_ge_headgear_m92_khk : gm_ge_headgear_m92_flk
	{
		displayName = "Helmet M92 (Khaki A)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
		};
	};
	
	class bravo_ge_headgear_m92_glasses_des : gm_ge_headgear_m92_glasses_flk
	{
		displayName = "Helmet M92 (Goggles, Tan A)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		};
	};
	class bravo_ge_headgear_m92_des : gm_ge_headgear_m92_flk
	{
		displayName = "Helmet M92 (Tan A)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		};
	};
	
	class gm_ge_army_uniform_soldier_bdu_80_wdl;
	class gm_xx_uniform_soldier_bdu_80_oli : gm_ge_army_uniform_soldier_bdu_80_wdl
	{
		class ItemInfo;
	};
	class bravo_gm_bdu_des : gm_xx_uniform_soldier_bdu_80_oli
	{
		displayName = "Battle Dress Uniform (Gloves, Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_des_co"};
			uniformClass = "bravo_gm_bdu_des_unit";
		};
	};
	class bravo_gm_bdu_khk : gm_xx_uniform_soldier_bdu_80_oli
	{
		displayName = "Battle Dress Uniform (Gloves, Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_khk_co"};
			uniformClass = "bravo_gm_bdu_khk_unit";
		};
	};
	class bravo_gm_bdu_blk : gm_xx_uniform_soldier_bdu_80_oli
	{
		displayName = "Battle Dress Uniform (Gloves, Black)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_blk_co"};
			uniformClass = "bravo_gm_bdu_blk_unit";
		};
	};
	class bravo_gm_bdu_win : gm_xx_uniform_soldier_bdu_80_oli
	{
		displayName = "Battle Dress Uniform (Gloves, White)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_win_co"};
			uniformClass = "bravo_gm_bdu_win_unit";
		};
	};
	class bravo_gm_bdu_dbdu : gm_xx_uniform_soldier_bdu_80_oli
	{
		displayName = "Battle Dress Uniform (Gloves, DBDU)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_dbdu_co"};
			uniformClass = "bravo_gm_bdu_dbdu_unit";
		};
	};
	class bravo_gm_bdu_dcu : gm_xx_uniform_soldier_bdu_80_oli
	{
		displayName = "Battle Dress Uniform (Gloves, DCU)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_dcu_co"};
			uniformClass = "bravo_gm_bdu_dcu_unit";
		};
	};
	
	class bravo_gm_bdu_nogloves_des : bravo_gm_bdu_des
	{
		displayName = "Battle Dress Uniform (Tan)";
		class ItemInfo : ItemInfo
		{
			uniformClass = "bravo_gm_bdu_nogloves_des_unit";
		};
	};
	class bravo_gm_bdu_nogloves_khk : bravo_gm_bdu_khk
	{
		displayName = "Battle Dress Uniform (Khaki)";
		class ItemInfo : ItemInfo
		{
			uniformClass = "bravo_gm_bdu_nogloves_khk_unit";
		};
	};
	class bravo_gm_bdu_nogloves_blk : bravo_gm_bdu_blk
	{
		displayName = "Battle Dress Uniform (Black)";
		class ItemInfo : ItemInfo
		{
			uniformClass = "bravo_gm_bdu_nogloves_blk_unit";
		};
	};
	class bravo_gm_bdu_nogloves_win : bravo_gm_bdu_win
	{
		displayName = "Battle Dress Uniform (White)";
		class ItemInfo : ItemInfo
		{
			uniformClass = "bravo_gm_bdu_nogloves_win_unit";
		};
	};
	class bravo_gm_bdu_nogloves_dbdu : bravo_gm_bdu_dbdu
	{
		displayName = "Battle Dress Uniform (DBDU)";
		class ItemInfo : ItemInfo
		{
			uniformClass = "bravo_gm_bdu_nogloves_dbdu_unit";
		};
	};
	class bravo_gm_bdu_nogloves_dcu : bravo_gm_bdu_dbdu
	{
		displayName = "Battle Dress Uniform (DCU)";
		class ItemInfo : ItemInfo
		{
			uniformClass = "bravo_gm_bdu_nogloves_dcu_unit";
		};
	};
	
	class gm_ge_army_uniform_soldier_bdu_rolled_80_wdl;
	class gm_xx_uniform_soldier_bdu_rolled_80_oli : gm_ge_army_uniform_soldier_bdu_rolled_80_wdl
	{
		class ItemInfo;
	};
	class bravo_gm_bdu_rolled_des : gm_xx_uniform_soldier_bdu_rolled_80_oli
	{
		displayName = "Battle Dress Uniform (Rolled, Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_des_co"};
			uniformClass = "bravo_gm_bdu_rolled_des_unit";
		};
	};
	class bravo_gm_bdu_rolled_khk : gm_xx_uniform_soldier_bdu_rolled_80_oli
	{
		displayName = "Battle Dress Uniform (Rolled, Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_khk_co"};
			uniformClass = "bravo_gm_bdu_rolled_khk_unit";
		};
	};
	class bravo_gm_bdu_rolled_blk : gm_xx_uniform_soldier_bdu_rolled_80_oli
	{
		displayName = "Battle Dress Uniform (Rolled, Black)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_blk_co"};
			uniformClass = "bravo_gm_bdu_rolled_blk_unit";
		};
	};
	class bravo_gm_bdu_rolled_win : gm_xx_uniform_soldier_bdu_rolled_80_oli
	{
		displayName = "Battle Dress Uniform (Rolled, White)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_win_co"};
			uniformClass = "bravo_gm_bdu_rolled_win_unit";
		};
	};
	class bravo_gm_bdu_rolled_dbdu : gm_xx_uniform_soldier_bdu_rolled_80_oli
	{
		displayName = "Battle Dress Uniform (Rolled, DBDU)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_dbdu_co"};
			uniformClass = "bravo_gm_bdu_rolled_dbdu_unit";
		};
	};
	class bravo_gm_bdu_rolled_dcu : gm_xx_uniform_soldier_bdu_rolled_80_oli
	{
		displayName = "Battle Dress Uniform (Rolled, DCU)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_dcu_co"};
			uniformClass = "bravo_gm_bdu_rolled_dcu_unit";
		};
	};
	
	class gm_ge_uniform_soldier_90_base;
	class gm_ge_uniform_soldier_90_flk : gm_ge_uniform_soldier_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_ge_uniform_90_khk : gm_ge_uniform_soldier_90_flk
	{
		displayName = "Combat Suit (Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_khk_co"};
			uniformClass = "bravo_gm_ge_uniform_90_khk_unit";
		};
	};
	class bravo_gm_ge_uniform_90_win : gm_ge_uniform_soldier_90_flk
	{
		displayName = "Combat Suit (White)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_win_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_win_co"};
			uniformClass = "bravo_gm_ge_uniform_90_win_unit";
		};
	};
	class bravo_gm_ge_uniform_90_cce : gm_ge_uniform_soldier_90_flk
	{
		displayName = "Combat Suit (CCE)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_cce_co"};
			uniformClass = "bravo_gm_ge_uniform_90_cce_unit";
		};
	};
	
	class gm_ge_uniform_soldier_rolled_90_flk : gm_ge_uniform_soldier_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_ge_uniform_rolled_90_khk : gm_ge_uniform_soldier_rolled_90_flk
	{
		displayName = "Combat Suit (Rolled, Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_khk_co"};
			uniformClass = "bravo_gm_ge_uniform_rolled_90_khk_unit";
		};
	};
	class bravo_gm_ge_uniform_rolled_90_win : gm_ge_uniform_soldier_rolled_90_flk
	{
		displayName = "Combat Suit (Rolled, White)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_khk_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_win_co"};
			uniformClass = "bravo_gm_ge_uniform_rolled_90_win_unit";
		};
	};
	class bravo_gm_ge_uniform_rolled_90_cce : gm_ge_uniform_soldier_rolled_90_flk
	{
		displayName = "Combat Suit (Rolled, CCE)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_cce_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_cce_co"};
			uniformClass = "bravo_gm_ge_uniform_rolled_90_cce_unit";
		};
	};
	
	class gm_ge_uniform_soldier_90_trp : gm_ge_uniform_soldier_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_ge_uniform_90_des : gm_ge_uniform_soldier_90_trp
	{
		displayName = "Combat Suit (Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_des_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_des_co"};
			uniformClass = "bravo_gm_ge_uniform_90_des_unit";
		};
	};
	class bravo_gm_ge_uniform_90_blk : gm_ge_uniform_soldier_90_trp
	{
		displayName = "Combat Suit (Black)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_blk_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_blk_co"};
			uniformClass = "bravo_gm_ge_uniform_90_blk_unit";
		};
	};
	class bravo_gm_ge_uniform_90_dgt : gm_ge_uniform_soldier_90_trp
	{
		displayName = "Combat Suit (Daguet)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_dgt_co"};
			uniformClass = "bravo_gm_ge_uniform_90_dgt_unit";
		};
	};
	
	class gm_ge_uniform_soldier_rolled_90_trp : gm_ge_uniform_soldier_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_ge_uniform_rolled_90_des : gm_ge_uniform_soldier_rolled_90_trp
	{
		displayName = "Combat Suit (Rolled, Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_des_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_des_co"};
			uniformClass = "bravo_gm_ge_uniform_rolled_90_des_unit";
		};
	};
	class bravo_gm_ge_uniform_rolled_90_blk : gm_ge_uniform_soldier_rolled_90_trp
	{
		displayName = "Combat Suit (Rolled, Black)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_blk_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_blk_co"};
			uniformClass = "bravo_gm_ge_uniform_rolled_90_blk_unit";
		};
	};
	class bravo_gm_ge_uniform_rolled_90_dgt : gm_ge_uniform_soldier_rolled_90_trp
	{
		displayName = "Combat Suit (Rolled, Daguet)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_dgt_co","\bravo_gear_misc\assets\bravo_gm_ge_uniform_90_dgt_co"};
			uniformClass = "bravo_gm_ge_uniform_rolled_90_dgt_unit";
		};
	};
	
	class gm_ge_uniform_soldier_tshirt_90_base;
	class gm_ge_uniform_soldier_tshirt_90_oli : gm_ge_uniform_soldier_tshirt_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_ge_uniform_tshirt_90_khk : gm_ge_uniform_soldier_tshirt_90_oli
	{
		displayName = "Combat Suit (T-Shirt, Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_tshirt_90_khk_co"};
			uniformClass = "bravo_gm_ge_uniform_tshirt_90_khk_unit";
		};
	};
	class bravo_gm_ge_uniform_tshirt_90_des : gm_ge_uniform_soldier_tshirt_90_oli
	{
		displayName = "Combat Suit (T-Shirt, Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_tshirt_90_des_co"};
			uniformClass = "bravo_gm_ge_uniform_tshirt_90_des_unit";
		};
	};
	class bravo_gm_ge_uniform_tshirt_90_desorg : gm_ge_uniform_soldier_tshirt_90_oli
	{
		displayName = "Combat Suit (T-Shirt, Tan/Orange)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_tshirt_90_desorg_co"};
			uniformClass = "bravo_gm_ge_uniform_tshirt_90_desorg_unit";
		};
	};
	class bravo_gm_ge_uniform_tshirt_90_khkorg : gm_ge_uniform_soldier_tshirt_90_oli
	{
		displayName = "Combat Suit (T-Shirt, Khaki/Orange)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_tshirt_90_khkorg_co"};
			uniformClass = "bravo_gm_ge_uniform_tshirt_90_khkorg_unit";
		};
	};
	class bravo_gm_ge_uniform_tshirt_90_blk : gm_ge_uniform_soldier_tshirt_90_oli
	{
		displayName = "Combat Suit (T-Shirt, Black)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_tshirt_90_blk_co"};
			uniformClass = "bravo_gm_ge_uniform_tshirt_90_blk_unit";
		};
	};
	class bravo_gm_ge_uniform_tshirt_90_blkorg : gm_ge_uniform_soldier_tshirt_90_oli
	{
		displayName = "Combat Suit (T-Shirt, Black/Orange)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_tshirt_90_blkorg_co"};
			uniformClass = "bravo_gm_ge_uniform_tshirt_90_blkorg_unit";
		};
	};
	class bravo_gm_ge_uniform_tshirt_90_cce : gm_ge_uniform_soldier_tshirt_90_oli
	{
		displayName = "Combat Suit (T-Shirt, CCE)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_tshirt_90_cce_co"};
			uniformClass = "bravo_gm_ge_uniform_tshirt_90_cce_unit";
		};
	};
	class bravo_gm_ge_uniform_tshirt_90_dgt : gm_ge_uniform_soldier_tshirt_90_oli
	{
		displayName = "Combat Suit (T-Shirt, Daguet)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_tshirt_90_dgt_co"};
			uniformClass = "bravo_gm_ge_uniform_tshirt_90_dgt_unit";
		};
	};
	
	/*
	class gm_ge_uniform_soldier_parka_80_base;
	class gm_ge_army_uniform_soldier_parka_80_ols : gm_ge_uniform_soldier_parka_80_base
	{
		class ItemInfo;
	};
	class bravo_gm_ge_uniform_parka_80_des : gm_ge_army_uniform_soldier_parka_80_ols
	{
		displayName = "Field Parka (Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_parka_80_des_co"};
			uniformClass = "bravo_gm_ge_uniform_parka_80_des_unit";
		};
	};
	class bravo_gm_ge_uniform_parka_80_khk : gm_ge_army_uniform_soldier_parka_80_ols
	{
		displayName = "Field Parka (Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_parka_80_khk_co"};
			uniformClass = "bravo_gm_ge_uniform_parka_80_khk_unit";
		};
	};
	*/
	class gm_gc_uniform_soldier_90_base;
	class gm_gc_army_uniform_soldier_90_str : gm_gc_uniform_soldier_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_gc_army_uniform_soldier_90_des : gm_gc_army_uniform_soldier_90_str
	{
		displayName = "Field Service Uniform (UTV, Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_des_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_90_des_unit";
		};
	};
	
	class gm_gc_army_uniform_soldier_rolled_90_str : gm_gc_uniform_soldier_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_gc_army_uniform_soldier_rolled_90_des : gm_gc_army_uniform_soldier_rolled_90_str
	{
		displayName = "Field Service Uniform (UTV, Rolled, Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_des_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_rolled_90_des_unit";
		};
	};
	
	class gm_gc_army_uniform_soldier_90_sgr : gm_gc_uniform_soldier_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_gc_army_uniform_soldier_90_khk : gm_gc_army_uniform_soldier_90_sgr
	{
		displayName = "Field Service Uniform (UTV, Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_khk_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_90_khk_unit";
		};
	};
	class bravo_gm_gc_army_uniform_soldier_90_win : gm_gc_army_uniform_soldier_90_sgr
	{
		displayName = "Field Service Uniform (UTV, White)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_win_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_90_win_unit";
		};
	};
	class bravo_gm_gc_army_uniform_soldier_90_blk : gm_gc_army_uniform_soldier_90_sgr
	{
		displayName = "Field Service Uniform (UTV, Black)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_blk_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_90_blk_unit";
		};
	};
	class bravo_gm_gc_army_uniform_soldier_90_egy : gm_gc_army_uniform_soldier_90_sgr
	{
		displayName = "Field Service Uniform (UTV, Egyptian Desert Rocks)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_egy_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_90_egy_unit";
		};
	};
	
	class gm_gc_army_uniform_soldier_rolled_90_sgr : gm_gc_uniform_soldier_90_base
	{
		class ItemInfo;
	};
	class bravo_gm_gc_army_uniform_soldier_rolled_90_khk : gm_gc_army_uniform_soldier_rolled_90_sgr
	{
		displayName = "Field Service Uniform (UTV, Rolled, Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_khk_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_rolled_90_khk_unit";
		};
	};
	class bravo_gm_gc_army_uniform_soldier_rolled_90_win : gm_gc_army_uniform_soldier_rolled_90_sgr
	{
		displayName = "Field Service Uniform (UTV, Rolled, White)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_win_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_rolled_90_win_unit";
		};
	};
	class bravo_gm_gc_army_uniform_soldier_rolled_90_blk : gm_gc_army_uniform_soldier_rolled_90_sgr
	{
		displayName = "Field Service Uniform (UTV, Rolled, Black)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_blk_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_rolled_90_blk_unit";
		};
	};
	class bravo_gm_gc_army_uniform_soldier_rolled_90_egy : gm_gc_army_uniform_soldier_rolled_90_sgr
	{
		displayName = "Field Service Uniform (UTV, Rolled, Egyptian Desert Rocks)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gc_uniform_90_egy_co"};
			uniformClass = "bravo_gm_gc_army_uniform_soldier_rolled_90_egy_unit";
		};
	};
	
	class gm_dk_uniform_soldier_84_base;
	class gm_dk_army_uniform_soldier_84_oli : gm_dk_uniform_soldier_84_base
	{
		class ItemInfo;
	};
	class bravo_dk_army_uniform_soldier_84_oli_noflag : gm_dk_army_uniform_soldier_84_oli
	{
		displayName = "Combat Uniform M/84 (Olive, no flag)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_dk_characters\data\uniform\gm_dk_uniform_soldier_84_oli_co",""};
			uniformClass = "bravo_dk_army_uniform_soldier_84_oli_noflag_unit";
		};
	};
	class bravo_dk_army_uniform_soldier_84_mtp : gm_dk_army_uniform_soldier_84_oli
	{
		displayName = "Combat Uniform M/84 (MTP)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_mtp_co",""};
			uniformClass = "bravo_dk_army_uniform_soldier_84_mtp_unit";
		};
	};
	class bravo_dk_army_uniform_soldier_84_mcm : gm_dk_army_uniform_soldier_84_oli
	{
		displayName = "Combat Uniform M/84 (Multicam)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_mcm_co",""};
			uniformClass = "bravo_dk_army_uniform_soldier_84_mcm_unit";
		};
	};
	class bravo_dk_army_uniform_soldier_84_rmc : gm_dk_army_uniform_soldier_84_oli
	{
		displayName = "Combat Uniform M/84 (Multicam RU)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_rmc_co",""};
			uniformClass = "bravo_dk_army_uniform_soldier_84_rmc_unit";
		};
	};
	
	class gm_xx_army_uniform_fighter_01_base;
	class gm_xx_army_uniform_fighter_02_oli : gm_xx_army_uniform_fighter_01_base
	{
		class ItemInfo;
	};
	class bravo_gm_mixed_jeans_dbdu : gm_xx_army_uniform_fighter_02_oli
	{
		displayName = "Mixed Fatigues (Jeans, DBDU)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_dbdu_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
			uniformClass = "bravo_gm_mixed_jeans_dbdu_unit";
		};
	};
	class bravo_gm_mixed_jeans_dcu : gm_xx_army_uniform_fighter_02_oli
	{
		displayName = "Mixed Fatigues (Jeans, DCU)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_dcu_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
			uniformClass = "bravo_gm_mixed_jeans_dcu_unit";
		};
	};
	class bravo_gm_mixed_jeans_des : gm_xx_army_uniform_fighter_02_oli
	{
		displayName = "Mixed Fatigues (Jeans, Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_des_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
			uniformClass = "bravo_gm_mixed_jeans_des_unit";
		};
	};
	class bravo_gm_mixed_jeans_khk : gm_xx_army_uniform_fighter_02_oli
	{
		displayName = "Mixed Fatigues (Jeans, Khaki)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_khk_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
			uniformClass = "bravo_gm_mixed_jeans_khk_unit";
		};
	};
	class bravo_gm_mixed_jeans_blk : gm_xx_army_uniform_fighter_02_oli
	{
		displayName = "Mixed Fatigues (Jeans, Black)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_blk_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
			uniformClass = "bravo_gm_mixed_jeans_blk_unit";
		};
	};
	class bravo_gm_mixed_jeans_win : gm_xx_army_uniform_fighter_02_oli
	{
		displayName = "Mixed Fatigues (Jeans, White)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_win_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
			uniformClass = "bravo_gm_mixed_jeans_win_unit";
		};
	};
	
	class gm_dk_headgear_m96_base;
	class gm_dk_headgear_m96_oli : gm_dk_headgear_m96_base
	{
		class ItemInfo;
	};
	class bravo_gm_headgear_m96_des : gm_dk_headgear_m96_oli
	{
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		displayName = "Combat Helmet M/96 (Tan)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
		};
	};
	
	class gm_xx_army_uniform_fighter_01_oli : gm_xx_army_uniform_fighter_01_base
	{
		class ItemInfo;
	};
	class bravo_gm_mixed_m84_mtp : gm_xx_army_uniform_fighter_01_oli
	{
		displayName = "Mixed Fatigues (MTP)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_mtp_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_04_80_blu_co"};
			uniformClass = "bravo_gm_mixed_m84_mtp_unit";
		};
	};
	class bravo_gm_mixed_m84_win : gm_xx_army_uniform_fighter_01_oli
	{
		displayName = "Mixed Fatigues (White)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_dk_characters\data\uniform\gm_dk_uniform_soldier_84_win_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_04_80_blu_co"};
			uniformClass = "bravo_gm_mixed_m84_win_unit";
		};
	};
	class bravo_gm_mixed_m84_mcm : gm_xx_army_uniform_fighter_01_oli
	{
		displayName = "Mixed Fatigues (Multicam)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_mcm_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_04_80_blu_co"};
			uniformClass = "bravo_gm_mixed_m84_mcm_unit";
		};
	};
	class bravo_gm_mixed_m84_rmc : gm_xx_army_uniform_fighter_01_oli
	{
		displayName = "Mixed Fatigues (Multicam RU)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_rmc_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_04_80_blu_co"};
			uniformClass = "bravo_gm_mixed_m84_rmc_unit";
		};
	};
};