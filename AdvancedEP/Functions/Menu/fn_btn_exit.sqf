/*
	fn_btn_exit.sqf
	Stirgoy
*/


disableSerialization;

//display
_display = findDisplay 43956;
if (isNull _display) exitWith {};

//controles
//cmb
_cmb_tapones = _display displayCtrl 2100;
_cmb_poner = _display displayCtrl 2101;
_cmb_quitar = _display displayCtrl 2102;
_cmb_masv = _display displayCtrl 2103;
_cmb_menosv = _display displayCtrl 2104;
_cmb_menu = _display displayCtrl 2105;
//chk
_chk_tapones_C = _display displayCtrl 2800;
_chk_tapones_S = _display displayCtrl 2801;
_chk_poner_C = _display displayCtrl 2802;
_chk_poner_S = _display displayCtrl 2803;
_chk_quitar_C = _display displayCtrl 2804;
_chk_quitarS = _display displayCtrl 2805;
_chk_masv_C = _display displayCtrl 2806;
_chk_masv_S = _display displayCtrl 2807;
_chk_menosv_C = _display displayCtrl 2808;
_chk_menosv_S = _display displayCtrl 2809;
_chk_menu_C = _display displayCtrl 2810;
_chk_menu_S = _display displayCtrl 2811;

_arr = uiNamespace getVariable "AEP_keyArray";

//check check's xD
/*
_c0 = if (cbChecked _chk_tapones_C && AEP_key_taponCTRL) then {true} else {false};
_c1 = if (cbChecked _chk_tapones_S && AEP_key_taponSHIFT) then {true} else {false};
_c2 = if (cbChecked _chk_poner_C && AEP_key_ponerCTRL) then {true} else {false};
_c3 = if (cbChecked _chk_poner_S  && AEP_key_ponerSHIFT) then {true} else {false};
_c4 = if (cbChecked _chk_quitar_C && AEP_key_quitarCTRL) then {true} else {false};
_c5 = if (cbChecked _chk_quitarS  && AEP_key_quitarSHIFT) then {true} else {false};
_c6 = if (cbChecked _chk_masv_C && AEP_key_masVolCTRL) then {true} else {false};
_c7 = if (cbChecked _chk_masv_S  && AEP_key_masVolSHIFT) then {true} else {false};
_c8 = if (cbChecked _chk_menosv_C && AEP_key_menosVolCTRL) then {true} else {false};
_c9 = if (cbChecked _chk_menosv_S  && AEP_key_menosVolSHIFT) then {true} else {false};
_c10 = if (cbChecked _chk_menu_C && AEP_key_menuCTRL) then {true} else {false};
_c11 = if (cbChecked _chk_menu_S  && AEP_key_menuSHIFT) then {true} else {false};
*/
_c0 = uiNamespace getVariable "AEP_setting_changed";

//check combos
_ind = lbCurSel _cmb_tapones;
_temp = _arr select _ind;
_c12 = if (AEP_key_tapon == _temp) then {true} else {false};

_ind = lbCurSel _cmb_poner;
_temp = _arr select _ind;
_c13 = if (AEP_key_poner == _temp) then {true} else {false};

_ind = lbCurSel _cmb_quitar;
_temp = _arr select _ind;
_c14 = if (AEP_key_quitar == _temp) then {true} else {false};

_ind = lbCurSel _cmb_masv;
_temp = _arr select _ind;
_c15 = if (AEP_key_masVol == _temp) then {true} else {false};

_ind = lbCurSel _cmb_menosv;
_temp = _arr select _ind;
_c16 = if (AEP_key_menosVol == _temp) then {true} else {false};

_ind = lbCurSel _cmb_menu;
_temp = _arr select _ind;
_c17 = if (AEP_key_menu == _temp) then {true} else {false};

//Si no hay cambios salimos
//_c1 && _c2 && _c3 && _c4 && _c5 && _c6 && _c7 && _c8 && _c9 && _c10 && _c11 &&
if (_c0 && _c12 && _c13 && _c14 && _c15 && _c16 && _c17) exitWith
{
	uiNamespace setVariable ["AEP_setting_changed",nil];
	uiNamespace setVariable ['AEP_keyArray',nil];
	closeDialog 0;
};

//aviso save
_preg = [
	localize "STR_STR_AEP_settings_exit_question",
	localize "STR_STR_AEP_settings_exit_tit",
	localize "STR_AEP_yes",
	localize "STR_AEP_no"
] call BIS_fnc_guiMessage;

//save
if ( _preg ) then { [] call AEP_fnc_saveSettings; };

//descarga y cerramos
uiNamespace setVariable ["AEP_setting_changed",nil];
uiNamespace setVariable ['AEP_keyArray',nil];
_display displayRemoveEventHandler ["KeyDown",evh_dis];
evh_dis = nil;

closeDialog 0;
