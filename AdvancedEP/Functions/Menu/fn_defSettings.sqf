/*
	fn_defSettings.sqf
	Stirgoy
*/

_preg = [
	localize "STR_STR_AEP_settings_exit_question_def",
	localize "STR_STR_AEP_settings_exit_tit_def",
	localize "STR_AEP_yes",
	localize "STR_AEP_no"
] call BIS_fnc_guiMessage;

//si no quiere salimos
if (!_preg) exitWith {};

//close menu
closeDialog 0;
uiSleep 0.2;

//set
AEP_key_taponCTRL = false;
AEP_key_taponSHIFT = true;
AEP_key_tapon = "P";
AEP_key_ponerCTRL = false;
AEP_key_ponerSHIFT = false;
AEP_key_poner = "INSERT";
AEP_key_quitarCTRL = false;
AEP_key_quitarSHIFT = false;
AEP_key_quitar = "DEL";
AEP_key_masVolCTRL = false;
AEP_key_masVolSHIFT = false;
AEP_key_masVol = "INICIO";
AEP_key_menosVolCTRL = false;
AEP_key_menosVolSHIFT = false;
AEP_key_menosVol = "END";
AEP_key_menuCTRL = true;
AEP_key_menuSHIFT = true;
AEP_key_menu = "O";
AEP_modo_notif = 0;

//save
profileNamespace setVariable ["AEP_k_taponC",AEP_key_taponCTRL];
profileNamespace setVariable ["AEP_k_taponS",AEP_key_taponSHIFT];
profileNamespace setVariable ["AEP_k_tapon",AEP_key_tapon];

profileNamespace setVariable ["AEP_k_ponerC",AEP_key_ponerCTRL];
profileNamespace setVariable ["AEP_k_ponerS",AEP_key_ponerSHIFT];
profileNamespace setVariable ["AEP_k_poner",AEP_key_poner];

profileNamespace setVariable ["AEP_k_quitarC",AEP_key_quitarCTRL];
profileNamespace setVariable ["AEP_k_quitarS",AEP_key_quitarSHIFT];
profileNamespace setVariable ["AEP_k_quitar",AEP_key_quitar];

profileNamespace setVariable ["AEP_k_masVolC",AEP_key_masVolCTRL];
profileNamespace setVariable ["AEP_k_masVolS",AEP_key_masVolSHIFT];
profileNamespace setVariable ["AEP_k_masVol",AEP_key_masVol];

profileNamespace setVariable ["AEP_k_menosVolC",AEP_key_menosVolCTRL];
profileNamespace setVariable ["AEP_k_menosVolS",AEP_key_menosVolSHIFT];
profileNamespace setVariable ["AEP_k_menosVol",AEP_key_menosVol];

profileNamespace setVariable ["AEP_k_menuC",AEP_key_menuCTRL];
profileNamespace setVariable ["AEP_k_menuS",AEP_key_menuSHIFT];
profileNamespace setVariable ["AEP_k_menu",AEP_key_menu];

profileNamespace setVariable ["AEP_m_notif",AEP_modo_notif];
//persistencia
saveProfileNamespace;

//aviso
_pre = "<t><img size='3'image='AdvancedEP\logo.paa'/> <br/><br/><t/><t font='TahomaB' color='#02B037' size='0.9'>%1<t/>";
_loc = localize "STR_STR_AEP_settings_def_saved";
_pre = format [_pre,_loc];
hint parseText _pre;

//abrimos el menu
uiSleep 0.2;
createDialog "AEP_settings";
