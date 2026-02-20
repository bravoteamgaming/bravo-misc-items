class CfgWeapons
{

	class Vest_Camo_Base;
	// RHS parents (vest classes)
	class rhs_6sh117_rifleman : Vest_Camo_Base {
		class ItemInfo;
	};
	class rhs_6sh117_mg : rhs_6sh117_rifleman {
		class ItemInfo;
	};
	class rhs_6sh117_grn : rhs_6sh117_rifleman {
		class ItemInfo;
	};
	class rhs_6sh117_nco : rhs_6sh117_rifleman {
		class ItemInfo;
	};
	class rhs_6sh117_nco_azart : rhs_6sh117_rifleman {
		class ItemInfo;
	};
	class rhs_6sh117_ar : rhs_6sh117_rifleman {
		class ItemInfo;
	};
	class rhs_6sh117_svd : rhs_6sh117_rifleman {
		class ItemInfo;
	};
	class rhs_6sh117_val : rhs_6sh117_rifleman {
		class ItemInfo;
	};

	// Shared 6B45 torso protection, NO collar protection
	#define PROT_6B45_COMMON_NO_COLLAR \
	class HitpointsProtectionInfo \
	{ \
		class Abdomen { hitpointName="HitAbdomen"; armor=28; passThrough=0.1; simulation="RHS_Gost_6"; }; \
		class Body { hitpointName="HitBody"; passThrough=0.1; simulation="RHS_Gost_6"; }; \
		class Chest { hitpointName="HitChest"; armor=28; passThrough=0.1; simulation="RHS_Gost_6"; }; \
		class Diaphragm { hitpointName="HitDiaphragm"; armor=28; passThrough=0.1; simulation="RHS_Gost_6"; }; \
		class Neck { hitpointName="HitNeck"; armor=0; passThrough=0.7; simulation="RHS_Gost_3"; }; \
	};

	// =========================
	// HEAVY (MG / GL)
	// =========================

	class bravo_vdv_6sh117_mg_armored : rhs_6sh117_mg
	{
		displayName = "6Sh117 MG (Armored)";
		class ItemInfo : ItemInfo
		{
			mass = 95;
			PROT_6B45_COMMON_NO_COLLAR
		};
	};

	class bravo_vdv_6sh117_grn_armored : rhs_6sh117_grn
	{
		displayName = "6Sh117 VOG (Armored)";
		class ItemInfo : ItemInfo
		{
			mass = 95;
			PROT_6B45_COMMON_NO_COLLAR
		};
	};

	// =========================
	// STANDARD (Rifleman + SL)
	// =========================

	class bravo_vdv_6sh117_rifleman_armored : rhs_6sh117_rifleman
	{
		displayName = "6Sh117 Rifleman (Armored)";
		class ItemInfo : ItemInfo
		{
			mass = 90;
			PROT_6B45_COMMON_NO_COLLAR
		};
	};

	class bravo_vdv_6sh117_nco_armored : rhs_6sh117_nco
	{
		displayName = "6Sh117 Squad Leader (Armored)";
		class ItemInfo : ItemInfo
		{
			mass = 90;
			PROT_6B45_COMMON_NO_COLLAR
		};
	};

	class bravo_vdv_6sh117_nco_azart_armored : rhs_6sh117_nco_azart
	{
		scope = 2; scopeArsenal = 2; scopeCurator = 2;
		displayName = "6Sh117 SL Azart (Armored)";
		class ItemInfo : ItemInfo
		{
			mass = 90;
			PROT_6B45_COMMON_NO_COLLAR
		};
	};

	// =========================
	// LIGHT (SVD / VAL / RPK)
	// =========================

	class bravo_vdv_6sh117_ar_armored : rhs_6sh117_ar
	{
		displayName = "6Sh117 RPK (Armored)";
		class ItemInfo : ItemInfo
		{
			mass = 85;
			PROT_6B45_COMMON_NO_COLLAR
		};
	};

	class bravo_vdv_6sh117_svd_armored : rhs_6sh117_svd
	{
		displayName = "6Sh117 SVD (Armored)";
		class ItemInfo : ItemInfo
		{
			mass = 85;
			PROT_6B45_COMMON_NO_COLLAR
		};
	};

	class bravo_vdv_6sh117_val_armored : rhs_6sh117_val
	{
		displayName = "6Sh117 VAL/VSS (Armored)";
		class ItemInfo : ItemInfo
		{
			mass = 85;
			PROT_6B45_COMMON_NO_COLLAR
		};
	};
};
