// Add an action to let players reload
private _apsReloadAction = [
	_vehicle, // Target
	"Reload APS", // Title
	"\a3\ui_f_oldman\data\IGUI\Cfg\holdactions\repair_ca.paa", // Idle icon
	"\a3\ui_f_oldman\data\IGUI\Cfg\holdactions\repair_ca.paa", // Progress icon
	"('bravo_apscharge' in magazines _this) && {(_target getVariable ['bravo_var_apsCooldown',false]) && (isNull objectParent _this) && (alive _target) && (_this distance _target < 5)}", // Condition to show
	"(_this getUnitTrait 'engineer') && {(_target getVariable ['bravo_var_apsCooldown',false]) && (isNull objectParent _this) && (alive _target) && (_this distance _target < 5)}", // Condition to progress
	{}, // Code on start
	{
		playSound3D ["\a3\Ui_f\data\Sound\CfgCutscenes\repair.wss",_caller];
	}, // Code on tick
	{ 
		_this call bravo_fnc_apsLoad;
	}, // Code on completed
	{}, // Code on interrupt
	[], // Arguments to pass
	20, // Duration
	1, // Priority
	false, // Remove on completion
	false, // Show when unconscious
	true // Show on screen
] call BIS_fnc_holdActionAdd;
_vehicle setVariable ["bravo_apsReloadAction",_apsReloadAction];

// Add action to toggle APS
private _apsArmAction = _vehicle addAction [
	"Arm APS",	
	{
		[_this#0, _this#1, [true]] call bravo_fnc_apsArm;
	},
	nil,	
	-1,	
	false,	
	true,	
	"",	
	"(_this in [commander _target, driver _target]) && {!(_target getVariable ['bravo_var_apsEnabled',false])}", 
	0,		
	false,	
	"",	
	""	
];
_vehicle setVariable ["bravo_apsArmAction",_apsArmAction];

private _apsDisarmAction = _vehicle addAction [
	"Disarm APS",	
	{
		[_this#0, _this#1, [false]] call bravo_fnc_apsArm;
	},
	nil,	
	-1,	
	false,	
	true,	
	"",	
	"(_this in [commander _target, driver _target]) && {(_target getVariable ['bravo_var_apsEnabled',false])}", 
	0,		
	false,	
	"",	
	""	
];
_vehicle setVariable ["bravo_apsDisarmAction",_apsDisarmAction];