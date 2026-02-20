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

class njt_bft_moduleDisplay : RscDisplayEmpty
{
	access = 1;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['njt_bft_displayOpen',true]; 0 spawn njt_fnc_bftLoadUIData";
	onUnload = "uiNamespace setVariable ['njt_bft_displayOpen',false]; uiNamespace setVariable ['njt_bft_currentObject',nil]";
	class controls
	{
		class group : RscControlsGroup
		{
			w = 20 * GUI_GRID_CENTER_W;
			h = 21.5 * GUI_GRID_CENTER_H;
			x = GUI_GRID_CENTER_X + 10 * GUI_GRID_CENTER_W;
			y = GUI_GRID_CENTER_Y + 0 * GUI_GRID_CENTER_H;
			
			class controls
			{
				class bg : RscText
				{
					type = 0;
					idc = -1;
					style = 0;
					moving = 0;
					w = 20 * GUI_GRID_CENTER_W;
					h = 13.5 * GUI_GRID_CENTER_H;
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
					h = 7.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 0.5 * GUI_GRID_CENTER_H;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0,0,0,0.65};
					text = "";
					shadow = 0;
				};
				class markerList : RscCombo
				{
					idc = -1;
					w = 18 * GUI_GRID_CENTER_W;
					h = 1 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 1 * GUI_GRID_CENTER_H;
					onLoad = "uiNamespace setVariable ['njt_bft_markerListBox', _this select 0];";
					// onLBSelChanged = "_this call njt_ttt_fnc_storeListSelected";
					columns[] = {0,0.2,0.9};
					colorBackground[] = {0,0,0,1};
					colorSelectBackground[] = {1,1,1,1};
					colorSelectBackground2[] = {1,1,1,1};
				}
				class colourList : RscCombo
				{
					idc = -1;
					w = 18 * GUI_GRID_CENTER_W;
					h = 1 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 2.5 * GUI_GRID_CENTER_H;
					onLoad = "uiNamespace setVariable ['njt_bft_colourListBox', _this select 0];";
					columns[] = {0,0.2,0.9};
					colorBackground[] = {0,0,0,1};
					colorSelectBackground[] = {1,1,1,0.5};
					colorSelectBackground2[] = {1,1,1,0.5};
				}
				class dataname : RscEdit
				{
					onLoad = "uiNamespace setVariable ['njt_bft_dataNameBox', _this select 0];";
					text = "";
					idc = -1;
					w = 18 * GUI_GRID_CENTER_W;
					h = 1 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 4 * GUI_GRID_CENTER_H;
				};
				class buttonDelete : RscButton
				{
					onButtonClick = "[(ctrlParent (_this select 0)), true] call njt_fnc_bftComposeData";
					text = "Delete data";
					idc = -1;
					colorBackground[] = {0.8,0.1,0.1,0.8};
					w = 7 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 6 * GUI_GRID_CENTER_H;
				};
				class buttonOK : RscButton
				{
					onButtonClick = "[(ctrlParent (_this select 0)), false] call njt_fnc_bftComposeData";
					text = "Set data";
					idc = -1;
					w = 7.5 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 10.5 * GUI_GRID_CENTER_H;
				};
				class buttonCancel : RscButton
				{
					onButtonClick = "ctrlParent (_this select 0) closeDisplay 2";
					text = "Cancel";
					idc = -1;
					w = 7.5 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 12 * GUI_GRID_CENTER_W;
					y = 10.5 * GUI_GRID_CENTER_H;
				};
				class objectname : RscText
				{
					onLoad = "uiNamespace setVariable ['njt_bft_classnameBox', _this select 0];";
					idc = -1;
					w = 19 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 8 * GUI_GRID_CENTER_H;
				};
			};
		};
	};
};