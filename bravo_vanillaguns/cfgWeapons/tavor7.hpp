	class Tavor_base_F;
	class arifle_TRG20_F : Tavor_base_F
	{
		class single;
		class fullauto;
		class weaponSlotsInfo;
		class ace_burst_far;
		class fullauto_medium;
		class single_medium_optics1;
		class single_medium_optics2;
	};
	
	class bravo_tavor_7 : arifle_TRG20_F
	{
		baseWeapon = "bravo_tavor_7";
		displayName = "Tavor 7";
		magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk"};
		magazineWell[] = {"CBA_762x51_SCAR"};
		recoil = "rhs_recoil_fnfal";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			mass = 72;
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
		class single : single
		{
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet"};
			};
			class StandardSound {
				soundSetShot[] = {"RHSUSF_xm2010_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
			};
		};
		class fullauto : fullauto
		{
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet"};
			};
			class StandardSound {
				soundSetShot[] = {"RHSUSF_xm2010_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
			};
		};
		class ace_burst_far : ace_burst_far
		{
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet"};
			};
			class StandardSound {
				soundSetShot[] = {"RHSUSF_xm2010_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
			};
		};
		class fullauto_medium : fullauto_medium
		{
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet"};
			};
			class StandardSound {
				soundSetShot[] = {"RHSUSF_xm2010_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
			};
		};
		class single_medium_optics1 : single_medium_optics1
		{
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet"};
			};
			class StandardSound {
				soundSetShot[] = {"RHSUSF_xm2010_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
			};
		};
		class single_medium_optics2 : single_medium_optics2
		{
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet"};
			};
			class StandardSound {
				soundSetShot[] = {"RHSUSF_xm2010_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet"};
			};
		};
	};
	class bravo_tavor_7_black : bravo_tavor_7
	{
		baseWeapon = "bravo_tavor_7_black";
		displayName = "Tavor 7 (Black)";
		hiddenSelectionsTextures[] = {"\bravo_vanillaguns\assets\tar21_base_blk_co"};
	};
	
	/*
	class bravo_fort224_545 : arifle_TRG20_F
	{
		baseWeapon = "bravo_fort224_545";
		displayName = "Fort-224 545";
		magazines[] = {"30Rnd_545x39_Mag_F"};
		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK"};
	};
	class bravo_fort224_545_blk : bravo_fort224_545
	{
		baseWeapon = "bravo_fort224_545_blk";
		displayName = "Fort-224 545 (Black)";
		hiddenSelectionsTextures[] = {"\bravo_vanillaguns\assets\tar21_base_blk_co"};
	};
	*/
	
	class bravo_tar21c_blk : arifle_TRG20_F
	{
		baseWeapon = "bravo_tar21c_blk";
		displayName = "CTAR-21 (Black)";
		hiddenSelectionsTextures[] = {"\bravo_vanillaguns\assets\tar21_base_blk_co"};
	};
	
	class arifle_TRG21_F : Tavor_base_F
	{};
	class bravo_tar21_blk : arifle_TRG21_F
	{
		baseWeapon = "bravo_tar21_blk";
		displayName = "TAR-21 (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\bravo_vanillaguns\assets\tar21_base_blk_co"};
	};
	
	/*
	class bravo_fort221_545 : arifle_TRG21_F
	{
		baseWeapon = "bravo_fort221_545";
		displayName = "Fort-221 545";
		hiddenSelections[] = {"camo"};
		magazines[] = {"30Rnd_545x39_Mag_F"};
		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK"};
	};
	class bravo_fort221_545_blk : bravo_fort221_545
	{
		baseWeapon = "bravo_fort221_545_blk";
		displayName = "Fort-221 545 (Black)";
		hiddenSelectionsTextures[] = {"\bravo_vanillaguns\assets\tar21_base_blk_co"};
	};
	*/
	
	class arifle_TRG21_GL_F : arifle_TRG21_F
	{};
	class bravo_tar21_gl_blk : arifle_TRG21_GL_F
	{
		baseWeapon = "bravo_tar21_gl_blk";
		displayName = "GTAR-21 EGLM (Black)";
		hiddenSelectionsTextures[] = {"\bravo_vanillaguns\assets\tar21_base_blk_co","\a3\weapons_f\rifles\trg20\data\tar21_eglm_co.paa","\a3\weapons_f\data\gl_holo_co.paa"};
	};
	
	/*
	class bravo_fort221_545_gl : arifle_TRG21_GL_F
	{
		baseWeapon = "bravo_fort221_545_gl";
		displayName = "Fort-221 545 EGLM";
		magazines[] = {"30Rnd_545x39_Mag_F"};
		magazineWell[] = {"CBA_545x39_AK", "CBA_545x39_RPK"};
	};
	class bravo_fort221_545_gl_blk : bravo_fort221_545_gl
	{
		baseWeapon = "bravo_fort221_545_gl_blk";
		displayName = "Fort-221 545 EGLM (Black)";
		hiddenSelectionsTextures[] = {"\bravo_vanillaguns\assets\tar21_base_blk_co","\a3\weapons_f\rifles\trg20\data\tar21_eglm_co.paa","\a3\weapons_f\data\gl_holo_co.paa"};
	};
	*/