/*
	fn_tapones.sqf
	Stirgoy
	_mode:
		0 = switch
		1 = put in
		2 = take out
		3 = + vol
		4 = - vol
*/

_mode = param [0,-1,[0]];

if (_mode == -1) exitWith {};


switch (_mode) do
{
	case 0:
	{
		if ( AEP_tiene_tapones ) then
		{
			0.1 fadeSound AEP_sonido;
			AEP_sonido_actual = AEP_sonido;
			AEP_tiene_tapones = false;
		}
		else
		{
			0.1 fadeSound AEP_sonido_mute;
			AEP_sonido_actual = AEP_sonido_mute;
			AEP_tiene_tapones = true;
		};
	};

	case 1:
	{
		0.1 fadeSound AEP_sonido_mute;
		AEP_sonido_actual = AEP_sonido_mute;
		AEP_tiene_tapones = true;
	};

	case 2:
	{
		0.1 fadeSound AEP_sonido;
		AEP_sonido_actual = AEP_sonido;
		AEP_tiene_tapones = false;
	};

	case 3:
	{
		AEP_sonido_actual = AEP_sonido_actual + 0.1;
		if (  AEP_sonido_actual > 1 ) then { AEP_sonido_actual = 1;};
		AEP_tiene_tapones = if ( AEP_sonido_actual == 1 ) then {false} else {true};

		0.1 fadeSound AEP_sonido_actual;
	};

	case 4:
	{
		AEP_sonido_actual = AEP_sonido_actual - 0.1;
		if (  AEP_sonido_actual < 0 ) then { AEP_sonido_actual = 0;};
		AEP_tiene_tapones = if ( AEP_sonido_actual == 1 ) then {false} else {true};

		0.1 fadeSound AEP_sonido_actual;
	};
};

[] call AEP_fnc_Volumen;