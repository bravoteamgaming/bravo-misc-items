class CfgVehicles
{
	class Module_F;
	class bravo_module_aps : module_f
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "Manage APS";
		category = "ObjectModifiers";
		function = "bravo_fnc_apsModule";
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 1;
		curatorInfoType = "bravo_aps_moduleDisplay";
	};
};