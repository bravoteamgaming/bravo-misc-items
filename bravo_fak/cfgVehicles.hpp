class CfgVehicles
{
	class Man;
	class CAManBase : Man
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class bravo_ifak
				{
					displayName = "Unpack Bravo IFAK";
					condition = "([_target, 'bravo_ifak'] call ace_common_fnc_hasItem) && !([_target] call ace_common_fnc_isAwake)";
					statement = "[_target, 'bravo_ifak'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\IFAK.paa";
				};
				class bravo_afak_ww2
				{
					displayName = "Unpack Bravo AFAK (WW2)";
					condition = "([_target, 'bravo_afak_ww2'] call ace_common_fnc_hasItem) && !([_target] call ace_common_fnc_isAwake)";
					statement = "[_target, 'bravo_afak_ww2'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\AFAK.paa";
				};
				class bravo_afak_early
				{
					displayName = "Unpack Bravo AFAK (Post-War)";
					condition = "([_target, 'bravo_afak_early'] call ace_common_fnc_hasItem) && !([_target] call ace_common_fnc_isAwake)";
					statement = "[_target, 'bravo_afak_early'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\AFAK.paa";
				};
				class bravo_afak_modern
				{
					displayName = "Unpack Bravo AFAK (Modern)";
					condition = "([_target, 'bravo_afak_modern'] call ace_common_fnc_hasItem) && !([_target] call ace_common_fnc_isAwake)";
					statement = "[_target, 'bravo_afak_modern'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\AFAK.paa";
				};
				class bravo_mfak_ww2
				{
					displayName = "Unpack Bravo AFAK (WW2)";
					condition = "([_target, 'bravo_mfak_ww2'] call ace_common_fnc_hasItem) && !([_target] call ace_common_fnc_isAwake)";
					statement = "[_target, 'bravo_mfak_ww2'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\MFAK.paa";
				};
				class bravo_mfak_early
				{
					displayName = "Unpack Bravo AFAK (Post-War)";
					condition = "([_target, 'bravo_mfak_early'] call ace_common_fnc_hasItem) && !([_target] call ace_common_fnc_isAwake)";
					statement = "[_target, 'bravo_mfak_early'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\MFAK.paa";
				};
				class bravo_mfak_modern
				{
					displayName = "Unpack Bravo AFAK (Modern)";
					condition = "([_target, 'bravo_mfak_modern'] call ace_common_fnc_hasItem) && !([_target] call ace_common_fnc_isAwake)";
					statement = "[_target, 'bravo_mfak_modern'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\MFAK.paa";
				};
			};
		};
		class ACE_SelfActions
		{
			class KAT_Equipment
			{
				class bravo_ifak
				{
					displayName = "Unpack Bravo IFAK";
					condition = "[_target, 'bravo_ifak'] call ace_common_fnc_hasItem";
					statement = "[_target, 'bravo_ifak'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\IFAK.paa";
				};
				class bravo_afak_ww2
				{
					displayName = "Unpack Bravo AFAK (WW2)";
					condition = "[_target, 'bravo_afak_ww2'] call ace_common_fnc_hasItem";
					statement = "[_target, 'bravo_afak_ww2'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\AFAK.paa";
				};
				class bravo_afak_early
				{
					displayName = "Unpack Bravo AFAK (Post-War)";
					condition = "[_target, 'bravo_afak_early'] call ace_common_fnc_hasItem";
					statement = "[_target, 'bravo_afak_early'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\x\kat\addons\misc\ui\AFAK.paa";
				};
				class bravo_afak_modern
				{
					displayName = "Unpack Bravo AFAK (Modern)";
					condition = "[_target, 'bravo_afak_modern'] call ace_common_fnc_hasItem";
					statement = "[_target, 'bravo_afak_modern'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\kat_misc\AFAK.paa";
				};
				class bravo_mfak_ww2
				{
					displayName = "Unpack Bravo AFAK (WW2)";
					condition = "[_target, 'bravo_mfak_ww2'] call ace_common_fnc_hasItem";
					statement = "[_target, 'bravo_mfak_ww2'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\kat_gui\MFAK.paa";
				};
				class bravo_mfak_early
				{
					displayName = "Unpack Bravo AFAK (Post-War)";
					condition = "[_target, 'bravo_mfak_early'] call ace_common_fnc_hasItem";
					statement = "[_target, 'bravo_mfak_early'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\kat_gui\MFAK.paa";
				};
				class bravo_mfak_modern
				{
					displayName = "Unpack Bravo AFAK (Modern)";
					condition = "[_target, 'bravo_mfak_modern'] call ace_common_fnc_hasItem";
					statement = "[_target, 'bravo_mfak_modern'] call bravo_fnc_fakUnpack";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\kat_gui\MFAK.paa";
				};
			};
		};
	};
};