class cfgVehicles
{
	
	#include "masschanges.hpp"
	
	class rhs_6sh122_gloves_v2_base;
	class bravo_6sh122_gloves_olive_unit : rhs_6sh122_gloves_v2_base
	{
		uniformClass = "bravo_6sh122_gloves_olive";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\6sh122_olive_top_co.paa","\bravo_gear_misc\assets\6sh122_olive_bottom_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};
	};
	
	#include "combatuniform.hpp"
	
	#include "cryeg3.hpp"
	
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
	
	class gm_ge_army_backpack_90_oli;
	class bravo_ge_army_backpack_90_khk : gm_ge_army_backpack_90_oli
	{
		displayName = "Combat Backpack (Khaki)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_khk_co"};
	};
	class bravo_ge_army_backpack_90_des : gm_ge_army_backpack_90_oli
	{
		displayName = "Combat Backpack (Tan)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_splischu_des_co"};
	};
	class bravo_ge_army_backpack_90_mcam : gm_ge_army_backpack_90_oli
	{
		displayName = "Combat Backpack (Multicam)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_backpack_90_mcam_co"};
	};
	class bravo_ge_army_backpack_90_org : gm_ge_army_backpack_90_oli
	{
		displayName = "Combat Backpack (Orange)";
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_backpack_90_org_co"};
	};
	
	#include "bdu.hpp"
	
	#include "combatsuit.hpp"
	
	/*
	class gm_ge_army_rifleman_parka_80_ols;
	class bravo_gm_ge_uniform_parka_80_des_unit : gm_ge_army_rifleman_parka_80_ols
	{
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_parka_80_des_co"};
	};
	class bravo_gm_ge_uniform_parka_80_khk_unit : gm_ge_army_rifleman_parka_80_ols
	{
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_ge_uniform_parka_80_khk_co"};
	};
	*/
	
	#include "fsuutv.hpp"
	
	#include "dk84.hpp"
	
	class gm_xx_army_antitank_hk53a2_rpg7_80_oli;
	class bravo_gm_mixed_jeans_dcu_unit : gm_xx_army_antitank_hk53a2_rpg7_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_dcu_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
	};
	class bravo_gm_mixed_jeans_dbdu_unit : gm_xx_army_antitank_hk53a2_rpg7_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_dbdu_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
	};
	class bravo_gm_mixed_jeans_khk_unit : gm_xx_army_antitank_hk53a2_rpg7_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_khk_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
	};
	class bravo_gm_mixed_jeans_des_unit : gm_xx_army_antitank_hk53a2_rpg7_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_des_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
	};
	class bravo_gm_mixed_jeans_win_unit : gm_xx_army_antitank_hk53a2_rpg7_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_win_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
	};
	class bravo_gm_mixed_jeans_blk_unit : gm_xx_army_antitank_hk53a2_rpg7_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_bdu_blk_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_01_80_blu_co"};
	};
	
	class gm_xx_army_machinegunner_rpk_80_oli;
	class bravo_gm_mixed_m84_mtp_unit : gm_xx_army_machinegunner_rpk_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_mtp_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_04_80_blu_co"};
	};
	class bravo_gm_mixed_m84_win_unit : gm_xx_army_machinegunner_rpk_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\gm\gm_characters\gm_dk_characters\data\uniform\gm_dk_uniform_soldier_84_win_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_04_80_blu_co"};
	};
	class bravo_gm_mixed_m84_mcm_unit : gm_xx_army_machinegunner_rpk_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_mcm_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_04_80_blu_co"};
	};
	class bravo_gm_mixed_m84_rmc_unit : gm_xx_army_machinegunner_rpk_80_oli
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\bravo_gear_misc\assets\bravo_gm_uniform_m84_rmc_co","gm\gm_characters\gm_xx_characters\data\uniform\gm_xx_civ_uniform_man_04_80_blu_co"};
	};
	
	#include "operator.hpp"
	
	class B_Protagonist_VR_F;
	class bravo_vrsuit_plain_unit : B_Protagonist_VR_F
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"","a3\characters_f_bootcamp\common\data\vrsuit_01_co.paa","a3\characters_f_bootcamp\common\data\vrsuit_02_co.paa","a3\characters_f_bootcamp\common\data\vrarmor_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat"};
	};
	class bravo_vrsuit_des_unit : bravo_vrsuit_plain_unit
	{
		hiddenSelectionsTextures[] = {"","\bravo_gear_misc\assets\vrsuit_01_des_co","\bravo_gear_misc\assets\vrsuit_02_des_co","\bravo_gear_misc\assets\vrarmor_des_co"};
	};
};