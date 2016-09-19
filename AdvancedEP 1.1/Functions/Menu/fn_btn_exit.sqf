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
_cmb_modo = _display displayCtrl 2106;
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

_ind = lbCurSel _cmb_modo;
_c18 = if (AEP_modo_notif == _ind) then {true} else {false};

//funcion temporal
_salir_ = {
	uiNamespace setVariable ["AEP_setting_changed",nil];
	uiNamespace setVariable ['AEP_keyArray',nil];
	uiNamespace setVariable ["AEP_menu_cargado",nil];
	_display displayRemoveEventHandler ["KeyDown",evh_dis];
	evh_dis = nil;
	closeDialog 0;
};

//Si no hay cambios salimos
if (_c0 && _c12 && _c13 && _c14 && _c15 && _c16 && _c17 && _c18) exitWith { [] call _salir_; };

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
[] call _salir_;
