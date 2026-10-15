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
	};
};
