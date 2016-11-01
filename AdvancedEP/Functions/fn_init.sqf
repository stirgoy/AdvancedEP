/*
	fn_init.sqf
	Stirgoy
*/

//Solo en jugadores exluimos HC y servidores dedicados
if (isDedicated || !hasInterface) exitWith {};

_carga = [] spawn{
//log timers
_time = time;
_ftime = time;

diag_log "AEP_LOG >> Esperando a jugador";

//esperamos la carga del jugador y la pantalla de juego
waitUntil {!isNull player && player == player};
diag_log format["AEP_LOG >> Jugador encontrado en: %1. Esperando diplay 46...",(_time - time)];
_time = time;

waitUntil {!isNull (findDisplay 46)};
diag_log format["AEP_LOG >> Display 46 encontrado en: %1. Cargando variables ,EVH y funciones...",(_time - time)];
_time = time;

//cargamos variables base
call compile PreprocessFileLineNumbers "AdvancedEP\Functions\vars.sqf";

//cargamos controladores de eventos
K_H_ = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call AEP_fnc_keyHandler"];

//funciones extra
Mapear = compileFinal " ( (_this select 0) - (_this select 1) ) * ( (_this select 4) - (_this select 3) ) / ( (_this select 2) - (_this select 1) ) + (_this select 3) ";

//cargamos ajustes
["init"] call AEP_fnc_loadSettings;

//Actualizamos a version 1.1 si los ajustes estan en version 1
//Necesito mirar si no existe para evitar errores en mods actualizados
_ch = profileNamespace getVariable "AEP_m_notif";
if (isNil "_ch") then {profileNamespace setVariable ["AEP_m_notif",0]; saveProfileNamespace;};

//Creamos canal de radio para mostrar el volumen
AEP_radio = radioChannelCreate [[0,0.18,0.22,1], "AdvancedEP", "AdvancedEP", [player],false];

//a funcionar
diag_log format["AEP_LOG >> Variables y EVH cargados en: %1",(_time - time)];
diag_log format["AEP_LOG >> Jugador preparado en: %1",(_ftime - time)];
};