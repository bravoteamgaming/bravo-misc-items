class CfgPatches
{
	class bravo_extras
	{
		name = "Extras";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = { "gm_weapons_cannons_20mm_rh202", "A3_Weapons_F", "UK3CB_Factions_weapons"};
		units[] = {
			"bravo_module_gbp",
			"bravo_weaponholder_multinade"
		};
		weapons[] = {
			"bravo_hs50_20",
			"bravo_rpg7_jamsheed",
			"bravo_l1a1_vlad",
			"bravo_m4a1_m320_dave",
			"bravo_l7a2_onenan",
			"bravo_mk18_zyneks",
			"bravo_l129a1_connie",
			"bravo_m249_pip_ris_zaphod",
			"bravo_ak74m_blackfire"
		};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgWeapons.hpp"

#include "cfgMagazines.hpp"

#include "cfgAmmo.hpp"

#include "cfgVehicles.hpp"

#include "cfgFunctions.hpp"

#include "cfgSounds.hpp"

class zen_context_menu_actions
{
	class bravo_physicsSlap
	{
		displayName = "Slap Hovered Unit";
		icon = "";
		statement = "(_this#5) remoteExec ['bravo_fnc_physicsSlap',_this#5]";
		condition = "private _unit = _this#5; (_unit isKindOf 'CAManBase') && {alive _unit}";
		priority = 0;
	};
};