/*
	fn_menu_open.sqf
	Stirgoy
*/

disableSerialization;
waitUntil { !isNull findDisplay 43956 };

//display
_display = findDisplay 43956;
//prevenimos cerrar sin pasar por script  1 = ESC
evh_dis = _display displayAddEventHandler ["KeyDown", "if( (_this select 1) == 1) then { [] spawn AEP_fnc_btnExit; }; true;"];

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


//keys
_listArray = ["1","2","3","4","5","6","7","8","9","0","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","F1","F2","F3","F4","F5","F6","F7","F8","F9","F10","F11","F12","N_0","N_1","N_2","N_3","N_4","N_5","N_6","N_7","N_8","N_9","N_.","N_ENTER","N_/","N_+","N_-","N_*","NUM","ESC","BKSP","TAB","ENTER","SPACE","MAYUS","SCROLL","PRINT","PAUSE","INICIO","END","UP","DOWN","LEFT","RIGTH","REPAG","AVPAG","INSERT","DEL","WIN_L","WIN_R"];
//necesario para otros scripts
uiNamespace setVariable ["AEP_keyArray",_listArray];

//necesario para evitar errores
uiNamespace setVariable ["AEP_menu_cargado",false];

//limpamos listas
lbClear _cmb_tapones;
lbClear _cmb_poner;
lbClear _cmb_quitar;
lbClear _cmb_masv;
lbClear _cmb_menosv;
lbClear _cmb_menu;
lbClear _cmb_modo;

//rellenamos listas
{
	_ind = _cmb_tapones lbAdd _x;
	_cmb_tapones lbSetData [_ind,_x];

}forEach _listArray;

{
	_ind = _cmb_poner lbAdd _x;
	_cmb_poner lbSetData [_ind,_x];

}forEach _listArray;

{
	_ind = _cmb_quitar lbAdd _x;
	_cmb_quitar lbSetData [_ind,_x];

}forEach _listArray;

{
	_ind = _cmb_masv lbAdd _x;
	_cmb_masv lbSetData [_ind,_x];

}forEach _listArray;

{
	_ind = _cmb_menosv lbAdd _x;
	_cmb_menosv lbSetData [_ind,_x];

}forEach _listArray;

{
	_ind = _cmb_menu lbAdd _x;
	_cmb_menu lbSetData [_ind,_x];

}forEach _listArray;

//Combo modo notificacion
{
	_text = localize _x;
	_ind = _cmb_modo lbAdd _text;
	_cmb_modo lbSetData [_ind,(str _ind)];

}foreach ["STR_AEP_cmb_mode_0","STR_AEP_cmb_mode_1","STR_AEP_cmb_mode_2"];

//Necesario para evitar check de repeticion de tecla
uiNamespace setVariable ["AEP_menu_cargado",true];

//seleccionamos la tecla asignada a cada combo:
_cmb_tapones lbSetCurSel (_listArray find AEP_key_tapon);
_cmb_poner lbSetCurSel (_listArray find  AEP_key_poner);
_cmb_quitar lbSetCurSel (_listArray find AEP_key_quitar);
_cmb_masv lbSetCurSel (_listArray find AEP_key_masVol);
_cmb_menosv lbSetCurSel (_listArray find AEP_key_menosVol);
_cmb_menu lbSetCurSel (_listArray find AEP_key_menu);
_cmb_modo lbSetCurSel AEP_modo_notif;

//Marcamos los chk
_chk_tapones_C cbSetChecked AEP_key_taponCTRL;
_chk_tapones_S cbSetChecked AEP_key_taponSHIFT;

_chk_poner_C cbSetChecked AEP_key_ponerCTRL;
_chk_poner_S cbSetChecked AEP_key_ponerSHIFT;

_chk_quitar_C cbSetChecked AEP_key_quitarCTRL;
_chk_quitarS cbSetChecked AEP_key_quitarSHIFT;

_chk_masv_C cbSetChecked AEP_key_masVolCTRL;
_chk_masv_S cbSetChecked AEP_key_masVolSHIFT;

_chk_menosv_C cbSetChecked AEP_key_menosVolCTRL;
_chk_menosv_S cbSetChecked AEP_key_menosVolSHIFT;

_chk_menu_C cbSetChecked AEP_key_menuCTRL;
_chk_menu_S cbSetChecked AEP_key_menuSHIFT;


uiNamespace setVariable ["AEP_setting_changed",true];