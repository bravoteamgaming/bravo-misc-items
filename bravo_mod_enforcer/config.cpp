class CfgPatches
{
	class bravo_mod_enforcer
	{
		name = "Required Mods Enforcer";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {};
		version = 1.0;
		versionStr = "1.0";
		versionAr[] = {1,0};
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 0;
	};
};

class CfgSettings
{
	class CBA
	{
		class Versioning
		{
			class bravo_mod_enforcer
			{
				main_addon = "bravo_mod_enforcer";
			};
		};
	};
};

#include "cfgFunctions.hpp"
#include "ui.hpp"

class Extended_PreInit_EventHandlers
{
	class bravo_mod_enforcer_xeh
	{
		init = "call bravo_fnc_enforcerInitSettings";
	};
};
