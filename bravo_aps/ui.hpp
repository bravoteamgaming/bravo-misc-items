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

class bravo_aps_hudTextLeft : RscStructuredText
{
	type = 0;
	idc = -1;
	style = 0;
	moving = 0;
	w = 20 * GUI_GRID_CENTER_W;
	h = 4.5 * GUI_GRID_CENTER_H;
	x = 0 * GUI_GRID_CENTER_W;
	y = 17 * GUI_GRID_CENTER_H;
	sizeEx = 1;
	colorText[] = {1,0.1,0.1,1};
	colorBackground[] = {0,0,0,0};
	font = "PuristaBold";
	text = "";
	shadow = 0;
};

class bravo_aps_hudTextRight : RscStructuredText
{
	type = 0;
	idc = -1;
	style = 0;
	moving = 0;
	w = 20 * GUI_GRID_CENTER_W;
	h = 4.5 * GUI_GRID_CENTER_H;
	x = 20 * GUI_GRID_CENTER_W;
	y = 17 * GUI_GRID_CENTER_H;
	sizeEx = 1;
	colorText[] = {1,0.1,0.1,1};
	colorBackground[] = {0,0,0,0};
	font = "PuristaBold";
	text = "";
	shadow = 0;
};



class bravo_aps_moduleDisplay : RscDisplayEmpty
{
	access = 1;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['bravo_aps_displayOpen',true]; 0 spawn bravo_fnc_apsLoadUIData";
	onUnload = "uiNamespace setVariable ['bravo_aps_displayOpen',false]; uiNamespace setVariable ['bravo_aps_currentObject',nil]";
	class controls
	{
		class group : RscControlsGroup
		{
			w = 15.5 * GUI_GRID_CENTER_W;
			h = 10.5 * GUI_GRID_CENTER_H;
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
					h = 10.5 * GUI_GRID_CENTER_H;
					x = 0;
					y = 0;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0,0,0,0.75};
					text = "";
					shadow = 0;
				};
				class buttonDelete : RscButton
				{
					onButtonClick = "[uiNamespace getVariable ['bravo_aps_currentObject', objNull]] remoteExec ['bravo_fnc_apsRemove', 0, 'bravo_aps_jip_' + netID (uiNamespace getVariable ['bravo_aps_currentObject', objNull])]";
					text = "Remove APS";
					idc = -1;
					colorBackground[] = {0.8,0.1,0.1,0.8};
					colorBackgroundActive[] = {0.8,0.5,0.5,1};
					colorActive[] = {0.8,0.1,0.1,0.8};
					colorFocused[] = {0.8,0.1,0.1,0.8};
					w = 7 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 0.5 * GUI_GRID_CENTER_H;
				};
				class buttonDisarm : RscButton
				{
					onButtonClick = "[uiNamespace getVariable ['bravo_aps_currentObject', objNull], player, [false]] remoteExec ['bravo_fnc_apsArm']";
					text = "Disarm APS";
					idc = -1;
					colorBackground[] = {0.8,0.1,0.1,0.8};
					colorBackgroundActive[] = {0.8,0.5,0.5,1};
					colorActive[] = {0.8,0.1,0.1,0.8};
					colorFocused[] = {0.8,0.1,0.1,0.8};
					w = 7 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 8 * GUI_GRID_CENTER_W;
					y = 0.5 * GUI_GRID_CENTER_H;
				};
				class buttonArm : RscButton
				{
					onButtonClick = "[uiNamespace getVariable ['bravo_aps_currentObject', objNull], player, [true]] remoteExec ['bravo_fnc_apsArm']";
					text = "Arm APS";
					idc = -1;
					colorBackground[] = {0.1,0.8,0.1,0.8};
					colorBackgroundActive[] = {0.5,0.8,0.5,1};
					colorActive[] = {0.1,0.8,0.1,0.8};
					colorFocused[] = {0.1,0.8,0.1,0.8};
					w = 7 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 8 * GUI_GRID_CENTER_W;
					y = 4.5 * GUI_GRID_CENTER_H;
				};
				class buttonOK : RscButton
				{
					onButtonClick = "[uiNamespace getVariable ['bravo_aps_currentObject', objNull]] remoteExec ['bravo_fnc_apsInit', 0, 'bravo_aps_jip_' + netID (uiNamespace getVariable ['bravo_aps_currentObject', objNull])]";
					text = "Add APS";
					idc = -1;
					colorBackground[] = {0.1,0.8,0.1,0.8};
					colorBackgroundActive[] = {0.5,0.8,0.5,1};
					colorActive[] = {0.1,0.8,0.1,0.8};
					colorFocused[] = {0.1,0.8,0.1,0.8};
					w = 7 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 4.5 * GUI_GRID_CENTER_H;
				};
				class buttonCancel : RscButton
				{
					onButtonClick = "ctrlParent (_this select 0) closeDisplay 2";
					text = "Close";
					idc = -1;
					w = 7 * GUI_GRID_CENTER_W;
					h = 2.5 * GUI_GRID_CENTER_H;
					x = 8 * GUI_GRID_CENTER_W;
					y = 7 * GUI_GRID_CENTER_H;
				};
				class objectname : RscText
				{
					onLoad = "uiNamespace setVariable ['bravo_aps_classnameBox', _this select 0];";
					idc = -1;
					w = 14.5 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 2.5 * GUI_GRID_CENTER_H;
				};
			};
		};
	};
};