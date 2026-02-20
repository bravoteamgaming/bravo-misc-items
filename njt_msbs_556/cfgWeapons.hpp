
class asdg_MuzzleSlot_556;

class CfgWeapons
{	
	class Rifle_Base_F;
	class arifle_MSBS65_base_F : Rifle_Base_F
	{
		class weaponSlotsInfo;
	};
	class arifle_MSBS65_F : arifle_MSBS65_base_F
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{};
	};
	
	class arifle_MSBS65_GL_base_F : arifle_MSBS65_base_F
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{};
	};
	class arifle_MSBS65_GL_F : arifle_MSBS65_GL_base_F
	{};
	
	class arifle_MSBS65_UBS_base_F : arifle_MSBS65_base_F
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{};
	};
	class arifle_MSBS65_UBS_F : arifle_MSBS65_UBS_base_F
	{};
	
	class arifle_MSBS65_Mark_base_F : arifle_MSBS65_base_F
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{};
	};
	class arifle_MSBS65_Mark_F : arifle_MSBS65_Mark_base_F
	{};
	
	class njt_msbs_556_mark : arifle_MSBS65_Mark_F
	{
		baseWeapon = "njt_msbs_556_mark";
		displayName = "MSBS Grot-B 556 MR";
		magazines[] = {"30Rnd_556x45_Stanag"};
		magazineWell[] = {"STANAG_556x45", "CBA_556x45_STANAG"};
		recoil = "recoil_spar";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class njt_msbs_556_UBS : arifle_MSBS65_UBS_F
	{
		baseWeapon = "njt_msbs_556_ubs";
		displayName = "MSBS Grot-B 556 SG";
		magazines[] = {"30Rnd_556x45_Stanag"};
		magazineWell[] = {"STANAG_556x45", "CBA_556x45_STANAG"};
		recoil = "recoil_spar";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class njt_msbs_556_gl : arifle_MSBS65_GL_F
	{
		baseWeapon = "njt_msbs_556_gl";
		displayName = "MSBS Grot-B 556 GL";
		magazines[] = {"30Rnd_556x45_Stanag"};
		magazineWell[] = {"STANAG_556x45", "CBA_556x45_STANAG"};
		recoil = "recoil_spar";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class njt_msbs_556 : arifle_MSBS65_F
	{
		baseWeapon = "njt_msbs_556";
		displayName = "MSBS Grot-B 556";
		magazines[] = {"30Rnd_556x45_Stanag"};
		magazineWell[] = {"STANAG_556x45", "CBA_556x45_STANAG"};
		recoil = "recoil_spar";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	
	class njt_msbs_556_camo : njt_msbs_556
	{
		baseWeapon = "njt_msbs_556_camo";
		displayName = "MSBS Grot-B 556 (Camo)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_camo_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
	};
	class njt_msbs_556_black : njt_msbs_556
	{
		baseWeapon = "njt_msbs_556_black";
		displayName = "MSBS Grot-B 556 (Black)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_black_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};
	class njt_msbs_556_sand : njt_msbs_556
	{
		baseWeapon = "njt_msbs_556_sand";
		displayName = "MSBS Grot-B 556 (Sand)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_sand_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
	};
	
	class njt_msbs_556_mark_camo : njt_msbs_556_mark
	{
		baseWeapon = "njt_msbs_556_mark_camo";
		displayName = "MSBS Grot-B 556 MR (Camo)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_Mark_camo_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
	};
	class njt_msbs_556_mark_black : njt_msbs_556_mark
	{
		baseWeapon = "njt_msbs_556_mark_black";
		displayName = "MSBS Grot-B 556 MR (Black)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_Mark_black_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};
	class njt_msbs_556_mark_sand : njt_msbs_556_mark
	{
		baseWeapon = "njt_msbs_556_mark_sand";
		displayName = "MSBS Grot-B 556 MR (Sand)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_Mark_sand_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
	};
	
	class njt_msbs_556_ubs_camo : njt_msbs_556_ubs
	{
		baseWeapon = "njt_msbs_556_ubs_camo";
		displayName = "MSBS Grot-B 556 SG (Camo)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_UBS_camo_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
	};
	class njt_msbs_556_ubs_black : njt_msbs_556_ubs
	{
		baseWeapon = "njt_msbs_556_ubs_black";
		displayName = "MSBS Grot-B 556 SG (Black)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_UBS_black_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};
	class njt_msbs_556_ubs_sand : njt_msbs_556_ubs
	{
		baseWeapon = "njt_msbs_556_ubs_sand";
		displayName = "MSBS Grot-B 556 SG (Sand)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_UBS_sand_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
	};
	
	class njt_msbs_556_gl_camo : njt_msbs_556_gl
	{
		baseWeapon = "njt_msbs_556_gl_camo";
		displayName = "MSBS Grot-B 556 GL (Camo)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_GL_camo_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
	};
	class njt_msbs_556_gl_black : njt_msbs_556_gl
	{
		baseWeapon = "njt_msbs_556_gl_black";
		displayName = "MSBS Grot-B 556 GL (Black)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_GL_black_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};
	class njt_msbs_556_gl_sand : njt_msbs_556_gl
	{
		baseWeapon = "njt_msbs_556_gl_sand";
		displayName = "MSBS Grot-B 556 GL (Sand)";
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_GL_sand_F_ca.paa";
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
	};
};