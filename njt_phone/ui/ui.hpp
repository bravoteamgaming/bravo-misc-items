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
class ScrollBar;
class RscText;
class RscButton;
class RscControlsGroup
{
	class VScrollbar : ScrollBar
	{};
};
class RscControlsGroupNoHScrollbars : RscControlsGroup
{
	class VScrollbar : VScrollbar
	{};
};
class RscStructuredText;
class RscTextMulti;
class RscEdit;
class RscCombo
{
	class ComboScrollBar : ScrollBar
	{};
};
class RscListNBox;

#include "ui_zdas.hpp"
#include "ui_messenger.hpp"