class cfgVehicles
{
	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class bravo_phone
			{
				displayName = "Phone";
				condition = "[_target, 'ACE_Cellphone'] call ace_common_fnc_hasItem";
				exceptions[] = {"isNotInside", "isNotSitting", "notOnMap", "isNotInZeus"};
				icon = "\z\ace\addons\explosives\Data\UI\Cellphone_UI.paa";
				statement = "";
				
				class bravo_zdas
				{
					displayName = "Mk 42 Mod 0 ZDAS";
					condition = "[_target, 'ACE_Cellphone'] call ace_common_fnc_hasItem";
					exceptions[] = {"isNotInside", "isNotSitting", "notOnMap", "isNotInZeus"};
					icon = "";
					statement = "private _display = createDialog ['bravo_zdas_display', false]; uiNamespace setVariable ['bravo_zdas_display', _display];";
				};
				
				class bravo_messaging
				{
					displayName = "Messaging";
					condition = "([_target, 'ACE_Cellphone'] call ace_common_fnc_hasItem) && {(date select 0) > 1985}";
					exceptions[] = {"isNotInside", "isNotSitting", "notOnMap", "isNotInZeus"};
					icon = "";
					statement = "private _display = createDialog ['bravo_messenger_display',false]; uiNamespace setVariable ['bravo_messenger_display', _display];";
				};
			};
		};
	};
	
	class Module_F;
	class bravo_module_messengerAnon : module_f
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "[ACEPhone] Burner phone";
		category = "Intel";
		function = "";
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		curatorCanAttach = 0;
		curatorInfoType = "bravo_messenger_displayAnon";
	};
};