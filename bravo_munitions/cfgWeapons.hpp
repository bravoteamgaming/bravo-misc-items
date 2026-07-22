/*
class mode_semiauto;
class launcher_base_f;
class rhs_weap_maaws : launcher_base_f
{
	dispersion = 0.07;
	class single : mode_semiauto
	{
		dispersion = 0.07;
	};
};
*/

class default;
class put : default
{
	class MineMuzzle;
	class bravo_trappedGunMineMuzzle : MineMuzzle
	{
		magazines[] = {
			"bravo_trapped_gun_mine_nato_mag",
			"bravo_trapped_gun_mine_natocw_mag",
			"bravo_trapped_gun_mine_ru_mag",
			"bravo_trapped_gun_mine_rucw_mag",
			"bravo_trapped_gun_mine_csat_mag",
			"bravo_trapped_gun_mine_ww2ger_mag",
			"bravo_trapped_gun_mine_ww2allied_mag"
		};
	};
	muzzles[] += {"bravo_trappedGunMineMuzzle"};
};

class launch_O_Titan_F;
class rhs_weap_fim92 : launch_O_Titan_F
{
	magazines[] += {
		"bravo_1rnd_missile_fim92f_bad"
	};
	magazineWell[] = {"bravo_stinger"};
};

class rhs_weap_strela;
class rhs_weap_igla : rhs_weap_strela
{
	magazines[] += {
		"bravo_1rnd_missile_9k38_bad"
	};
	magazineWell[] = {"bravo_igla"};
};