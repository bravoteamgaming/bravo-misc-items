class CfgPatches
{
	class bravo_dui_custominfo_persist
	{
		name = "Persistent DUI Custom Info";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = { "diwako_dui_nametags" };
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
#include "cfgFunctions.hpp"

class Extended_PreInit_EventHandlers
{
	class bravo_dui_xeh
	{
		init = "call bravo_fnc_duiInitSettings";
	};
};