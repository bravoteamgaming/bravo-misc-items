class CfgPatches
{
	class bravo_cba_rails_vn
	{
		name = "CBA Rails Vietnam";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"cba_jr", "vn_build_number", "vnx_build_number"};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"

class cfgMagazineWells
{
	class UGL_40x36
	{
		bravo_cba_rails_vn_mags[] = {"vn_40mm_m381_he_mag","vn_40mm_m406_he_mag","vn_40mm_m397_ab_mag","vn_40mm_m433_hedp_mag","vn_40mm_m583_flare_w_mag","vn_40mm_m661_flare_g_mag","vn_40mm_m662_flare_r_mag","vn_40mm_m695_flare_y_mag","vn_40mm_m680_smoke_w_mag","vn_40mm_m682_smoke_r_mag","vn_40mm_m715_smoke_g_mag","vn_40mm_m716_smoke_y_mag","vn_40mm_m717_smoke_p_mag","vn_40mm_m651_cs_mag"};
	};
	class CBA_40mm_M203
	{
		bravo_cba_rails_vn_mags[] = {"vn_40mm_m381_he_mag","vn_40mm_m406_he_mag","vn_40mm_m397_ab_mag","vn_40mm_m433_hedp_mag","vn_40mm_m583_flare_w_mag","vn_40mm_m661_flare_g_mag","vn_40mm_m662_flare_r_mag","vn_40mm_m695_flare_y_mag","vn_40mm_m680_smoke_w_mag","vn_40mm_m682_smoke_r_mag","vn_40mm_m715_smoke_g_mag","vn_40mm_m716_smoke_y_mag","vn_40mm_m717_smoke_p_mag","vn_40mm_m651_cs_mag"};
	};
	class CBA_22mm_NATO_spigot
	{
		bravo_cba_rails_vn_mags[] = {"vn_22mm_n94_heat_mag","vn_22mm_m61_frag_mag"};
	};
	class bravo_22mm_us_riflegrenade
	{
		bravo_cba_rails_vn_mags[] = {"vn_22mm_m1a2_frag_mag","vn_22mm_m17_frag_mag","vn_22mm_m9_heat_mag","vn_22mm_lume_mag","vn_22mm_m22_smoke_mag","vn_22mm_m19_wp_mag","vn_22mm_cs_mag"};
	};
	class spe_22mm_us_riflegrenade
	{
		bravo_cba_rails_vn_mags[] = {"vn_22mm_m1a2_frag_mag","vn_22mm_m17_frag_mag","vn_22mm_m9_heat_mag","vn_22mm_lume_mag","vn_22mm_m22_smoke_mag","vn_22mm_m19_wp_mag","vn_22mm_cs_mag"};
	};
};