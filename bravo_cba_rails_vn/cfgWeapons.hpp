class CfgWeapons
{		
	class UGL_F;
	class rifle_base_F;
	class vn_rifle : rifle_base_F
	{
		class vn_ugl;
		class vn_m79_muzzle : vn_ugl
		{
			magazineWell[] = { "CBA_40mm_M203", "UGL_40x36" };
		};
		class vn_m203_muzzle : vn_ugl
		{
			magazineWell[] = { "CBA_40mm_M203", "UGL_40x36" };
		};
		class vn_xm148_muzzle : vn_ugl
		{
			magazineWell[] = { "CBA_40mm_M203", "UGL_40x36" };
		};
		
		class vnx_ugl;
		class vnx_m203_muzzle : vn_ugl
		{
			magazineWell[] = { "CBA_40mm_M203", "UGL_40x36" };
		};
		class vnx_xm148_muzzle : vn_ugl
		{
			magazineWell[] = { "CBA_40mm_M203", "UGL_40x36" };
		};
		
		class vn_22mm_gl_muzzle;
		class vn_m4956_22mm_gl_muzzle : vn_22mm_gl_muzzle
		{
			magazineWell[] = { "CBA_22mm_NATO_spigot" };
		};
		class vn_m1903_22mm_gl_muzzle : vn_22mm_gl_muzzle
		{
			magazineWell[] = { "bravo_22mm_us_riflegrenade" };
		};
			
		class vn_sks_22mm_gl_muzzle;
		class vn_m1_garand_22mm_gl_muzzle : vn_sks_22mm_gl_muzzle
		{
			magazineWell[] = { "bravo_22mm_us_riflegrenade" };
		};
		class vn_l1a1_22mm_gl_muzzle : vn_m1_garand_22mm_gl_muzzle
		{
			magazineWell[] = { "CBA_22mm_NATO_spigot" };
		};
		
		
		
	};
};
