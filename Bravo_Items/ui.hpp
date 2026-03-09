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

class ctrlMenuStrip;
class display3DEN
{
	class Controls
	{
		class MenuStrip : ctrlMenuStrip
		{
			class Items
			{
				class Tools
				{
					items[] += { "bravo_scrapeHideTerrainObjects" };
				};
				class bravo_scrapeHideTerrainObjects
				{
					text = "Scrape Hide Terrain Objects modules";
					picture = "";
					action = "0 call bravo_fnc_scrapeHideTerrainObjects";
					opensNewWindow = 0;
				};
			};
		};
	};
};


class RscDisplayEmpty;
class RscText;
class RscButton;
class RscControlsGroup;
class RscStructuredText;
class RscTextMulti;
class RscEdit;
class RscCombo;

class bravo_pasteHideTerrainObjects_moduleDisplay : RscDisplayEmpty
{
	access = 1;
	enableSimulation = 1;
	onLoad = "ctrlSetFocus (uiNamespace getVariable ['bravo_pasteHideTerrainObjects_dataBox', controlNull])";
	class controls
	{
		class group : RscControlsGroup
		{
			w = 20 * GUI_GRID_CENTER_W;
			h = 8.5 * GUI_GRID_CENTER_H;
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
					h = 8.5 * GUI_GRID_CENTER_H;
					x = 0;
					y = 0;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0,0,0,0.65};
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
					h = 4.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 0.5 * GUI_GRID_CENTER_H;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0,0,0,0.65};
					text = "";
					shadow = 0;
				};
				class caption : RscTextMulti
				{
					onLoad = "(_this select 0) ctrlEnable false";
					text = "Paste data created by the Eden Editor ""Scrape Hide Terrain Objects modules"" tool in this box.";
					idc = -1;
					w = 18 * GUI_GRID_CENTER_W;
					h = 2 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 1 * GUI_GRID_CENTER_H;
				};
				class data : RscEdit
				{
					onLoad = "uiNamespace setVariable ['bravo_pasteHideTerrainObjects_dataBox', _this select 0];";
					text = "";
					idc = -1;
					w = 18 * GUI_GRID_CENTER_W;
					h = 1 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 3.5 * GUI_GRID_CENTER_H;
				};
				class buttonOK : RscButton
				{
					onButtonClick = "(ctrlText (uiNamespace getVariable ['bravo_pasteHideTerrainObjects_dataBox', controlNull])) call bravo_fnc_pasteHideTerrainObjects";
					text = "OK";
					idc = 1;
					w = 7.5 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 5.5 * GUI_GRID_CENTER_H;
				};
				class buttonCancel : RscButton
				{
					onButtonClick = "ctrlParent (_this select 0) closeDisplay 2";
					text = "Cancel";
					idc = 2;
					w = 7.5 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 12 * GUI_GRID_CENTER_W;
					y = 5.5 * GUI_GRID_CENTER_H;
				};
			};
		};
	};
};