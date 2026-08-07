	class arifle_AK12_base_F;
	class arifle_AK12_GL_base_F;
	class arifle_AK12U_base_F;
	class arifle_RPK12_base_F;
	class arifle_AK12_F : arifle_AK12_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12_GL_F : arifle_AK12_GL_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12U_F : arifle_AK12U_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_RPK12_F : arifle_RPK12_base_F
	{
		class WeaponSlotsInfo;
	};
	
	class bravo_type215 : arifle_AK12_F
	{
		baseWeapon = "bravo_type215";
		displayName = "Type 215";
		descriptionShort = "Assault rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_gl : arifle_AK12_GL_F
	{
		baseWeapon = "bravo_type215_gl";
		displayName = "Type 215 GL";
		descriptionShort = "Assault rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_k : arifle_AK12U_F
	{
		baseWeapon = "bravo_type215_k";
		displayName = "Type 215 Carbine";
		descriptionShort = "Carbine<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_lsw : arifle_RPK12_F
	{
		baseWeapon = "bravo_type215_lsw";
		displayName = "Type 215 LSW";
		descriptionShort = "Automatic rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar_lsw";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	
	class arifle_AK12_arid_F : arifle_AK12_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12_GL_arid_F : arifle_AK12_GL_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12U_arid_F : arifle_AK12U_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_RPK12_arid_F : arifle_RPK12_base_F
	{
		class WeaponSlotsInfo;
	};
	
	class bravo_type215_arid : arifle_AK12_arid_F
	{
		baseWeapon = "bravo_type215_arid";
		displayName = "Type 215 (Arid)";
		descriptionShort = "Assault rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_gl_arid : arifle_AK12_GL_arid_F
	{
		baseWeapon = "bravo_type215_gl_arid";
		displayName = "Type 215 GL (Arid)";
		descriptionShort = "Assault rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_k_arid : arifle_AK12U_arid_F
	{
		baseWeapon = "bravo_type215_k_arid";
		displayName = "Type 215 Carbine (Arid)";
		descriptionShort = "Carbine<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_lsw_arid : arifle_RPK12_arid_F
	{
		baseWeapon = "bravo_type215_lsw_arid";
		displayName = "Type 215 LSW (Arid)";
		descriptionShort = "Automatic rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar_lsw";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	
	class arifle_AK12_lush_F : arifle_AK12_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12_GL_lush_F : arifle_AK12_GL_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12U_lush_F : arifle_AK12U_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_RPK12_lush_F : arifle_RPK12_base_F
	{
		class WeaponSlotsInfo;
	};
	
	class bravo_type215_lush : arifle_AK12_lush_F
	{
		baseWeapon = "bravo_type215_lush";
		displayName = "Type 215 (Lush)";
		descriptionShort = "Assault rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_gl_lush : arifle_AK12_GL_lush_F
	{
		baseWeapon = "bravo_type215_gl_lush";
		displayName = "Type 215 GL (Lush)";
		descriptionShort = "Assault rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_k_lush : arifle_AK12U_lush_F
	{
		baseWeapon = "bravo_type215_k_lush";
		displayName = "Type 215 Carbine (Lush)";
		descriptionShort = "Carbine<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};
	class bravo_type215_lsw_lush : arifle_RPK12_lush_F
	{
		baseWeapon = "bravo_type215_lsw_lush";
		displayName = "Type 215 LSW (Lush)";
		descriptionShort = "Automatic rifle<br />Caliber: 5.8x42 mm";
		magazineWell[] = {"CTAR_580x42","CTAR_580x42_Large","CBA_580x42_TYPE95","CBA_580x42_TYPE95_XL"};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_Tracer_F"};
		recoil = "recoil_spar_lsw";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{};
		};
	};