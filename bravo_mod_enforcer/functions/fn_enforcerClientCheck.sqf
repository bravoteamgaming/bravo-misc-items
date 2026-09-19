if !isMultiplayer exitWith{};

private _doCheck = ["bravo_enforcer_docheck", "server"] call CBA_settings_fnc_get;
if !_doCheck exitWith{};

private _requiredModsStr = toLowerANSI (["bravo_enforcer_modlist", "server"] call CBA_settings_fnc_get);

if (_requiredModsStr in ["", "[]"]) exitWith{};

private _requiredMods = parseSimpleArray _requiredModsStr;

private _loadedMods = (configClasses (configFile >> "CfgPatches")) apply {toLowerANSI configName _x};

private _missingMods = _requiredMods - _loadedMods;

if (_missingMods != []) then {
	private _phrase = selectRandom [
		"Glory to Arstotzka!",
		"It's not me, it's you.",
		"Please consult the required mods list."
	];
	// KICK ME
	
	private _isAdmin = call bis_fnc_admin;
	if !((_isAdmin == 2) or isServer) then {
		private _msgDisplay = createDialog ["bravo_enforcer_popup",true];
		_msgDisplay displayAddEventHandler ["unload", {
			findDisplay 312 closeDisplay 0;
			findDisplay 46 closeDisplay 0;
		}];
		
		(uiNamespace getVariable ["bravo_enforcer_list", controlNull]) ctrlSetText str _missingMods
	};
	
	private _formatText = ["[Bravo] User %1 is missing required mods and has been kicked. %2 - %3", profileName, _text, str _missingMods];
	
	(format _formatText) remoteExec ["systemChat"];
	[_formatText] remoteExec ["bravo_fnc_logToRPT", [[2, clientOwner], 2] select isServer];
};