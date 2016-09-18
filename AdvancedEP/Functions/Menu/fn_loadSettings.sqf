/*
	fn_loadSettings.sqf
	Stirgoy
*/

_nilv = profileNamespace getVariable "AEP_k_tapon";
if ( isNil "_nilv" ) then { [] call AEP_fnc_saveSettings; };

AEP_key_taponCTRL = profileNamespace getVariable "AEP_k_taponC";
AEP_key_taponSHIFT = profileNamespace getVariable "AEP_k_taponS";
AEP_key_tapon = profileNamespace getVariable "AEP_k_tapon";

AEP_key_ponerCTRL = profileNamespace getVariable "AEP_k_ponerC";
AEP_key_ponerSHIFT = profileNamespace getVariable "AEP_k_ponerS";
AEP_key_poner = profileNamespace getVariable "AEP_k_poner";

AEP_key_quitarCTRL = profileNamespace getVariable "AEP_k_quitarC";
AEP_key_quitarSHIFT = profileNamespace getVariable "AEP_k_quitarS";
AEP_key_quitar = profileNamespace getVariable "AEP_k_quitar";

AEP_key_masVolCTRL = profileNamespace getVariable "AEP_k_masVolC";
AEP_key_masVolSHIFT = profileNamespace getVariable "AEP_k_masVolS";
AEP_key_masVol = profileNamespace getVariable "AEP_k_masVol";

AEP_key_menosVolCTRL = profileNamespace getVariable "AEP_k_menosVolC";
AEP_key_menosVolSHIFT = profileNamespace getVariable "AEP_k_menosVolS";
AEP_key_menosVol = profileNamespace getVariable "AEP_k_menosVol";

AEP_key_menuCTRL = profileNamespace getVariable "AEP_k_menuC";
AEP_key_menuSHIFT = profileNamespace getVariable "AEP_k_menuS";
AEP_key_menu = profileNamespace getVariable "AEP_k_menu";
