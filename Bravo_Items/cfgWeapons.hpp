class CfgWeapons {
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class VestItem;

	class BVT_ItemCore: CBA_MiscItem
	{
		scope = 1;
		displayName = "BVT Dummy Item";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_khaki_specops_UK_CA.paa";
		descriptionShort = "";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class BVT_Item_Intelligence: BVT_ItemCore
	{
		scope = 1;
		displayName = "Intelligence";
		descriptionShort = "A piece of intelligence.";
	};
	class BVT_Item_Kitkat: BVT_ItemCore
	{
		scope = 2;
		displayName = "KitKat Bar";
		picture = "\Bravo_Items\ico\kitkat";
		descriptionShort = "A chocolate-covered wafer bar confection produced globally by Nestlé. 4 finger variety.";
	};
};