class CfgPatches
{
	class bravo_phone
	{
		name = "Phone";
		author = "NikkoJT";
		url = "https://github.com/nikkojt";
		requiredVersion = 2.00;
		requiredAddons[] = {"WW2_SPE_Core_c_ZZZ_LastLoaded_c", "ace_interaction"};
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