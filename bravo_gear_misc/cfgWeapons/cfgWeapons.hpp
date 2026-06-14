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
	
	#include "su230.hpp"
	
	#include "fast.hpp"
	
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
	
	#include "mich2000.hpp"
	
	#include "amh.hpp"
	
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
	
	#include "cryeg3.hpp"
	
	#include "combatuniform.hpp"
	
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
	
	#include "slotswaps.hpp"
	
	#include "flakvest.hpp"
	
	#include "m92.hpp"
	
	#include "bdu.hpp"
	
	#include "combatsuit.hpp"
	
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
	
	#include "fsuutv.hpp"
	
	class gm_dk_uniform_soldier_84_base;
	class gm_dk_army_uniform_soldier_84_oli : gm_dk_uniform_soldier_84_base
	{
		class ItemInfo;
	};
	class bravo_dk_army_uniform_soldier_84_oli_noflag : gm_dk_army_uniform_soldier_84_oli
	{
		useGMuniformDetails = 0;
		displayName = "Combat Uniform M/84 (Olive, no flag)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_dk_characters\data\uniform\gm_dk_uniform_soldier_84_oli_co",""};
			uniformClass = "bravo_dk_army_uniform_soldier_84_oli_noflag_unit";
		};
	};
	class bravo_dk_army_uniform_soldier_84_mtp : bravo_dk_army_uniform_soldier_84_oli_noflag
	{
		displayName = "Combat Uniform M/84 (MTP)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_mtp_co",""};
			uniformClass = "bravo_dk_army_uniform_soldier_84_mtp_unit";
		};
	};
	class bravo_dk_army_uniform_soldier_84_mcm : bravo_dk_army_uniform_soldier_84_oli_noflag
	{
		displayName = "Combat Uniform M/84 (Multicam)";
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_mcm_co",""};
			uniformClass = "bravo_dk_army_uniform_soldier_84_mcm_unit";
		};
	};
	class bravo_dk_army_uniform_soldier_84_rmc : bravo_dk_army_uniform_soldier_84_oli_noflag
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
	
	class gm_ge_vest_sov_80_oli;
	class bravo_gm_vest_sov_des : gm_ge_vest_sov_80_oli
	{
		displayName = "Special Operations Vest (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_vest_sov_des_co"};
	};
	class bravo_gm_vest_sov_khk : gm_ge_vest_sov_80_oli
	{
		displayName = "Special Operations Vest (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_vest_sov_khk_co"};
	};
	
	class gm_ge_vest_sov_armor_80_oli;
	class bravo_gm_vest_sov_armor_des : gm_ge_vest_sov_armor_80_oli
	{
		displayName = "Special Operations Vest (Armor, Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_vest_sov_des_co", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_type3_oli_co"};
	};
	class bravo_gm_vest_sov_armor_khk : gm_ge_vest_sov_armor_80_oli
	{
		displayName = "Special Operations Vest (Armor, Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_vest_sov_khk_co", "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_type3_oli_co"};
	};
	
	#include "boonie.hpp"
	
	#include "pasgt.hpp"
	
	#include "operator.hpp"
	
	#include "modularcarrier.hpp"
};