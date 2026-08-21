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
		class userManual
		{
			displayName = "User Manual";
			arguments[] = {};
			description = "Vehicles can be equipped with an active protection system.";
			tip = "The active protection system attempts to intercept shells, missiles, and rockets that are about to hit the vehicle. APS can be added to a vehicle by scripting (bravo_fnc_apsInit) or by using the Zeus module provided. Note that the script function must be run on all clients with JIP.%1%1The APS starts in the disarmed state. It can be armed, and then disarmed again, by the vehicle commander or driver from the action menu (if ACE is not loaded) or the ACE interaction menu.%1%1The APS contains a single interception charge. After firing, it can be reloaded from outside the vehicle if you have a replacement charge in your inventory. You can check if the APS is loaded by disarming and arming it - the system indicates 'NO CHARGE' in the HUD notification for arming if the APS is not loaded.%1%1The APS will provide an auditory alert to the vehicle crew when it attempts an interception, as well as a visual warning to crewmembers looking at their optics.%1%1The maximum interception range is 50 metres.%1%1%3THE APS IS DANGEROUS%4. Intercepting a projectile creates an explosion which can injure or kill nearby units.%1%1%3THE APS IS NOT A PERFECT SHIELD%4 It may struggle to intercept high-velocity projectiles or projectiles with unusual trajectories. Its efficiency also depends on the shooter's frame rate. Low frame rates on the shooter's machine can reduce the APS's maximum interception velocity.";
			dlc = -1;
		};
	};
};