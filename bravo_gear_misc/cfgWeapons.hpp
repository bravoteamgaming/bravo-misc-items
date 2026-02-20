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
};