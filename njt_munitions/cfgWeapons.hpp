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
	class njt_trappedGunMineMuzzle : MineMuzzle
	{
		magazines[] = {
			"njt_trapped_gun_mine_nato_mag",
			"njt_trapped_gun_mine_natocw_mag",
			"njt_trapped_gun_mine_ru_mag",
			"njt_trapped_gun_mine_rucw_mag",
			"njt_trapped_gun_mine_csat_mag",
			"njt_trapped_gun_mine_ww2ger_mag",
			"njt_trapped_gun_mine_ww2allied_mag"
		};
	};
	muzzles[] += {"njt_trappedGunMineMuzzle"};
};