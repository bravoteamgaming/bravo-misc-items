class cfgVehicles
{
	class tf_rt1523g_big;
	class uk3cb_baf_b_rt1523g_base : tf_rt1523g_big
	{
		mass = 50;
	};
	class tf_anarc210;
	class uk3cb_baf_b_anarc210_base : tf_anarc210
	{
		mass = 50;
	};
	class gm_backpack_base;
	class gm_ge_backpack_sem35_base : gm_backpack_base
	{
		mass = 50;
	};
	class gm_gc_backpackr105m_base : gm_backpack_base
	{
		mass = 50;
	};
	class tfar_anprc155;
	class uk3cb_b_i_radio_backpack : tfar_anprc155
	{
		mass = 50;
	};
	class tfar_mr3000;
	class uk3cb_b_o_radio_backpack : tfar_mr3000
	{
		mass = 50;
	};
	class B_SPE_AssaultPack_Base;
	class B_SPE_US_Radio : B_SPE_AssaultPack_Base
	{
		scope = 1;
	};
	class B_SPE_US_Radio_alt : B_SPE_US_Radio
	{};
	class B_SPE_US_Radio_packboard : B_SPE_US_Radio
	{};
	class B_SPE_US_Radio_packboard_light : B_SPE_US_Radio_packboard
	{};
	class njt_B_SPE_US_Radio : B_SPE_US_Radio
	{
		scope = 2;
		mass = 50;
		class transportItems
		{};
	};
	class njt_B_SPE_US_Radio_alt : B_SPE_US_Radio_alt
	{
		scope = 2;
		mass = 50;
		class transportItems
		{};
	};
	class njt_B_SPE_US_Radio_packboard : B_SPE_US_Radio_packboard
	{
		scope = 2;
		mass = 50;
		class transportItems
		{};
	};
	class njt_B_SPE_US_Radio_packboard_light : B_SPE_US_Radio_packboard_light
	{
		scope = 2;
		mass = 50;
		class transportItems
		{};
	};
	
	class rhs_6sh122_gloves_v2_base;
	class njt_6sh122_gloves_olive_unit : rhs_6sh122_gloves_v2_base
	{
		uniformClass = "njt_6sh122_gloves_olive";
		hiddenSelectionsTextures[] = {"\njt_gear_misc\assets\6sh122_olive_top_co.paa","\njt_gear_misc\assets\6sh122_olive_bottom_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};
	};
	class rhsusf_socom_g3_blk_uniform;
	class njt_cryeg3_bravocam_unit : rhsusf_socom_g3_blk_uniform
	{
		uniformClass = "njt_cryeg3_bravocam";
		hiddenSelectionsTextures[] = {"\njt_gear_misc\assets\gen3_bravocam_co.paa","rhsusf\addons\rhsusf_infantry2\data\Merrells_blk_co.paa","rhsusf\addons\rhsusf_infantry2\data\Mechanix_black_co.paa"};
	};
	
	class i_soldier_universal_f;
	class njt_combatuniform_tactee_aaf_ws_unit : i_soldier_universal_f
	{
		model = "\lxws\characters_1_f_lxws\uniform\U_CombatUniform_01_tee_lxws.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_co.paa", "\a3\characters_f\common\data\basicbody_green_co.paa"};
	};
	class njt_combatuniform_tactee_ion_dpm_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_WEI\data\wei_infantry_uniform_jumper_02_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_green_brown_co.paa"};
	};
	class njt_combatuniform_tactee_ion_ddpm_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_ddpm_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_brown_01_co.paa"};
	};
	class njt_combatuniform_tactee_ion_marpatwd_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Equipment\uniforms\data\militia\infantry_uniform_mar_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_green_brown_co.paa"};
	};
	class njt_combatuniform_tactee_ion_marpatd_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Equipment\uniforms\data\militia\infantry_uniform_mar_des_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_brown_01_co.paa"};
	};
	class njt_combatuniform_tactee_mtp_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\mtp_uk_basic.paa","\a3\characters_f\common\data\basicbody_green_co.paa"};
	};
	class njt_combatuniform_tactee_ddpm_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_ddpm_co.paa","\a3\characters_f\common\data\basicbody_brown_co.paa"};
	};
	class njt_combatuniform_tactee_dpmw_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_dpm_co.paa","a3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_co.paa"};
	};
	class njt_combatuniform_tactee_dpmj_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_dpm_j_co.paa","a3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_co.paa"};
	};
	class njt_combatuniform_tactee_dpmt_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_cs95_dpm_co.paa","a3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_co.paa"};
	};
	class njt_combatuniform_tactee_dpmtrop_ws_unit : njt_combatuniform_tactee_aaf_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_dpm_trop_co.paa","a3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_co.paa"};
	};
	class njt_combatuniform_tactee_ion_mtp_ws_unit : njt_combatuniform_tactee_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\mtp_uk_basic.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_black_co.paa"};
	};
	
	class njt_combatuniform_tshirt_ion_dpm_ws_unit : i_soldier_universal_f
	{
		model = "\lxws\characters_1_f_lxws\uniform\U_CombatUniform_01_tshirt_lxws.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_WEI\data\wei_infantry_uniform_jumper_02_co.paa", "\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_jeans_tshirt_grn_01_co.paa"};
	};
	class njt_combatuniform_tshirt_ion_ddpm_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_ddpm_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_jeans_tshirt_desert_01_co.paa"};
	};
	class njt_combatuniform_tshirt_ion_marpatwd_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Equipment\uniforms\data\militia\infantry_uniform_mar_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_jeans_tshirt_grn_01_co.paa"};
	};
	class njt_combatuniform_tshirt_ion_marpatd_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Equipment\uniforms\data\militia\infantry_uniform_mar_des_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_jeans_tshirt_desert_01_co.paa"};
	};
	class njt_combatuniform_tshirt_mtp_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\mtp_uk_basic.paa","a3\Characters_F_Enoch\Uniforms\Data\I_L_Uniform_01_tshirt_olive_1_co.paa"};
	};
	class njt_combatuniform_tshirt_ddpm_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_ddpm_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_brown_03_co.paa"};
	};
	class njt_combatuniform_tshirt_dpmw_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_dpm_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_khaki_01_co.paa"};
	};
	class njt_combatuniform_tshirt_dpmj_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_dpm_j_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_khaki_01_co.paa"};
	};
	class njt_combatuniform_tshirt_dpmt_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_cs95_dpm_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_khaki_01_co.paa"};
	};
	class njt_combatuniform_tshirt_dpmtrop_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_dpm_trop_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_khaki_01_co.paa"};
	};
	class njt_combatuniform_tshirt_ion_mtp_ws_unit : njt_combatuniform_tshirt_ion_dpm_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\mtp_uk_basic.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_jeans_tshirt_blu_01_co.paa"};
	};
	
	class UK3CB_ION_B_U_TSHIRT_01_URB;
	class njt_combatuniformn_tactee_ion_mtp_unit : UK3CB_ION_B_U_TSHIRT_01_URB
	{
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_grey_co.paa"};
	};
	class njt_combatuniformn_tactee_ion_mtpw_unit : UK3CB_ION_B_U_TSHIRT_01_URB
	{
		hiddenSelectionsTextures[] = {"a3\Characters_F_Enoch\Uniforms\Data\clothing_mcam_wdl_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_blue_co.paa"};
	};
	class njt_combatuniformn_tactee_ion_mtpt_unit : UK3CB_ION_B_U_TSHIRT_01_URB
	{
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_green_01_co.paa"};
	};
	class njt_combatuniformn_tactee_ion_mtpd_unit : UK3CB_ION_B_U_TSHIRT_01_URB
	{
		hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\data\NATO\clothing1_desert_CO.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_brown_02_co.paa"};
	};
};