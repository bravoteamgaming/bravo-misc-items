// ======== airburst
	
	class gm_tracked_Tank_base;
	class gm_Leopard1_base : gm_tracked_Tank_base
	{
		class Turrets;
	};
	class gm_Gepard_base : gm_Leopard1_base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class gm_Gepard1a1_base : gm_Gepard_base
	{};
	class gm_ge_army_gepard1a1_base : gm_Gepard1a1_base
	{
		class EventHandlers;
	};
	class bravo_gepard1a1_airburst : gm_ge_army_gepard1a1_base
	{
		displayName = "FlakPz 1A1 (AB)";
		scope = 2;
		scopeCurator = 2;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"bravo_640rnd_35x228mm_airburst", "gm_40rnd_35x228mm_hvapds_t_dm23"};
			};
		};
		class eventhandlers : EventHandlers
		{
			class bravo_munitions
			{
				postInit = "[_this#0,4000] call EF_fnc_antiDroneRadar";
			};
		};
	};
	
	class apc_tracked_01_base_f;
	class b_apc_tracked_01_base_f : apc_tracked_01_base_f
	{
		class Turrets;
	};
	class b_apc_tracked_01_aa_f : b_apc_tracked_01_base_f
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
		class EventHandlers;
	};
	class bravo_cheetah_airburst : b_apc_tracked_01_aa_f
	{
		displayName = "Bardelas (AB)";
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"bravo_640rnd_35x228mm_airburst", "ace_missile_manpad_stinger", "ace_missile_manpad_stinger"};
			};
		};
		class eventhandlers : EventHandlers
		{
			class bravo_munitions
			{
				postInit = "[_this#0,4000] call EF_fnc_antiDroneRadar";
			};
		};
	};
	class bravo_cheetah_airburst_t : bravo_cheetah_airburst
	{
		faction = "BLU_T_F";
		hiddenSelectionsTextures[] = {"A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_body_olive_co.paa","A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa","A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_tower_olive_co.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
		crew = "B_T_Crew_F";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_APC_Tracked_01_AA_F.jpg";
		DLC = "Expansion";
	};
	
	class apc_tracked_02_base_f;
	class o_apc_tracked_02_base_f : apc_tracked_02_base_f
	{
		class Turrets;
	};
	class o_apc_tracked_02_aa_f : o_apc_tracked_02_base_f
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
		class EventHandlers;
	};
	class bravo_zsu39_airburst : o_apc_tracked_02_aa_f
	{
		displayName = "ZSU-35 Tigris (AB)";
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"bravo_640rnd_35x228mm_airburst", "ace_missile_manpad_stinger", "ace_missile_manpad_stinger"};
			};
		};
		class eventhandlers : EventHandlers
		{
			class bravo_munitions
			{
				postInit = "[_this#0,4000] call EF_fnc_antiDroneRadar";
			};
		};
	};
	class bravo_zsu39_airburst_t : bravo_zsu39_airburst
	{
		crew = "O_T_crew_F";
		DLC = "Expansion";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_APC_Tracked_02_AA_ghex_F.jpg";
		faction = "OPF_T_F";
		hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_ghex_CO.paa","A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa","A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_ghex_CO.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa","A3\armor_f\data\cage_csat_green_CO.paa"};
	};