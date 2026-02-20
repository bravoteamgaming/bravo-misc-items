
class asdg_MuzzleSlot_762;

class CfgWeapons
{	
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
	
	class njt_tavor_7 : arifle_TRG20_F
	{
		baseWeapon = "njt_tavor_7";
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
};