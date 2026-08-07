	class arifle_CTARS_base_F;
	class arifle_CTAR_GL_base_F;
	class arifle_CTAR_base_F;
	class arifle_CTAR_blk_F : arifle_CTAR_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_CTAR_GL_blk_F : arifle_CTAR_GL_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_CTARS_blk_F : arifle_CTARS_base_F
	{
		class WeaponSlotsInfo;
	};
	
	class bravo_qbz95_545 : arifle_CTAR_blk_F
	{
		baseWeapon = "bravo_qbz95_545";
		displayName = "QBZ-95-545";
		descriptionShort = "Assault rifle<br />Caliber: 5.45x39 mm";
		magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class bravo_qbz95_545_gl : arifle_CTAR_GL_blk_F
	{
		baseWeapon = "bravo_qbz95_545_gl";
		displayName = "QBZ-95-545 GL";
		descriptionShort = "Assault rifle<br />Caliber: 5.45x39 mm";
		magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	class bravo_qjb95_545 : arifle_CTARS_blk_F
	{
		baseWeapon = "bravo_qjb95_545";
		displayName = "QJB-95-545";
		descriptionShort = "Automatic rifle<br />Caliber: 5.45x39 mm";
		magazineWell[] = {"AK_545x39","CBA_545x39_AK","CBA_545x39_RPK"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};
	
	class bravo_qbz95_762 : arifle_CTAR_blk_F
	{
		baseWeapon = "bravo_qbz95_762";
		displayName = "QBZ-95-762";
		descriptionShort = "Assault rifle<br />Caliber: 7.62x39 mm";
		magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite_tracer","rhs_30Rnd_762x39mm_bakelite_89","rhs_30Rnd_762x39mm_bakelite_U"};
		magazineWell[] = {"CBA_762x39_AK", "bravo_762x39_qjb"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	class bravo_qbz95_762_gl : arifle_CTAR_GL_blk_F
	{
		baseWeapon = "bravo_qbz95_762_gl";
		displayName = "QBZ-95-762 GL";
		descriptionShort = "Assault rifle<br />Caliber: 7.62x39 mm";
		magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite_tracer","rhs_30Rnd_762x39mm_bakelite_89","rhs_30Rnd_762x39mm_bakelite_U"};
		magazineWell[] = {"CBA_762x39_AK", "bravo_762x39_qjb"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	class bravo_qjb95_762 : arifle_CTARS_blk_F
	{
		baseWeapon = "bravo_qjb95_762";
		displayName = "QJB-95-762";
		descriptionShort = "Automatic rifle<br />Caliber: 7.62x39 mm";
		magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite_tracer","rhs_30Rnd_762x39mm_bakelite_89","rhs_30Rnd_762x39mm_bakelite_U"};
		magazineWell[] = {"CBA_762x39_AK", "bravo_762x39_qjb"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_762
			{};
		};
	};
	
	class DMR_07_base_F;
	class srifle_DMR_07_blk_F : DMR_07_base_F
	{
		class WeaponSlotsInfo;
	};
	class bravo_qbu97a : srifle_DMR_07_blk_F
	{
		baseWeapon = "bravo_qbu97a";
		displayName = "QBU-97A";
		descriptionShort = "Marksman rifle<br />Caliber: 5.56x45 mm";
		magazines[] = {"bravo_20rnd_556x45mm_qbu97a_m855a1"};
		magazineWell[] = {"bravo_556x45_qbu97a"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{};
		};
	};