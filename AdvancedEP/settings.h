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
			w = 0.348509 * safezoneW;
			h = 0.527766 * safezoneH;
			colorBackground[] = {0.1,0.2,0.1,0.85};
		};
		class title: RscText
		{
			idc = -1;
			text = "$STR_STR_AEP_settings_tit";
			x = 0.294816 * safezoneW + safezoneX;
			y = 0.376854 * safezoneH + safezoneY;
			w = 0.348498 * safezoneW;
			h = 0.0307863 * safezoneH;
			colorBackground[] = {0.05,0.1,0.05,1};
		};
		class tit_tapones: RscText
		{
			idc = -1;
			text = "$STR_AEP_settings_tit_switch";
			x = 0.463912 * safezoneW + safezoneX;
			y = 0.412039 * safezoneH + safezoneY;
			w = 0.153627 * safezoneW;
			h = 0.0263885 * safezoneH;
			colorBackground[] = {0.05,0.1,0.05,1};
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
			colorBackground[] = {0.05,0.1,0.05,1};
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
			colorBackground[] = {0.05,0.1,0.05,1};
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
			colorBackground[] = {0.05,0.1,0.05,1};
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
			colorBackground[] = {0.05,0.1,0.05,1};
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
			colorBackground[] = {0.05,0.1,0.05,1};
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
	};

	class controls
	{
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

	};
};