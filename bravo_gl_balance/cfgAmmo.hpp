class CfgAmmo
{
	/*
	class rhs_g_vog25 :
	
	class rhs_g_vog25p :
	
	class g_40mm_he :
	
	class gm_grenade_40x47mm_he_ngo74 :
	
	class rhs_ammo_m397 :
	
	class rhsusf_40mm_he :
	*/
	
	class g_40mm_he;
	class bravo_40mm_he_gl_nofrag : g_40mm_he
	{
		ace_frag_skip = 1;
	};
	class bravo_40mm_he_gl_nerf : g_40mm_he
	{
		ace_frag_metal = 150;
		hit = 40;
		indirectHit = 4;
		indirectHitRange = 5;
	};
};