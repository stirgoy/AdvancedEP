
class CfgPatches
{
	class AdvancedEP
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		version = 1.1;
		author = "Stirgoy";
		picture = "AdvancedEP\logo.paa";
	};
};

//Definicion de scripts
class CfgFunctions
{
	class AEP_core
	{
		tag = "AEP";
		class AEP_local
		{
			file = "AdvancedEP\Functions";
			class init {postInit = 1;};	//carga del mod
			class keyHandler {};		//manejador de teclas
			class KHC {};				//Alternador keyHandler (pasa de int a str)
			class tapones {};			//manejador de tapones
			class Volumen {};			//manejador de mensajes
		};

		//usados por GUI
		class AEP_menu
		{
			file = "AdvancedEP\Functions\Menu";
			class saveSettings {};		//GUI atado a evento & init
			class loadSettings {};		//GUI atado a evento & init
			class defSettings {};		//GUI atado a evento
			class menu_open {};			//GUI atado a evento
			class menu_cmb_selected {}; //GUI atado a evento
			class chk_changed {}; 		//GUI atado a evento
			class btn_exit {};	 		//GUI atado a evento
		};
	};
};


//controles dialogs necesario para GUI
///////////////////////////////////////////////////////////////////////////
/// Styles
///////////////////////////////////////////////////////////////////////////

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102
#define CT_CHECKBOX         77

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////
class RscText
{
	deletable = 0;
	fade = 0;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	access = 0;
	type = 0;
	idc = -1;
	text = "";
	fixedWidth = 0;
	colorShadow[] =
	{
		0,
		0,
		0,
		0.5
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
};
class RscTextB
{
	deletable = 0;
	fade = 0;
	colorBackground[] =
	{
		0.38,
		0.38,
		0.38,
		1
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	access = 0;
	type = 0;
	idc = -1;
	text = "";
	fixedWidth = 0;
	colorShadow[] =
	{
		0,
		0,
		0,
		0.5
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
};
class RscStructuredText
{
	deletable = 0;
	fade = 0;
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
	};
	access = 1;
	type = 13;
	font = "EtelkaNarrowMediumPro";
	idc = -1;
	style = 0;
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;
};
class RscPicture
{
	deletable = 0;
	fade = 0;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscProgress
{
	type = 8;
	style = 0;
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "";
	shadow = 2;
	colorFrame[] =
	{
		0,
		0,
		0,
		1
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0.7
	};
	colorBar[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"
	};
};
class RscEdit
{
	deletable = 0;
	fade = 0;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorSelection[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	autocomplete = "";
	text = "";
	size = 0.2;
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	style = "0x00 + 0x40";
	font = "PuristaMedium";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
};
class RscCombo
{
	deletable = 0;
	fade = 0;
	colorSelect[] =
	{
		0,
		0,
		0,
		1
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		1
	};
	colorScrollbar[] =
	{
		1,
		0,
		0,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorPicture[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureSelected[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorPictureRight[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightSelected[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorTextRight[] =
	{
		1,
		1,
		1,
		1
	};
	colorSelectRight[] =
	{
		0,
		0,
		0,
		1
	};
	colorSelect2Right[] =
	{
		0,
		0,
		0,
		1
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	soundSelect[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundSelect",
		0.1,
		1
	};
	soundExpand[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundExpand",
		0.1,
		1
	};
	soundCollapse[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundCollapse",
		0.1,
		1
	};
	class ComboScrollBar
	{
		color[] =
		{
			1,
			1,
			1,
			1
		};
	};
	access = 0;
	type = 4;
	maxHistoryDelay = 1;
	colorSelectBackground[] =
	{
		1,
		1,
		1,
		0.7
	};
	colorActive[] =
	{
		1,
		0,
		0,
		1
	};
	style = "0x10 + 0x200";
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
};
class RscListBox
{
	deletable = 0;
	fade = 0;
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorScrollbar[] =
	{
		1,
		0,
		0,
		0
	};
	colorSelect[] =
	{
		0,
		0,
		0,
		1
	};
	colorSelect2[] =
	{
		0,
		0,
		0,
		1
	};
	colorSelectBackground[] =
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorSelectBackground2[] =
	{
		1,
		1,
		1,
		0.5
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0.3
	};
	soundSelect[] =
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.09,
		1
	};
	colorPicture[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureSelected[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorPictureRight[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightSelected[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorTextRight[] =
	{
		1,
		1,
		1,
		1
	};
	colorSelectRight[] =
	{
		0,
		0,
		0,
		1
	};
	colorSelect2Right[] =
	{
		0,
		0,
		0,
		1
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	class ListScrollBar
	{
		color[] =
		{
			1,
			1,
			1,
			1
		};
		autoScrollEnabled = 1;
	};
	access = 0;
	type = 5;
	rowHeight = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorShadow[] =
	{
		0,
		0,
		0,
		0.5
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = 16;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	period = 1.2;
	maxHistoryDelay = 1;
};
class RscButton
{
	deletable = 0;
	fade = 0;
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundDisabled[] =
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundActive[] =
	{
		0,
		0,
		0,
		1
	};
	colorFocused[] =
	{
		0,
		0,
		0,
		1
	};
	colorShadow[] =
	{
		0,
		0,
		0,
		0
	};
	colorBorder[] =
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	access = 0;
	type = 1;
	text = "";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class RscShortcutButton
{
	deletable = 0;
	fade = 0;
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	shortcuts[] =
	{
	};
	color[] =
	{
		1,
		1,
		1,
		1
	};
	colorFocused[] =
	{
		1,
		1,
		1,
		1
	};
	color2[] =
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	colorBackgroundFocused[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	colorBackground2[] =
	{
		1,
		1,
		1,
		1
	};
	soundEnter[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	type = 16;
	x = 0.1;
	y = 0.1;
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	class AttributesImage
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
	};
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	textSecondary = "";
	colorSecondary[] =
	{
		1,
		1,
		1,
		1
	};
	colorFocusedSecondary[] =
	{
		1,
		1,
		1,
		1
	};
	color2Secondary[] =
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorDisabledSecondary[] =
	{
		1,
		1,
		1,
		0.25
	};
	sizeExSecondary = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "PuristaMedium";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	period = 0.4;
	font = "PuristaMedium";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	action = "";
};
class RscShortcutButtonMain
{
	color[] =
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0.0145;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
	class TextPos
	{
		left = "(((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class AttributesImage
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "false";
	};
	idc = -1;
	style = 0;
	default = 0;
	w = 0.313726;
	h = 0.104575;
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\disabled_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	period = 0.5;
	font = "PuristaMedium";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	text = "";
	action = "";
};
class RscFrame
{
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = 0.02;
	text = "";
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
};
class RscSlider
{
	deletable = 0;
	fade = 0;
	color[] =
	{
		1,
		1,
		1,
		0.8
	};
	colorActive[] =
	{
		1,
		1,
		1,
		1
	};
	access = 0;
	type = 3;
	style = 1024;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.025;
};
class IGUIBack
{
	colorText[] =
	{
		0,
		0,
		0,
		0
	};
	colorbackground[] =
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	font = "PuristaMedium";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
};
class RscCheckBox
{
	color[] =
	{
		1,
		1,
		1,
		0.7
	};
	colorFocused[] =
	{
		1,
		1,
		1,
		1
	};
	colorHover[] =
	{
		1,
		1,
		1,
		1
	};
	colorPressed[] =
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.2
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundFocused[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundHover[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundPressed[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundDisabled[] =
	{
		0,
		0,
		0,
		0
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	soundEnter[] =
	{
		"",
		0.1,
		1
	};
	soundPush[] =
	{
		"",
		0.1,
		1
	};
	soundClick[] =
	{
		"",
		0.1,
		1
	};
	soundEscape[] =
	{
		"",
		0.1,
		1
	};
	idc = -1;
	type = 77;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
};
class RscTextCheckBox
{
	colorText[] =
	{
		1,
		0,
		0,
		1
	};
	color[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorTextSelect[] =
	{
		0,
		0.8,
		0,
		1
	};
	colorSelectedBg[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",
		1
	};
	colorSelect[] =
	{
		0,
		0,
		0,
		1
	};
	colorTextDisable[] =
	{
		0.4,
		0.4,
		0.4,
		1
	};
	colorDisable[] =
	{
		0.4,
		0.4,
		0.4,
		1
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	strings[] =
	{
		"UNCHECKED"
	};
	checked_strings[] =
	{
		"CHECKED"
	};
	idc = -1;
	type = 7;
	style = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = 1;
	columns = 1;
};
class RscButtonMenu
{
	colorBackground[] =
	{
		0.56,
		0.16,
		0,
		0.4
	};
	colorBackgroundFocused[] =
	{
		1,
		1,
		1,
		1
	};
	colorBackground2[] =
	{
		0.75,
		0.75,
		0.75,
		1
	};
	color[] =
	{
		1,
		1,
		1,
		1
	};
	colorFocused[] =
	{
		0,
		0,
		0,
		1
	};
	color2[] =
	{
		0,
		0,
		0,
		1
	};
	colorText[] =
	{
		0.82,
		0.27,
		0,
		0.8
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	class TextPos
	{
		left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "5.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = 0;
		w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
		h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	soundEnter[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.09,
		1
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.09,
		1
	};
	soundClick[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.09,
		1
	};
	soundEscape[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.09,
		1
	};
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	textSecondary = "";
	colorSecondary[] =
	{
		1,
		1,
		1,
		1
	};
	colorFocusedSecondary[] =
	{
		0,
		0,
		0,
		1
	};
	color2Secondary[] =
	{
		0,
		0,
		0,
		1
	};
	colorDisabledSecondary[] =
	{
		1,
		1,
		1,
		0.25
	};
	sizeExSecondary = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "PuristaLight";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};
class RscButtonMenuOK
{
	shortcuts[] =
	{
		"0x00050000 + 0",
		28,
		57,
		156
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",
		0.09,
		1
	};
	idc = 1;
	default = 1;
	text = "Aceptar";
};
class RscButtonMenuCancel
{
	shortcuts[] =
	{
		"0x00050000 + 1"
	};
	idc = 2;
	text = "Cancelar";
};
class RscControlsGroup
{
	deletable = 0;
	fade = 0;
	class VScrollbar
	{
		color[] =
		{
			1,
			1,
			1,
			1
		};
		width = 0.021;
		autoScrollEnabled = 1;
	};
	class HScrollbar
	{
		color[] =
		{
			1,
			1,
			1,
			1
		};
		height = 0.028;
	};
	class Controls
	{
	};
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;
};


/*//////////////////////
		GUI ajustes
////////////////////////
*/
class AEP_settings
{
	idd = 43956;
	name="AEP_settings";
	movingEnabled = 0;
	enableSimulation = 1;
	onLoad = "[] spawn AEP_fnc_menu_open;";
	onUnload = "[] spawn AEP_fnc_btn_exit;";

	class controlsBackground
	{
		class Back: RscText
		{
			idc = -1;
			x = 0.294815 * safezoneW + safezoneX;
			y = 0.392247 * safezoneH + safezoneY;
			w = 0.422741 * safezoneW;
			h = 0.527766 * safezoneH;
			colorBackground[] = {0,0.18,0.22,0.85};
		};

		class title: RscText
		{
			idc = -1;
			text = "$STR_STR_AEP_settings_tit";
			x = 0.294816 * safezoneW + safezoneX;
			y = 0.376854 * safezoneH + safezoneY;
			w = 0.42273 * safezoneW;
			h = 0.0307863 * safezoneH;
			colorBackground[] = {0,0.05,0.08,1};
		};
		class tit_tapones: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_tit_switch";
			x = 0.463912 * safezoneW + safezoneX;
			y = 0.412039 * safezoneH + safezoneY;
			w = 0.153627 * safezoneW;
			h = 0.0263885 * safezoneH;
			colorBackground[] = {0,0.05,0.08,1};
		};
		class titcmb_tapones: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_keyAssign";
			x = 0.530932 * safezoneW + safezoneX;
			y = 0.445024 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class tit_CTRL_tapones: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineC";
			x = 0.530932 * safezoneW + safezoneX;
			y = 0.480209 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class titSHIFT_tapones: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineS";
			x = 0.530932 * safezoneW + safezoneX;
			y = 0.513194 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class tit_put: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_tit_put";
			x = 0.463912 * safezoneW + safezoneX;
			y = 0.565971 * safezoneH + safezoneY;
			w = 0.153627 * safezoneW;
			h = 0.0263885 * safezoneH;
			colorBackground[] = {0,0.05,0.08,1};
		};
		class tit_cmb: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_keyAssign";
			x = 0.530932 * safezoneW + safezoneX;
			y = 0.598956 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class tit_put_ctrl: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineC";
			x = 0.530932 * safezoneW + safezoneX;
			y = 0.634141 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class tit_shift_put: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineS";
			x = 0.530932 * safezoneW + safezoneX;
			y = 0.667126 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class tit_quit: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_tit_quit";
			x = 0.29894 * safezoneW + safezoneX;
			y = 0.565971 * safezoneH + safezoneY;
			w = 0.153627 * safezoneW;
			h = 0.0263885 * safezoneH;
			colorBackground[] = {0,0.05,0.08,1};
		};
		class RscText_1011: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_keyAssign";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.598956 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1012: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineC";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.634141 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1013: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineS";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.667126 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1014: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_tit_volup";
			x = 0.469068 * safezoneW + safezoneX;
			y = 0.719903 * safezoneH + safezoneY;
			w = 0.153627 * safezoneW;
			h = 0.0263885 * safezoneH;
			colorBackground[] = {0,0.05,0.08,1};
		};
		class RscText_1015: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_keyAssign";
			x = 0.536088 * safezoneW + safezoneX;
			y = 0.755088 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1016: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineC";
			x = 0.536088 * safezoneW + safezoneX;
			y = 0.788073 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1017: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineS";
			x = 0.536088 * safezoneW + safezoneX;
			y = 0.821059 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1018: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_tit_voldown";
			x = 0.29894 * safezoneW + safezoneX;
			y = 0.719903 * safezoneH + safezoneY;
			w = 0.153627 * safezoneW;
			h = 0.0263885 * safezoneH;
			colorBackground[] = {0,0.05,0.08,1};
		};
		class RscText_1019: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_keyAssign";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.755088 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1020: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineC";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.788073 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1021: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineS";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.821059 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class tit_ajustes: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_tit_set";
			x = 0.29894 * safezoneW + safezoneX;
			y = 0.412039 * safezoneH + safezoneY;
			w = 0.153627 * safezoneW;
			h = 0.0263885 * safezoneH;
			colorBackground[] = {0,0.05,0.08,1};
		};
		class RscText_1023: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_keyAssign";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.445024 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1024: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineC";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.480209 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class RscText_1025: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_combineS";
			x = 0.36596 * safezoneW + safezoneX;
			y = 0.513194 * safezoneH + safezoneY;
			w = 0.0824863 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
		class tit_c_aviso: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_tit_aviso";
			x = 0.631978 * safezoneW + safezoneX;
			y = 0.412039 * safezoneH + safezoneY;
			w = 0.0783619 * safezoneW;
			h = 0.0263885 * safezoneH;
		};
};
	class controls
	{

		class pic_monitor: RscPicture
		{
			idc = -1;
			text = "AdvancedEP\logo.paa";
			x = 0.650537 * safezoneW + safezoneX;
			y = 0.799067 * safezoneH + safezoneY;
			w = 0.0577404 * safezoneW;
			h = 0.105553 * safezoneH;
		};

		class cmb_tapones: RscCombo
		{
			idc = 2100;
			onLBSelChanged = "[0] call AEP_fnc_menu_cmb_selected;";
			x = 0.463912 * safezoneW + safezoneX;
			y = 0.445024 * safezoneH + safezoneY;
			w = 0.0628953 * safezoneW;
			h = 0.0285875 * safezoneH;
		};
		class ch_ctrl_tapones: RscCheckbox
		{
			idc = 2800;
			onCheckedChanged = "[0,0] call AEP_fnc_chk_changed;";
			x = 0.510311 * safezoneW + safezoneX;
			y = 0.47801 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};
		class chSHIFT_tapones: RscCheckbox
		{
			idc = 2801;
			onCheckedChanged = "[0,1] call AEP_fnc_chk_changed;";
			x = 0.510311 * safezoneW + safezoneX;
			y = 0.510995 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};


		class cmb_put: RscCombo
		{
			idc = 2101;
			onLBSelChanged = "[1] call AEP_fnc_menu_cmb_selected;";
			x = 0.463912 * safezoneW + safezoneX;
			y = 0.598956 * safezoneH + safezoneY;
			w = 0.0628953 * safezoneW;
			h = 0.0285875 * safezoneH;
		};

		class chkCTRL_put: RscCheckbox
		{
			idc = 2802;
			onCheckedChanged = "[1,0] call AEP_fnc_chk_changed;";
			x = 0.510311 * safezoneW + safezoneX;
			y = 0.631942 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};
		class chk_put_shift: RscCheckbox
		{
			idc = 2803;
			onCheckedChanged = "[1,1] call AEP_fnc_chk_changed;";
			x = 0.510311 * safezoneW + safezoneX;
			y = 0.664927 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};


		class cmb_quit: RscCombo
		{
			idc = 2102;
			onLBSelChanged = "[2] call AEP_fnc_menu_cmb_selected;";
			x = 0.29894 * safezoneW + safezoneX;
			y = 0.598956 * safezoneH + safezoneY;
			w = 0.0628953 * safezoneW;
			h = 0.0285875 * safezoneH;
		};
		class ck_quit_CTRL: RscCheckbox
		{
			idc = 2804;
			onCheckedChanged = "[2,0] call AEP_fnc_chk_changed;";
			x = 0.345338 * safezoneW + safezoneX;
			y = 0.631942 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};
		class ch_quit_SHIFT: RscCheckbox
		{
			idc = 2805;
			onCheckedChanged = "[2,1] call AEP_fnc_chk_changed;";
			x = 0.345338 * safezoneW + safezoneX;
			y = 0.664927 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};


		class cmb_masv: RscCombo
		{
			idc = 2103;
			onLBSelChanged = "[3] call AEP_fnc_menu_cmb_selected;";
			x = 0.469068 * safezoneW + safezoneX;
			y = 0.752889 * safezoneH + safezoneY;
			w = 0.0628953 * safezoneW;
			h = 0.0285875 * safezoneH;
		};
		class ch_masv_ctrl: RscCheckbox
		{
			idc = 2806;
			onCheckedChanged = "[3,0] call AEP_fnc_chk_changed;";
			x = 0.515466 * safezoneW + safezoneX;
			y = 0.785874 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};
		class ch_masv_shift: RscCheckbox
		{
			idc = 2807;
			onCheckedChanged = "[3,1] call AEP_fnc_chk_changed;";
			x = 0.515466 * safezoneW + safezoneX;
			y = 0.81886 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};


		class cmb_bajar_ctrl: RscCombo
		{
			idc = 2104;
			onLBSelChanged = "[4] call AEP_fnc_menu_cmb_selected;";
			x = 0.29894 * safezoneW + safezoneX;
			y = 0.752889 * safezoneH + safezoneY;
			w = 0.0628953 * safezoneW;
			h = 0.0285875 * safezoneH;
		};
		class ch_najar_ctrl: RscCheckbox
		{
			idc = 2808;
			onCheckedChanged = "[4,0] call AEP_fnc_chk_changed;";
			x = 0.345338 * safezoneW + safezoneX;
			y = 0.785874 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};
		class ch_bajar_SHIFT: RscCheckbox
		{
			idc = 2809;
			onCheckedChanged = "[4,1] call AEP_fnc_chk_changed;";
			x = 0.345338 * safezoneW + safezoneX;
			y = 0.81886 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};


		class cmb_menu: RscCombo
		{
			idc = 2105;
			onLBSelChanged = "[5] call AEP_fnc_menu_cmb_selected;";
			x = 0.29894 * safezoneW + safezoneX;
			y = 0.445024 * safezoneH + safezoneY;
			w = 0.0628953 * safezoneW;
			h = 0.0285875 * safezoneH;
		};
		class ch_ctrl_menu: RscCheckbox
		{
			idc = 2810;
			onCheckedChanged = "[5,0] call AEP_fnc_chk_changed;";
			x = 0.345338 * safezoneW + safezoneX;
			y = 0.47801 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};
		class ch_shift_menu: RscCheckbox
		{
			idc = 2811;
			onCheckedChanged = "[5,1] call AEP_fnc_chk_changed;";
			x = 0.345338 * safezoneW + safezoneX;
			y = 0.510995 * safezoneH + safezoneY;
			w = 0.0185593 * safezoneW;
			h = 0.0329855 * safezoneH;
		};

		class btn_def: RscButton
		{
			idc = 1600;
			onMouseButtonClick = "[] spawn AEP_fnc_btn_exit;";
			text = "$STR_AEP_settings_tit_default";
			x = 0.304095 * safezoneW + safezoneX;
			y = 0.873835 * safezoneH + safezoneY;
			w = 0.0587716 * safezoneW;
			h = 0.0329856 * safezoneH;
		};
		class Btn_saveexit: RscButton
		{
			idc = 1601;
			onMouseButtonClick = "[] call AEP_fnc_saveSettings;";
			text = "$STR_AEP_settings_tit_saveexit";
			x = 0.43298 * safezoneW + safezoneX;
			y = 0.873835 * safezoneH + safezoneY;
			w = 0.0690826 * safezoneW;
			h = 0.0329856 * safezoneH;
		};

		class cmb_notifMODE: RscCombo
		{
			idc = 2106;
			onLBSelChanged = "[6] call AEP_fnc_menu_cmb_selected;";
			x = 0.629917 * safezoneW + safezoneX;
			y = 0.445024 * safezoneH + safezoneY;
			w = 0.0835173 * safezoneW;
			h = 0.0285875 * safezoneH;
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			onMouseButtonClick = "[] spawn AEP_fnc_defSettings;";
			text = "$STR_AEP_settings_tit_default2";
			x = 0.628887 * safezoneW + safezoneX;
			y = 0.565971 * safezoneH + safezoneY;
			w = 0.0845491 * safezoneW;
			h = 0.0329856 * safezoneH;
		};

	};
};

