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
		SPE_deployment_animation = "RHS_GestureHoldM107";
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
		SPE_deployment_animation = "RHS_GestureHoldM240";
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
		SPE_deployment_animation = "RHS_GestureHoldM240";
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
		SPE_deployment_animation = "RHS_GestureHoldMG42";
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
	class uk3cb_baf_l115_base : rifle_long_base_f
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
		SPE_HipFire_Only = 0;
		class EventHandlers : EventHandlers
		{
			class bravo_spe_hipfirehandler
			{};
		};
	};
	class uk3cb_mg42_base : rifle_long_base_f
	{
		SPE_deployment_animation = "RHS_GestureHoldMG42";
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
		SPE_deployment_animation = "RHS_GestureHoldM240";
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
		SPE_deployment_animation = "gestureAltHoldMG42v2";
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
		SPE_deployment_animation = "RHS_GestureHoldM240";
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
		SPE_deployment_animation = "gestureAltHoldMG42v2";
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
		SPE_deployment_animation = "RHS_GestureHoldMG42";
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
		SPE_deployment_animation = "RHS_GestureHoldPK";
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
		SPE_deployment_animation = "RHS_GestureHoldM107";
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
		SPE_deployment_animation = "RHS_GestureHoldM240";
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
	
	class uk3cb_baf_l85a2;
	class uk3cb_baf_l86a2 : uk3cb_baf_l85a2
	{
		SPE_deployment_animation = "RHS_GestureHoldMG42";
	};
	
	class rhs_weap_XM2010_Base_F : Rifle_Base_F
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
	
	class lmg_zafir_f : rifle_long_base_f
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
	
	class uk3cb_g3_base;
	class uk3cb_psg1a1 : uk3cb_g3_base
	{
		SPE_deployment_animation = "RHS_GestureHoldMG42";
	};
	
	class gm_g3_base;
	class gm_psg1_base : gm_g3_base
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
	class gm_msg90_base : gm_psg1_base
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
	
	class uk3cb_baf_l110_base : rifle_long_base_f
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
	
	class rhs_weap_saw_base : rifle_base_f
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
	
	class rhs_weap_lmg_minimi_railed;
	class rhs_weap_m249_pip : rhs_weap_lmg_minimi_railed
	{
		SPE_deployment_animation = "RHS_GestureHoldM240";
	};
	
	class rhs_weap_orsis_base_f;
	class rhs_weap_t5000 : rhs_weap_orsis_base_f
	{
		SPE_deployment_animation = "RHS_GestureHoldMG42";
	};
	
	class gm_g8_base;
	class gm_mg8_base : gm_g8_base
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
	
	class dmr_07_base_f : rifle_long_base_f
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
	
	class arifle_ak12_base_f;
	class arifle_rpk12_base_f : arifle_ak12_base_f
	{
		SPE_deployment_animation = "RHS_GestureHoldPK";
	};
	
	class gm_ak47_base;
	class gm_rpk_base : gm_ak47_base
	{
		SPE_deployment_animation = "RHS_GestureHoldM240";
	};
	
	class gm_ak74_base;
	class gm_rpk74_base : gm_ak74_base
	{
		SPE_deployment_animation = "RHS_GestureHoldM240";
	};
	
	class rhs_weap_rpk_base : rifle_long_base_f
	{
		SPE_deployment_animation = "RHS_GestureHoldM240";
	};
	
	class uk3cb_g36_base;
	class uk3cb_g36_lsw : uk3cb_g36_base
	{
		SPE_deployment_animation = "gestureAltHoldMG42v2";
	};
};