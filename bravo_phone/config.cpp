class CfgPatches
{
	class bravo_phone
	{
		name = "Phone";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"acre_sys_gestures", "ace_interaction"};
		units[] = {"bravo_module_messengerAnon"};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

// #include "cfgMagazines.hpp"
#include "cfgVehicles.hpp"

#include "cfgFunctions.hpp"

#include "cfgSounds.hpp"

#include "ui\ui.hpp"