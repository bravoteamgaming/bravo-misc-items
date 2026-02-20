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