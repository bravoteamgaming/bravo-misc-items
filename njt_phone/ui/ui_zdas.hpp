class njt_zdas_display : RscDisplayEmpty
{
	access = 1;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['njt_zdas_displayOpen',true];";
	onUnload = "uiNamespace setVariable ['njt_zdas_displayOpen',false];";
	class controls
	{
		class group : RscControlsGroup
		{
			w = 18 * GUI_GRID_CENTER_W;
			h = 6 * GUI_GRID_CENTER_H;
			x = GUI_GRID_CENTER_X + 12 * GUI_GRID_CENTER_W;
			y = GUI_GRID_CENTER_Y + 4 * GUI_GRID_CENTER_H;
			
			class controls
			{
				class bg : RscText
				{
					type = 0;
					idc = -1;
					style = 0;
					moving = 0;
					w = 18 * GUI_GRID_CENTER_W;
					h = 5.5 * GUI_GRID_CENTER_H;
					x = 0;
					y = 0;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0.1,0.1,0.1,1};
					text = "";
					shadow = 0;
				};
				class bg2 : RscText
				{
					type = 0;
					idc = -1;
					style = 0;
					moving = 0;
					w = 17 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 0.5 * GUI_GRID_CENTER_H;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0,0,0,0.65};
					text = "";
					shadow = 0;
				};
				class buttonPing : RscButton
				{
					onLoad = "uiNamespace setVariable ['njt_zdas_pingButton', _this select 0]";
					onButtonClick = "0 spawn njt_fnc_zdasPing";
					text = "PING";
					idc = -1;
					colorText[] = {0.1,0.1,0.1,1};
					colorDisabled[] = {0.1,0.1,0.1,1};
					colorActive[] = {0.2,0.63,0.2,1};
					colorFocused[] = {0.2,0.63,0.2,1};
					colorBackground[] = {0.2,0.63,0.2,1};
					colorBackgroundActive[] = {0.25,0.63,0.25,1};
					colorBackgroundDisabled[] = {0.1,0.2,0.1,1};
					shadow = 0;
					w = 7 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 3.5 * GUI_GRID_CENTER_H;
				};
				class buttonCancel : RscButton
				{
					onButtonClick = "ctrlParent (_this select 0) closeDisplay 2";
					text = "CANCEL";
					idc = -1;
					shadow = 0;
					colorText[] = {0.1,0.1,0.1,1};
					colorActive[] = {0.4,0.4,0.4,1};
					colorFocused[] = {0.4,0.4,0.4,1};
					colorBackground[] = {0.4,0.4,0.4,1};
					colorBackgroundActive[] = {0.4,0.4,0.4,1};
					colorBackgroundDisabled[] = {0.4,0.4,0.4,1};
					w = 7.5 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 10 * GUI_GRID_CENTER_W;
					y = 3.5 * GUI_GRID_CENTER_H;
				};
				class readout : RscText
				{
					onLoad = "uiNamespace setVariable ['njt_zdas_readout', _this select 0]";
					font = "LCD14";
					text = "Ready . . .";
					colorText[] = {0.1,0.8,0.1,0.8};
					idc = -1;
					w = 17 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 1 * GUI_GRID_CENTER_H;
				};
			};
		};
	};
};