
class asdg_MuzzleSlot_65;

class CfgWeapons
{	
	class uk3cb_acr_base;
	class uk3cb_acr_crew : uk3cb_acr_base
	{
		class weaponSlotsInfo;
	};
	
	class uk3cb_acr_rifle : uk3cb_acr_crew
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{};
	};
	class uk3cb_acr_rifle_long : uk3cb_acr_crew
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{};
	};
	class uk3cb_acr_carbine : uk3cb_acr_crew
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{};
	};
	class uk3cb_acr_carbine_ugl : uk3cb_acr_crew
	{
		class weaponSlotsInfo : weaponSlotsInfo
		{};
	};
	
	class bravo_acr_68_crew : uk3cb_acr_crew
	{
		baseWeapon = "bravo_acr_68_crew";
		displayName = "Remington ACR 6.8mm (Compact)";
		magazines[] = {"bravo_30rnd_68_acr_fmj"};
		magazineWell[] = {"CBA_68SPC_STANAG", "CBA_68SPC_STANAG_L", "CBA_68SPC_STANAG_XL", "CBA_68x43_ACR"};
		recoil = "recoil_ktbc";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_65
			{};
		};
	};
	class bravo_acr_68_rifle : uk3cb_acr_rifle
	{
		baseWeapon = "bravo_acr_68_rifle";
		displayName = "Remington ACR 6.8mm";
		magazines[] = {"bravo_30rnd_68_acr_fmj"};
		magazineWell[] = {"CBA_68SPC_STANAG", "CBA_68SPC_STANAG_L", "CBA_68SPC_STANAG_XL", "CBA_68x43_ACR"};
		recoil = "recoil_ktb";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_65
			{};
		};
	};
	class bravo_acr_68_rifle_long : uk3cb_acr_rifle_long
	{
		baseWeapon = "bravo_acr_68_rifle_long";
		displayName = "Remington ACR 6.8mm (Long)";
		magazines[] = {"bravo_30rnd_68_acr_fmj"};
		magazineWell[] = {"CBA_68SPC_STANAG", "CBA_68SPC_STANAG_L", "CBA_68SPC_STANAG_XL", "CBA_68x43_ACR"};
		recoil = "recoil_ktb";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_65
			{};
		};
	};
	class bravo_acr_68_carbine : uk3cb_acr_carbine
	{
		baseWeapon = "bravo_acr_68_carbine";
		displayName = "Remington ACR 6.8mm (Carbine)";
		magazines[] = {"bravo_30rnd_68_acr_fmj"};
		magazineWell[] = {"CBA_68SPC_STANAG", "CBA_68SPC_STANAG_L", "CBA_68SPC_STANAG_XL", "CBA_68x43_ACR"};
		recoil = "recoil_ktbc";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_65
			{};
		};
	};
	class bravo_acr_68_carbine_ugl : uk3cb_acr_carbine_ugl
	{
		baseWeapon = "bravo_acr_68_carbine_ugl";
		displayName = "Remington ACR 6.8mm M203 (Carbine)";
		magazines[] = {"bravo_30rnd_68_acr_fmj"};
		magazineWell[] = {"CBA_68SPC_STANAG", "CBA_68SPC_STANAG_L", "CBA_68SPC_STANAG_XL", "CBA_68x43_ACR"};
		recoil = "recoil_ktb";
		class weaponSlotsInfo : weaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_65
			{};
		};
	};
};