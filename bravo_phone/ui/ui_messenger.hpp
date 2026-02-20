class bravo_messenger_display : RscDisplayEmpty
{
	access = 1;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['bravo_messenger_displayOpen',true]; true call bravo_fnc_messengerLoadList";
	onUnload = "uiNamespace setVariable ['bravo_messenger_displayOpen',false];";
	onKeyDown = "if ((_this#1) == 28) then {false call bravo_fnc_messengerSendMessage};";
	class controls
	{
		class group : RscControlsGroup
		{
			w = 25 * GUI_GRID_CENTER_W;
			h = 23.5 * GUI_GRID_CENTER_H;
			x = GUI_GRID_CENTER_X + 9 * GUI_GRID_CENTER_W;
			y = GUI_GRID_CENTER_Y + 4 * GUI_GRID_CENTER_H;
			
			class controls
			{
				class bg : RscText
				{
					type = 0;
					idc = -1;
					style = 0;
					moving = 0;
					w = 25 * GUI_GRID_CENTER_W;
					h = 23.5 * GUI_GRID_CENTER_H;
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
					w = 24 * GUI_GRID_CENTER_W;
					h = 19.5 * GUI_GRID_CENTER_H;
					x = 0.5 * GUI_GRID_CENTER_W;
					y = 1.5 * GUI_GRID_CENTER_H;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0.4,0.5,0.5,1};
					text = "";
					shadow = 0;
				};
				class bg3 : RscText
				{
					type = 0;
					idc = -1;
					style = 0;
					moving = 0;
					w = 23.6 * GUI_GRID_CENTER_W;
					h = 19.3 * GUI_GRID_CENTER_H;
					x = 0.7 * GUI_GRID_CENTER_W;
					y = 1.5 * GUI_GRID_CENTER_H;
					sizeEx = 1;
					colorText[] = {0,0,0,0};
					colorBackground[] = {0.43,0.53,0.53,1};
					text = "";
					shadow = 0;
				};
				class buttonSend : RscButton
				{
					onLoad = "uiNamespace setVariable ['bravo_messenger_sendButton', _this select 0]";
					onButtonClick = "false call bravo_fnc_messengerSendMessage";
					text = "SEND";
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
					x = 5 * GUI_GRID_CENTER_W;
					y = 21.5 * GUI_GRID_CENTER_H;
				};
				class buttonCancel : RscButton
				{
					onButtonClick = "closeDialog 2";
					text = "CANCEL";
					idc = -1;
					shadow = 0;
					colorText[] = {0.1,0.1,0.1,1};
					colorActive[] = {0.4,0.4,0.4,1};
					colorFocused[] = {0.4,0.4,0.4,1};
					colorBackground[] = {0.4,0.4,0.4,1};
					colorBackgroundActive[] = {0.4,0.4,0.4,1};
					colorBackgroundDisabled[] = {0.4,0.4,0.4,1};
					w = 7 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 13 * GUI_GRID_CENTER_W;
					y = 21.5 * GUI_GRID_CENTER_H;
				};
				class message : RscEdit
				{
					onLoad = "uiNamespace setVariable ['bravo_messenger_messageBox', _this select 0]";
					font = "PuristaSemiBold";
					text = "";
					maxChars = 160;
					shadow = 0;
					colorText[] = {0.1,0.1,0.1,0.8};
					colorBackground[] = {0.43,0.53,0.53,1};
					idc = -1;
					w = 23 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 19 * GUI_GRID_CENTER_H;
				};
				class selectorText : RscText
				{
					shadow = 0;
					text = "To:";
					font = "PuristaSemiBold";
					colorText[] = {0.2,0.2,0.2,1};
					idc = -1;
					w = 1.5 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 17.5 * GUI_GRID_CENTER_H;
					wholeHeight = 5 * GUI_GRID_CENTER_H;
				};
				class selector : RscCombo
				{
					onLoad = "uiNamespace setVariable ['bravo_messenger_playerList', _this select 0]";
					shadow = 0;
					font = "PuristaSemiBold";
					colorText[] = {0.2,0.2,0.2,1};
					colorActive[] = {0.43,0.53,0.53,1};
					colorScrollbar[] = {0.2,0.2,0.2,1};
					colorSelectBackground[] = {0.2,0.2,0.2,1};
					colorSelect[] = {0.43,0.53,0.53,1};
					colorBackground[] = {0.43,0.53,0.53,1};
					colorBackgroundActive[] = {0.43,0.53,0.53,1};
					arrowEmpty = "#(rgb,1,1,1)color(0.2,0.2,0.2,1)";
					arrowFull = "#(rgb,1,1,1)color(0.1,0.1,0.1,0)";
					class ComboScrollBar : ComboScrollBar
					{
						arrowEmpty = "#(rgb,1,1,1)color(0.2,0.2,0.2,1)";
						arrowFull = "#(rgb,1,1,1)color(0.1,0.1,0.1,0)";
						color[] = {0.1,0.1,0.1,0.8};
					};
					idc = -1;
					w = 13 * GUI_GRID_CENTER_W;
					h = 1.5 * GUI_GRID_CENTER_H;
					x = 2.5 * GUI_GRID_CENTER_W;
					y = 17.5 * GUI_GRID_CENTER_H;
					wholeHeight = 5 * GUI_GRID_CENTER_H;
				};
				class innerGroup : RscControlsGroupNoHScrollBars
				{
					onLoad = "uiNamespace setVariable ['bravo_messenger_messageListGroup', _this select 0];"
					w = 23 * GUI_GRID_CENTER_W;
					h = 15.5 * GUI_GRID_CENTER_H;
					x = 1 * GUI_GRID_CENTER_W;
					y = 2 * GUI_GRID_CENTER_H;
					class VScrollbar : VScrollbar
					{
						arrowEmpty = "#(rgb,1,1,1)color(0.2,0.2,0.2,1)";
						arrowFilled = "";
						color[] = {0.2,0.2,0.2,1};
						autoScrollEnabled = 0;
					};
					class controls
					{
						class messageList : RscStructuredText
						{
							onLoad = "uiNamespace setVariable ['bravo_messenger_messageList', _this select 0]; (_this#0) ctrlEnable false";
							text = "";
							font = "PuristaSemiBold";
							colorText[] = {0.2,0.2,0.2,1};
							shadow = 0;
							idc = -1;
							w = 23 * GUI_GRID_CENTER_W;
							h = 14.5 * GUI_GRID_CENTER_H;
							x = 0 * GUI_GRID_CENTER_W;
							y = 0 * GUI_GRID_CENTER_H;
							class attributes
							{
								font = "PuristaSemiBold";
								color = "#333333";
								colorlink = "#333333";
								align = "left";
								shadow = 0;
							};
						};
					};
				};
				
			};
		};
	};
};

class bravo_messenger_displayAnon : bravo_messenger_display
{
	onKeyDown = "if ((_this#1) == 28) then {true call bravo_fnc_messengerSendMessage};";
	class controls : controls
	{
		class group : group
		{
			
			class controls : controls
			{
				class bg : bg
				{};
				class bg2 : bg2
				{};
				class bg3 : bg3
				{};
				class buttonCancel : buttonCancel
				{};
				class message : message
				{};
				class selector : selector
				{};
				class selectorText : selectorText
				{};
				class buttonSend : buttonSend
				{
					onButtonClick = "true call bravo_fnc_messengerSendMessage";
				};
				class innerGroup : innerGroup
				{
					class controls : controls
					{
						class messageDisplay : RscTextMulti
						{
							onLoad = "(_this#0) ctrlEnable false";
							text = "Anonymous mode: messages sent in this mode will appear to come from an unknown sender. They will also be copied to your personal phone. This phone retains no history and cannot be directly contacted.";
							font = "PuristaSemiBold";
							colorText[] = {0.2,0.2,0.2,1};
							shadow = 0;
							idc = -1;
							w = 23 * GUI_GRID_CENTER_W;
							h = 10 * GUI_GRID_CENTER_H;
							x = 0 * GUI_GRID_CENTER_W;
							y = 2 * GUI_GRID_CENTER_H;
						};
					};
				};
				
			};
		};
	};
};