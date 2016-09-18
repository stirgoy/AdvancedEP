/*
	fn_init.sqf
	Stirgoy
*/

if (isDedicated) exitWith {};

_time = time;
_ftime = time;

diag_log "AEP_LOG >> Esperando a jugador";

waitUntil {!isNull player && player == player};
diag_log format["AEP_LOG >> Jugador encontrado en: %1. Esperando diplay 46...",(_time - time)];
_time = time;

waitUntil {!isNull (findDisplay 46)};
diag_log format["AEP_LOG >> Display 46 encontrado en: %1. Cargando variables ,EVH y funciones...",(_time - time)];
_time = time;

call compile PreprocessFileLineNumbers "AdvancedEP\Functions\vars.sqf";

K_H_ = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call AEP_fnc_keyHandler"];

//funciones
Mapear = compileFinal " ( (_this select 0) - (_this select 1) ) * ( (_this select 4) - (_this select 3) ) / ( (_this select 2) - (_this select 1) ) + (_this select 3) ";

verInfo = compileFinal "

		_numero = AEP_sonido_actual;
		_numero = [_numero,0,1,0,100] call Mapear;

		_pre = ""<t><img size='3'image='AdvancedEP\logo.paa'/> <br/><t/><t font='TahomaB' color='#02B037' size='0.9'>%1%2<t/>"";
		_text = format [_pre,_numero,'%'];
		_text = parseText _text;
		hint _text;
";

//ajustes persistentes
[] call AEP_fnc_loadSettings;


diag_log format["AEP_LOG >> Variables y EVH cargados en: %1",(_time - time)];
diag_log format["AEP_LOG >> Jugador preparado en: %1",(_ftime - time)];
