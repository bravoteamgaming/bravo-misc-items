class bravo_combatfatigues_sgg : ace_wardrobe_base_u_sleeves_down
{
	class modifiableTo
	{
		class bravo_combatfatigues_recon_sgg
		{};
	};
};
class bravo_combatfatigues_wdl : ace_wardrobe_base_u_sleeves_down
{
	class modifiableTo
	{
		class bravo_combatfatigues_recon_wdl
		{};
	};
};

class bravo_combatfatigues_recon_sgg : ace_wardrobe_base_u_sleeves_up
{
	class modifiableTo
	{
		class bravo_combatfatigues_sgg
		{};
	};
};
class bravo_combatfatigues_recon_wdl : ace_wardrobe_base_u_sleeves_up
{
	class modifiableTo
	{
		class bravo_combatfatigues_wdl
		{};
	};
};