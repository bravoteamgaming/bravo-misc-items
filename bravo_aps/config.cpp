class CfgPatches
{
	class bravo_aps
	{
		name = "Active Protection System";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {};
		units[] = {
			"bravo_module_aps"
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};

#include "cfgFunctions.hpp"
#include "cfgMagazines.hpp"
#include "ui.hpp"
#include "cfgVehicles.hpp"
#include "cfgAmmo.hpp"

class CfgSounds
{
	class bravo_aps_activation
	{
		name = "APS activation alarm";
		sound[] = {"\bravo_aps\assets\aps_activate.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_front
	{
		name = "APS activation front";
		sound[] = {"\bravo_aps\assets\aps_activate_front.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_rear
	{
		name = "APS activation rear";
		sound[] = {"\bravo_aps\assets\aps_activate_rear.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_left
	{
		name = "APS activation left";
		sound[] = {"\bravo_aps\assets\aps_activate_left.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_right
	{
		name = "APS activation right";
		sound[] = {"\bravo_aps\assets\aps_activate_right.ogg", 2, 1, 100};
		titles[] = {};
	};
};
