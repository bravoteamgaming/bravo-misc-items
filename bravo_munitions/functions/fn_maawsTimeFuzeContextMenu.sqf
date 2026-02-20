private _types = ["bravo_1rnd_84mm_delayfuze_he_%1", "bravo_1rnd_84mm_delayfuze_he2_%1", "bravo_1rnd_84mm_delayfuze_mine_%1"];
private _array = [100, 125, 150, 175, 200, 225, 250, 300, 400, 500, 600, "Impact"];
{
	private _type = _x;
	private _item = format [_type, "impact"];
	{
		private _fuze = _x;
		[
			_item,
			["CONTAINER","UNIFORM_CONTAINER","VEST_CONTAINER","BACKPACK_CONTAINER"],
			[
				format ["%1", _fuze],
				format ["Set fuze for %1", _fuze]
			],
			[],
			"",
			[{true}, {true}],
			{
				params ["_unit", "_container", "", "", "_params"];
				private _newClass = format [_params#0, _params#1];
				_container addItemCargoGlobal [_newClass,1];
			},
			true,
			[_type, _fuze]
		] call CBA_fnc_addItemContextMenuOption;
	} forEach _array;
} forEach _types;