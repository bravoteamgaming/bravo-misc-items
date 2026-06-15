class CfgWeapons
{	
	class kat_ifak;
	class bravo_ifak : kat_ifak
	{
		displayName = "Bravo IFAK";
	};
	
	class kat_mfak;
	class bravo_mfak_ww2 : kat_mfak
	{
		displayName = "Bravo MFAK (WW2)";
	};
	class bravo_mfak_early : kat_mfak
	{
		displayName = "Bravo MFAK (Post-War)";
	};
	class bravo_mfak_modern : kat_mfak
	{
		displayName = "Bravo MFAK (Modern)";
	};
	
	class kat_afak;
	class bravo_afak_ww2 : kat_afak
	{
		displayName = "Bravo AFAK (WW2)";
	};
	class bravo_afak_early : kat_afak
	{
		displayName = "Bravo AFAK (Post-War)";
	};
	class bravo_afak_modern : kat_afak
	{
		displayName = "Bravo AFAK (Modern)";
	};
	
	class bvt_itemcore;
	class bvt_item_kitkat : bvt_itemcore
	{
		class ItemInfo;
	};
	class bravo_kitkatpack : bvt_item_kitkat
	{
		displayName = "KitKat Multipack";
		bravo_fakContents = "[['bvt_item_kitkat', 4]]";
		descriptionShort = "This neatly wrapped bundle can be unpacked into several refreshing treats.";
		class ItemInfo : ItemInfo
		{
			mass = 4;
		};
	};
};