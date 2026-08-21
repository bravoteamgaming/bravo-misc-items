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
	
	class ReammoBox_F;
	class bravo_case_olive_aps : ReammoBox_F
	{
		displayName = "Case of APS Charges";
		scope = 2;
		editorCategory = "EdCat_Supplies";
		hiddenSelections[] = {"Camo","Camo2"};
		icon = "iconObject_4x5";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_PlasticCase_01_medium_olive_F.jpg";
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa"};
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		class TransportMagazines
		{
			class bravo_apscharge
			{
				magazine = "bravo_apscharge";
				count = 5;
			};
		};
	};
};