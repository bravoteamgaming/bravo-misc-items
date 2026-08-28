
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
	class bravo_nvg_binoculars : UK3CB_Earpiece_NVG
	{
		displayName = "Binoculars";
		author = "Heavy Ordnance Works";
		DLC = "SPE";
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Weapons\Binoculars\Gear_Binocular_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		model = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Binoculars.p3d";
		class ItemInfo
		{
			mass = 4;
			modelOff = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Binoculars.p3d";
			uniformModel = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Binoculars.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
		};
	};
	class bravo_nvg_cigar_moza : UK3CB_Earpiece_NVG
	{
		displayName = "Cigar (Moza de Trujillo)";
		author = "Heavy Ordnance Works";
		DLC = "SPE";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Facewear\G_Cigars_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		model = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigar_Moza.p3d";
		class ItemInfo
		{
			mass = 1;
			modelOff = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigar_Moza.p3d";
			uniformModel = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigar_Moza.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
		};
	};
	class bravo_nvg_cigarette_belomorkanal : UK3CB_Earpiece_NVG
	{
		displayName = "Cigarette (Belomorkanal)";
		author = "Heavy Ordnance Works";
		DLC = "SPE";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Facewear\G_Cigars_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		model = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Belomorkanal.p3d";
		class ItemInfo
		{
			mass = 1;
			modelOff = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Belomorkanal.p3d";
			uniformModel = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Belomorkanal.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
		};
	};
	class bravo_nvg_cigarette_grundstein : UK3CB_Earpiece_NVG
	{
		displayName = "Cigarette (Grundstein)";
		author = "Heavy Ordnance Works";
		DLC = "SPE";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Facewear\G_Cigars_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		model = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Grundstein.p3d";
		class ItemInfo
		{
			mass = 1;
			modelOff = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Grundstein.p3d";
			uniformModel = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Grundstein.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
		};
	};
	class bravo_nvg_cigarette_strike_outs : UK3CB_Earpiece_NVG
	{
		displayName = "Cigarette (Strike-Outs)";
		author = "Heavy Ordnance Works";
		DLC = "SPE";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Facewear\G_Cigars_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		model = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Strike_Outs.p3d";
		class ItemInfo
		{
			mass = 1;
			modelOff = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Strike_Outs.p3d";
			uniformModel = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Cigarette_Strike_Outs.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
		};
	};
	class bravo_nvg_pipe_sir_winston : UK3CB_Earpiece_NVG
	{
		displayName = "Pipe (Sir Winston)";
		author = "Heavy Ordnance Works";
		DLC = "SPE";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Facewear\G_Pipe_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		model = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Pipe_Sir_Winston.p3d";
		class ItemInfo
		{
			mass = 1;
			modelOff = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Pipe_Sir_Winston.p3d";
			uniformModel = "\WW2\SPE_Assets_m\Characters\Headgear_m\SPE_Pipe_Sir_Winston.p3d";
			hmdType = 0;
			type = 616;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
		};
	};