/*
	fn_menu_cmb_selected.sqf
	Stirgoy
*/

_modo = param [0,-1,[0]];
if (_modo < 0 || _modo > 5) exitWith {};

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

_ind = -1;
_arr = uiNamespace getVariable "AEP_keyArray";

switch (_modo) do
{
	case 0:
	{
		_ind = lbCurSel _cmb_tapones;
		_setV = _arr select _ind;
		AEP_key_tapon = _setV;
	};

	case 1:
	{
		_ind = lbCurSel _cmb_poner;
		_setV = _arr select _ind;
		AEP_key_poner = _setV;
	};

	case 2:
	{
		_ind = lbCurSel _cmb_quitar;
		_setV = _arr select _ind;
		AEP_key_quitar = _setV;
	};

	case 3:
	{
		_ind = lbCurSel _cmb_masv;
		_setV = _arr select _ind;
		AEP_key_masVol = _setV;
	};

	case 4:
	{
		_ind = lbCurSel _cmb_menosv;
		_setV = _arr select _ind;
		AEP_key_menosVol = _setV;
	};

	case 5:
	{
		_ind = lbCurSel _cmb_menu;
		_setV = _arr select _ind;
		AEP_key_menu = _setV;
	};

};
