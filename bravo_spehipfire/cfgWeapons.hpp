class CfgWeapons
{
	class lmg_mk200_f;
	class rhs_weap_m249_base : lmg_mk200_f
	{
		class EventHandlers;
	};
	class rhs_weap_m240_base : rhs_weap_m249_base
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	
	class rifle;
	class rifle_base_f : rifle
	{
		class EventHandlers;
	};
	class rifle_long_base_f : rifle_base_f
	{};
	class uk3cb_baf_l7a2 : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class uk3cb_hs50 : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class mmg_01_base_f : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class mmg_02_base_f : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class lrr_base_f : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class uk3cb_mg42_base : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class uk3cb_uk59 : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class rhs_pkp_base : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class rhs_weap_m84 : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class lmg_s77_base_lxws : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class lmg_s77_compact_base_lxws : lmg_s77_base_lxws
	{
		SPE_HipFire_Only = 0;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{};
		};
	};
	
	class gm6_base_f : rifle_long_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class rhs_weap_m107_base_f : gm6_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	
	class gm_rifle_base;
	class gm_machinegun_base : gm_rifle_base
	{
		class EventHandlers;
	};
	class gm_mg3_base : gm_machinegun_base
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	
	class gm_pk_base : gm_machinegun_base
	{};
	class gm_pkm_base : gm_pk_base
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	
	class srifle_gm6_f : gm6_base_f
	{
		class EventHandlers;
	};
	class uk3cb_baf_l135a1 : srifle_gm6_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	
	class UK3CB_M60_base : rifle_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class UK3CB_m1919a4_browning : rifle_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
	class rhs_weap_mg42_base : rifle_base_f
	{
		SPE_HipFire_Only = 1;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{
				reload = "if (local (_this select 0)) then {(_this select 0) setvariable ['SPE_hipFire_reloading',true];};";
				reloaded = "_this spawn SPE_fnc_hipfire_handleReloaded";
			};
		};
	};
};