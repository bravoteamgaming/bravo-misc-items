[
	"njt_zdas",
	["CONTAINER","UNIFORM_CONTAINER","VEST_CONTAINER","BACKPACK_CONTAINER"],
	[
		"Open ZDAS",
		"One ping only, please."
	],
	[],
	"",
	[{true}, {true}],
	{
		params ["_unit"];
		(findDisplay 602) closeDisplay 2;
		private _display = (findDisplay 46) createDisplay "njt_zdas_display";
		uiNamespace setVariable ["njt_zdas_display", _display];
	}
] call CBA_fnc_addItemContextMenuOption;