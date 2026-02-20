class asdg_SlotInfo;
class asdg_FrontSideRail : asdg_SlotInfo
{
	class CompatibleItems;
};
class Tier1_SR25_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_416_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_M110_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_Mk46Mod0_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_Mk46Mod1_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_Mk48Mod0_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};
class Tier1_Mk48Mod1_Slot : asdg_FrontSideRail
{
	class CompatibleItems : CompatibleItems
	{};
};

class CfgWeapons
{	
	class rhs_weap_m14ebrri_base;
	class rhs_weap_m14ebrri : rhs_weap_m14ebrri_base
	{
		class WeaponSlotsInfo;
	};
	class rhs_weap_sr25 : rhs_weap_m14ebrri
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				compatibleItems[] = {"rhsusf_acc_sr25S","rhsusf_acc_SR25S_wd","rhsusf_acc_SR25S_d","Tier1_SR25S_tan"};
			};
		};
	};
};