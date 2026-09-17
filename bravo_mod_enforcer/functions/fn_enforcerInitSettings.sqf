[
	"bravo_enforcer_modlist",
	"EDITBOX",
	["Required mods", "Array of strings (CfgPatches classnames)"],
	["Bravo Team Misc Items", "Mod Enforcer"],
	"[]",
	1,
	{call bravo_fnc_enforcerClientCheck}
] call CBA_fnc_addSetting;

[
	"bravo_enforcer_docheck",
	"CHECKBOX",
	["Enable addon checking", ""],
	["Bravo Team Misc Items", "Mod Enforcer"],
	false,
	1,
	{call bravo_fnc_enforcerClientCheck}
] call CBA_fnc_addSetting;