#define GUI_GRID_WAbs			((safezoneW / safezoneH) min 1.2)
#define GUI_GRID_HAbs			(GUI_GRID_WAbs / 1.2)
#define GUI_GRID_W			(GUI_GRID_WAbs / 40)
#define GUI_GRID_H			(GUI_GRID_HAbs / 25)
#define GUI_GRID_CENTER_WAbs		GUI_GRID_WAbs
#define GUI_GRID_CENTER_HAbs		GUI_GRID_HAbs
#define GUI_GRID_CENTER_W		GUI_GRID_W
#define GUI_GRID_CENTER_H		GUI_GRID_H
#define GUI_GRID_CENTER_X		(safezoneX + (safezoneW - GUI_GRID_CENTER_WAbs)/2)
#define GUI_GRID_CENTER_Y		(safezoneY + (safezoneH - GUI_GRID_CENTER_HAbs)/2)

class RscDisplayEmpty;
class RscText;
class RscButton;
class RscControlsGroup;
class RscStructuredText;
class RscTextMulti;
class RscEdit;
class RscCombo;

class bravo_enforcer_popup : RscDisplayEmpty
{
	access = 1;
	enableSimulation = 1;
	class controls
	{
		class group : RscControlsGroup
		{
			w = 20 * GUI_GRID_CENTER_W;
			h = 10.5 * GUI_GRID_CENTER_H;
			x = GUI_GRID_CENTER_X + 10 * GUI_GRID_CENTER_W;
			y = GUI_GRID_CENTER_Y + 3 * GUI_GRID_CENTER_H;
			
			class controls
			{
				class bg : RscText
				{
					type = 0;
					idc = -1;
					style = 0;
					moving = 0;
					w = 20 * GUI_GRID_CENTER_W;
					h = 10.5 * GUI_GRID_CENTER_H;
					x = 0;
					y = 0;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0,0,0,1};
					text = "";
					shadow = 0;
				};
				class bg2 : RscText
				{
					type = 0;
					idc = -1;
					style = 0;
					moving = 0;
					w = 19 * GUI_GRID_CENTER_W;
					h = 6.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 0.5 * GUI_GRID_CENTER_H;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0.1,0.1,0.1,1};
					text = "";
					shadow = 0;
				};
				class caption : RscTextMulti
				{
					onLoad = "(_this select 0) ctrlEnable false";
					text = "You are missing mods that are required by the server. When you close this popup, you will be kicked.";
					idc = -1;
					w = 18 * GUI_GRID_CENTER_W;
					h = 2 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 1 * GUI_GRID_CENTER_H;
				};
				class data : RscTextMulti
				{
					onLoad = "uiNamespace setVariable ['bravo_enforcer_list', _this select 0];";
					text = "";
					idc = -1;
					w = 18 * GUI_GRID_CENTER_W;
					h = 3 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 3.5 * GUI_GRID_CENTER_H;
				};
				class buttonOK : RscButton
				{
					text = "OK";
					idc = 1;
					w = 7.5 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 7.5 * GUI_GRID_CENTER_H;
				};
			};
		};
	};
};