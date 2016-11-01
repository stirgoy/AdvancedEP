/*
	fn_menu_cmb_selected.sqf
	Stirgoy
*/

_modo = param [0,-1,[0]];
if (_modo < 0 || _modo > 6) exitWith {};

disableSerialization;

//display
_display = findDisplay 43956;

//controles
//cmb
_cmb_tapones = _display displayCtrl 2100;
_cmb_poner = _display displayCtrl 2101;
_cmb_quitar = _display displayCtrl 2102;
_cmb_masv = _display displayCtrl 2103;
_cmb_menosv = _display displayCtrl 2104;
_cmb_menu = _display displayCtrl 2105;
_cmb_modo = _display displayCtrl 2106;

_ind = -1;
//array con listado de teclas
_arr = uiNamespace getVariable "AEP_keyArray";
//necesario para evitar la seleccion multiple de la misma tecla
_arrEnUso = [AEP_key_tapon,AEP_key_poner,AEP_key_quitar,AEP_key_masVol,AEP_key_menosVol,AEP_key_menu];
//Necesario para evitar la comprovacion en la carga de datos
_can = uiNamespace getVariable "AEP_menu_cargado";

//_modo = n combo cambiamos el valor por el seleccionado por el usuario
switch (_modo) do
{
	case 0:
	{
		_ind = lbCurSel _cmb_tapones;
		_setV = _arr select _ind;
		if (_setV in _arrEnUso && _can) exitWith {_cmb_tapones lbSetCurSel (_listArray find AEP_key_tapon); hint (localize "STR_STR_AEP_notif_sett_cantrepeat");};
		AEP_key_tapon = _setV;
	};

	case 1:
	{
		_ind = lbCurSel _cmb_poner;
		_setV = _arr select _ind;
		if (_setV in _arrEnUso && _can) exitWith {_cmb_tapones lbSetCurSel (_listArray find AEP_key_poner); hint (localize "STR_STR_AEP_notif_sett_cantrepeat");};
		AEP_key_poner = _setV;
	};

	case 2:
	{
		_ind = lbCurSel _cmb_quitar;
		_setV = _arr select _ind;
		if (_setV in _arrEnUso && _can) exitWith {_cmb_tapones lbSetCurSel (_listArray find AEP_key_quitar); hint (localize "STR_STR_AEP_notif_sett_cantrepeat");};
		AEP_key_quitar = _setV;
	};

	case 3:
	{
		_ind = lbCurSel _cmb_masv;
		_setV = _arr select _ind;
		if (_setV in _arrEnUso && _can) exitWith {_cmb_tapones lbSetCurSel (_listArray find AEP_key_masVol); hint (localize "STR_STR_AEP_notif_sett_cantrepeat");};
		AEP_key_masVol = _setV;
	};

	case 4:
	{
		_ind = lbCurSel _cmb_menosv;
		_setV = _arr select _ind;
		if (_setV in _arrEnUso && _can) exitWith {_cmb_tapones lbSetCurSel (_listArray find AEP_key_menosVol); hint (localize "STR_STR_AEP_notif_sett_cantrepeat");};
		AEP_key_menosVol = _setV;
	};

	case 5:
	{
		_ind = lbCurSel _cmb_menu;
		_setV = _arr select _ind;
		if (_setV in _arrEnUso && _can) exitWith {_cmb_tapones lbSetCurSel (_listArray find AEP_key_menu); hint (localize "STR_STR_AEP_notif_sett_cantrepeat");};
		AEP_key_menu = _setV;
	};

	case 6:
	{
		_data = _cmb_modo lbData (lbCurSel _cmb_modo);
		_data = parseNumber _data;
		AEP_modo_notif = _data;
	};

};

