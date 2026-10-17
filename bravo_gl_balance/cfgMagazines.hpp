class CfgMagazines
{
	class 1Rnd_HE_Grenade_shell;
	class bravo_1rnd_40mm_he_gl_nofrag : 1rnd_he_grenade_shell
	{
		displayName = "40 mm HE Grenade Round (NF)";
		displayNameShort = "HE NF";
		ammo = "bravo_40mm_he_gl_nofrag";
	};
	class bravo_1rnd_40mm_he_gl_nerf : 1rnd_he_grenade_shell
	{
		displayName = "40 mm HE Grenade Round (X)";
		displayNameShort = "HE Exp.";
		ammo = "bravo_40mm_he_gl_nerf";
	};
};

class CfgMagazineWells
{
	class UGL_40x36
	{
		bravo_gl_balance_mags[] = {"bravo_1rnd_40mm_he_gl_nofrag", "bravo_1rnd_40mm_he_gl_nerf"};
	};
};