class CfgPatches
{
	class bravo_zen_aiskill
	{
		name = "ZEN AI Skill";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = { "zen_ai" };
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
#include "cfgFunctions.hpp"

class Extended_PreInit_EventHandlers
{
	class bravo_zenskill_xeh
	{
		init = "call bravo_fnc_zenSkillInitSettings";
	};
};