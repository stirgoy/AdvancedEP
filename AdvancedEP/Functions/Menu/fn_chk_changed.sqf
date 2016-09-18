/*
	fn_chk_changed.sqf
	Stirgoy
*/

_mode =  param[0,-1,[0]];
_type =  param[1,-1,[0]];

if (_mode < 0 || _mode > 5) exitWith {};
if (_type < 0 || _type > 1) exitWith {};

disableSerialization;

//display
_display = findDisplay 43956;

//controles
_chk_taponesC = _display displayCtrl 2800;
_chk_taponesS = _display displayCtrl 2801;

_chk_poner_C = _display displayCtrl 2802;
_chk_poner_S = _display displayCtrl 2803;

_chk_quitar_C = _display displayCtrl 2804;
_chk_quitar_S = _display displayCtrl 2805;

_chk_masv_C = _display displayCtrl 2806;
_chk_masv_S = _display displayCtrl 2807;

_chk_menosv_C = _display displayCtrl 2808;
_chk_menosv_S = _display displayCtrl 2809;

_chk_menu_C = _display displayCtrl 2810;
_chk_meun_S = _display displayCtrl 2811;

//_mode = n ajuste; _type = ctrl =0, shift = 1
switch (_mode) do
{
	case 0:
	{
		if (_type == 0) then { AEP_key_taponCTRL = cbChecked _chk_taponesC; };
		if (_type == 1) then { AEP_key_taponSHIFT = cbChecked _chk_taponesS; };
	};

	case 1:
	{
		if (_type == 0) then { AEP_key_ponerCTRL = cbChecked _chk_poner_C; };
		if (_type == 1) then { AEP_key_ponerSHIFT = cbChecked _chk_poner_S; };
	};

	case 2:
	{
		if (_type == 0) then { AEP_key_quitarCTRL = cbChecked _chk_quitar_C; };
		if (_type == 1) then { AEP_key_quitarSHIFT = cbChecked _chk_quitar_S; };
	};

	case 3:
	{
		if (_type == 0) then { AEP_key_masVolCTRL = cbChecked _chk_masv_C; };
		if (_type == 1) then { AEP_key_masVolSHIFT = cbChecked _chk_masv_S; };
	};

	case 4:
	{
		if (_type == 0) then { AEP_key_menosVolCTRL = cbChecked _chk_menosv_C; };
		if (_type == 1) then { AEP_key_menosVolSHIFT = cbChecked _chk_menosv_S; };
	};

	case 5:
	{
		if (_type == 0) then { AEP_key_menuCTRL = cbChecked _chk_menu_C; };
		if (_type == 1) then { AEP_key_menuSHIFT = cbChecked _chk_meun_S; };
	};

};

uiNamespace setVariable ["AEP_setting_changed",false];