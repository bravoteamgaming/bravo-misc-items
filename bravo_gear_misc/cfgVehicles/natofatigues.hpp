	class UK3CB_ION_B_U_TSHIRT_01_URB;
	class bravo_combatuniformn_tactee_ion_mtp_unit : UK3CB_ION_B_U_TSHIRT_01_URB
	{
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_grey_co.paa"};
	};
	class bravo_combatuniformn_tactee_ion_mtpw_unit : UK3CB_ION_B_U_TSHIRT_01_URB
	{
		hiddenSelectionsTextures[] = {"a3\Characters_F_Enoch\Uniforms\Data\clothing_mcam_wdl_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_blue_co.paa"};
	};
	class bravo_combatuniformn_tactee_ion_mtpt_unit : UK3CB_ION_B_U_TSHIRT_01_URB
	{
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_green_01_co.paa"};
	};
	class bravo_combatuniformn_tactee_ion_mtpd_unit : UK3CB_ION_B_U_TSHIRT_01_URB
	{
		hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\data\NATO\clothing1_desert_CO.paa","\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_basicbody_brown_02_co.paa"};
	};
	
	class B_Soldier_F;
	class bravo_combatfatigues_sgg_unit : B_Soldier_F
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"};
	};
	class bravo_combatfatigues_wdl_unit : bravo_combatfatigues_sgg_unit
	{
		hiddenSelectionsTextures[] = {"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"};
	};
	
	class B_Soldier_SL_F;
	class bravo_combatfatigues_recon_sgg_unit : B_Soldier_SL_F
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"};
	};
	class bravo_combatfatigues_recon_wdl_unit : bravo_combatfatigues_recon_sgg_unit
	{
		hiddenSelectionsTextures[] = {"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"};
	};
	
	// ============================= WS TSHIRT
	class bravo_combatfatigues_tshirt_base_ws_unit : B_Soldier_F
	{
		scope = 1;
		hiddenSelections[] = {"camo", "camo1", "camo2"};
		model = "\lxws\characters_1_f_lxws\uniform\b_soldier_01_shirt_lxws.p3d";
	};
	class bravo_combatfatigues_tshirt_mtp_ws_unit : bravo_combatfatigues_tshirt_base_ws_unit
	{
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa", "a3\Characters_F_Enoch\Uniforms\Data\I_L_Uniform_01_tshirt_olive_1_co.paa"};
	};
	class bravo_combatfatigues_tshirt_mtp_vladpat_ws_unit : bravo_combatfatigues_tshirt_base_ws_unit
	{
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa", "\bravo_gear_misc\assets\tshirt_vladpat_co.paa"};
	};
	class bravo_combatfatigues_tshirt_mtpw_ws_unit : bravo_combatfatigues_tshirt_base_ws_unit
	{
		hiddenSelectionsTextures[] = {"a3\Characters_F_Enoch\Uniforms\Data\clothing_mcam_wdl_co.paa", "\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_khaki_01_co.paa"};
	};
	class bravo_combatfatigues_tshirt_mtpt_ws_unit : bravo_combatfatigues_tshirt_base_ws_unit
	{
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa", "a3\Characters_F_Enoch\Uniforms\Data\I_L_Uniform_01_tshirt_olive_1_co.paa"};
	};
	class bravo_combatfatigues_tshirt_mtpd_ws_unit : bravo_combatfatigues_tshirt_base_ws_unit
	{
		hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\data\NATO\clothing1_desert_CO.paa", "\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_brown_03_co.paa"};
	};
	class bravo_combatfatigues_tshirt_des_ws_unit : bravo_combatfatigues_tshirt_base_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_combat_uniform_des_03_co.paa", "\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_brown_03_co.paa"};
	};
	class bravo_combatfatigues_tshirt_oli_ws_unit : bravo_combatfatigues_tshirt_base_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_combat_uniform_grn_02_co.paa", "a3\Characters_F_Enoch\Uniforms\Data\I_L_Uniform_01_tshirt_olive_1_co.paa"};
	};
	class bravo_combatfatigues_tshirt_blk_ws_unit : bravo_combatfatigues_tshirt_base_ws_unit
	{
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_ION\data\ion_combat_uniform_blk_03_co.paa", "\UK3CB_Factions\addons\UK3CB_Factions_MEC\data\mec_tshirt_khaki_01_co.paa"};
	};
	
	