class CfgVehicles
{
	class Module_F;
	class bravo_module_bft : module_f
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "Set Force Tracker Data";
		category = "Intel";
		function = "bravo_fnc_bftModule";
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 1;
		curatorInfoType = "bravo_bft_moduleDisplay";
	};
};