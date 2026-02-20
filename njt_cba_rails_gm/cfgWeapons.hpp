class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail
{
	class CompatibleItems;
};
class asdg_OpticRail1913_short : asdg_OpticRail1913
{};
class asdg_FrontSideRail;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_9MM_SMG : asdg_MuzzleSlot
{
	class CompatibleItems
	{
		gm_suppressor_hknavy_9mm_gry = 1;
		gm_suppressor_kacnavy_9mm_blk = 1;
		gm_suppressor_kacnavysd_9mm_blk = 1;
		gm_suppressor_tgpp_9mm_blk = 1;
	};
};
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot
{
	class CompatibleItems
	{
		gm_suppressor_atec150_762mm_blk = 1;
	};
};
class njt_muzzleslot_762_long : asdg_MuzzleSlot_762
{
	class CompatibleItems : CompatibleItems
	{
		gm_suppressor_atec150_762mm_long_blk = 1;
	};
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot
{
	class CompatibleItems
	{
		gm_suppressor_atec150_556mm_blk = 1;
	};
};
class njt_muzzleslot_556_long : asdg_MuzzleSlot_556
{
	class CompatibleItems : CompatibleItems
	{
		gm_suppressor_atec150_556mm_long_blk = 1;
	};
};

class gm_slotMuzzle_base;
class gm_slotMuzzle_473x33mm : gm_slotMuzzle_base
{
	class CompatibleItems
	{};
};
class CfgWeapons
{	
	class Rifle_Base_F;
	class gm_rifle_base : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class gm_sg550_base : gm_rifle_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class gm_sg550_ris_base : gm_sg550_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class gm_sg542_base : gm_sg550_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	class gm_sg542_ris_base : gm_sg542_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class gm_sg551_base : gm_sg550_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class gm_sg551_ris_base : gm_sg551_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	class gm_sg551_swat_base : gm_sg551_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913
			{};
		};
	};
	
	class gm_m16_base : gm_rifle_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class gm_c7a1_base : gm_m16_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
		};
	};
	
	class gm_hk33_base : gm_rifle_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : njt_MuzzleSlot_556_long
			{};
		};
	};
	class gm_hk33k_base : gm_hk33_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	
	class gm_g36_base : gm_rifle_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	
	class gm_g3_base : gm_rifle_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : njt_MuzzleSlot_762_long
			{};
		};
	};
	class gm_g3ka4_base : gm_g3_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	class gm_g3ka4a1_ris_base : gm_g3ka4_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
			class SideSlot : asdg_FrontSideRail
			{};
		};
	};
	class gm_g3a4_base : gm_g3_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class gm_g3a4a1_ris_base : gm_g3a4_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
			class SideSlot : asdg_FrontSideRail
			{};
		};
	};
	class gm_g3a3_base : gm_g3_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{};
	};
	class gm_g3a3a1_ris_base : gm_g3a3_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class SideSlot : asdg_FrontSideRail
			{};
		};
	};
	class gm_g11_base;
	class gm_g11k2_base : gm_g11_base
	{
		class WeaponSlotsInfo;
	};
	class gm_g11k2_ris_base : gm_g11k2_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot : asdg_OpticRail1913_short
			{};
			class SideSlot : asdg_FrontSideRail
			{};
			class MuzzleSlot : gm_slotMuzzle_473x33mm
			{
				class CompatibleItems : CompatibleItems
				{
					gm_bayonet_g11_blk = 1;
					gm_bayonet_g11_oli = 1;
				};
			};
		};
	};
	class gm_mp5_base : gm_rifle_base
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
			{};
		};
	};
};