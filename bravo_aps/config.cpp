class CfgPatches
{
	class bravo_aps
	{
		name = "Active Protection System";
		author = "NikkoJT";
		url = "https://github.com/bravoteamgaming/bravo-misc-items";
		requiredVersion = 2.00;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder"};
		units[] = {
			"bravo_module_aps",
			"bravo_case_olive_aps"
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
		sound[] = {"\bravo_aps\assets\aps_activate.ogg", 1.9, 1, 100};
		titles[] = {};
	};
	
	class bravo_aps_activation_front_0
	{
		name = "APS activation front (RU)";
		sound[] = {"\bravo_aps\assets\aps_activate_front_0.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_rear_0
	{
		name = "APS activation rear (RU)";
		sound[] = {"\bravo_aps\assets\aps_activate_rear_0.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_left_0
	{
		name = "APS activation left (RU)";
		sound[] = {"\bravo_aps\assets\aps_activate_left_0.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_right_0
	{
		name = "APS activation right (RU)";
		sound[] = {"\bravo_aps\assets\aps_activate_right_0.ogg", 2, 1, 100};
		titles[] = {};
	};
	
	class bravo_aps_activation_front_1
	{
		name = "APS activation front (US)";
		sound[] = {"\bravo_aps\assets\aps_activate_front_1.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_rear_1
	{
		name = "APS activation rear (US)";
		sound[] = {"\bravo_aps\assets\aps_activate_rear_1.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_left_1
	{
		name = "APS activation left (US)";
		sound[] = {"\bravo_aps\assets\aps_activate_left_1.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_right_1
	{
		name = "APS activation right (US)";
		sound[] = {"\bravo_aps\assets\aps_activate_right_1.ogg", 2, 1, 100};
		titles[] = {};
	};
	
	class bravo_aps_activation_front_2
	{
		name = "APS activation front (CN)";
		sound[] = {"\bravo_aps\assets\aps_activate_front_2.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_rear_2
	{
		name = "APS activation rear (CN)";
		sound[] = {"\bravo_aps\assets\aps_activate_rear_2.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_left_2
	{
		name = "APS activation left (CN)";
		sound[] = {"\bravo_aps\assets\aps_activate_left_2.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_right_2
	{
		name = "APS activation right (CN)";
		sound[] = {"\bravo_aps\assets\aps_activate_right_2.ogg", 2, 1, 100};
		titles[] = {};
	};
	
	class bravo_aps_activation_front_3
	{
		name = "APS activation front (DE)";
		sound[] = {"\bravo_aps\assets\aps_activate_front_3.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_rear_3
	{
		name = "APS activation rear (DE)";
		sound[] = {"\bravo_aps\assets\aps_activate_rear_3.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_left_3
	{
		name = "APS activation left (DE)";
		sound[] = {"\bravo_aps\assets\aps_activate_left_3.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_right_3
	{
		name = "APS activation right (DE)";
		sound[] = {"\bravo_aps\assets\aps_activate_right_3.ogg", 2, 1, 100};
		titles[] = {};
	};
	
	class bravo_aps_activation_front_4
	{
		name = "APS activation front (SA)";
		sound[] = {"\bravo_aps\assets\aps_activate_front_4.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_rear_4
	{
		name = "APS activation rear (SA)";
		sound[] = {"\bravo_aps\assets\aps_activate_rear_4.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_left_4
	{
		name = "APS activation left (SA)";
		sound[] = {"\bravo_aps\assets\aps_activate_left_4.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_right_4
	{
		name = "APS activation right (SA)";
		sound[] = {"\bravo_aps\assets\aps_activate_right_4.ogg", 2, 1, 100};
		titles[] = {};
	};
	
	class bravo_aps_activation_front_5
	{
		name = "APS activation front (Blyat)";
		sound[] = {"\bravo_aps\assets\cyka_blyat.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_rear_5
	{
		name = "APS activation rear (Blyat)";
		sound[] = {"\bravo_aps\assets\cyka_blyat.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_left_5
	{
		name = "APS activation left (Blyat)";
		sound[] = {"\bravo_aps\assets\cyka_blyat.ogg", 2, 1, 100};
		titles[] = {};
	};
	class bravo_aps_activation_right_5
	{
		name = "APS activation right (Blyat)";
		sound[] = {"\bravo_aps\assets\cyka_blyat.ogg", 2, 1, 100};
		titles[] = {};
	};
};

class CfgHintCategories
{
	class bravo_aps_cat
	{
		displayName = "Bravo Active Protection System";
	};
};

class CfgHints
{
	class bravo_aps
	{
		category = "bravo_aps_cat";
		displayName = "Active Protection System";
		class Operation
		{
			logicalOrder = 1;
			displayName = "Operation";
			arguments[] = {};
			tip = "Fight fire with fire.";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			description = "The active protection system attempts to intercept shells, missiles, and rockets that are about to hit the vehicle. %1%1The APS starts in the disarmed state. It can be armed, and then disarmed again, by the vehicle commander or driver from the action menu (if ACE is not loaded) or the ACE interaction menu.%%1%1The APS will provide an auditory alert to the vehicle crew when it attempts an interception, as well as a visual warning to crewmembers looking at their optics.%1%1The maximum interception range is 50 metres.%1%1%3THE APS IS DANGEROUS.%4 Intercepting a projectile creates an explosion which can injure or kill nearby units.%1%1%3THE APS IS NOT A PERFECT SHIELD.%4 It may struggle to intercept high-velocity projectiles or projectiles with unusual trajectories.";
		};
		class Technical
		{
			logicalOrder = 3;
			displayName = "Technical";
			arguments[] = {};
			tip = "You can inspect the code and UI in the functions and config viewers.";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			description = "APS can be added to a vehicle by scripting (bravo_fnc_apsInit) or by using the Zeus module provided. Note that the script function must be run on all clients with JIP.%1%1The system's efficiency can depend on the shooter's frame rate. Low frame rates on the shooter's machine can reduce the APS's maximum interception velocity.";
		};
		class Maintenance
		{
			logicalOrder = 2;
			displayName = "Maintenance";
			arguments[] = {};
			tip = "Remember to reload your APS after an interception.";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			description = "The APS contains a single interception charge. After firing, it can be reloaded from outside the vehicle if you have a replacement charge in your inventory. You can check if the APS is loaded by disarming and arming it - the system indicates 'NO CHARGE' in the HUD notification for arming if the APS is not loaded.";
		};
	};
};