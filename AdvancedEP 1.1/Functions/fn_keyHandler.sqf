/*
fn_keyHandler.sqf
Stirgoy
Manejador de teclas con conversor a string (KHC)
*/

private ["_handled", "_ctrl", "_keyP", "_shift", "_ctrlKey", "_alt"];
_ctrl = _this select 0;
_keyP = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;

_handled = false;

//Conversor a String
_keyP = [_keyP] call AEP_fnc_KHC;
//
//				NOTA: No añadir ninguna tecla, si el usuario elije esa misma se ejecutara el codigo del case que este mas proximo al inicio del switch
//
switch ( _keyP ) do
{
	case AEP_key_menu:
	{
		if ( !_ctrlKey && _shift ) then
		{
			if (AEP_key_menuSHIFT && !AEP_key_menuCTRL ) then { if(!dialog) then {createDialog "AEP_settings";};};
			_handled = true;
		};

		if ( _ctrlKey && !_shift ) then
		{
			if (!AEP_key_menuSHIFT && AEP_key_menuCTRL ) then { if(!dialog) then {createDialog "AEP_settings";}; };
			_handled = true;
		};

		if ( _ctrlKey && _shift ) then
		{
			if (AEP_key_menuSHIFT && AEP_key_menuCTRL ) then { if(!dialog) then {createDialog "AEP_settings";}; };
			_handled = true;
		};

		if ( !_ctrlKey && !_shift ) then
		{
			if (!AEP_key_menuSHIFT && !AEP_key_menuCTRL ) then { if(!dialog) then {createDialog "AEP_settings";}; };
			_handled = true;
		};

	};

	case AEP_key_tapon:
	{
		if ( !_ctrlKey && _shift ) then
		{
			if (AEP_key_taponSHIFT && !AEP_key_taponCTRL ) then { [0] call AEP_fnc_tapones;};
			_handled = true;
		};

		if ( _ctrlKey && !_shift ) then
		{
			if (!AEP_key_taponSHIFT && AEP_key_taponCTRL ) then { [0] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && _shift ) then
		{
			if (AEP_key_taponSHIFT && AEP_key_taponCTRL ) then { [0] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( !_ctrlKey && !_shift ) then
		{
			if (!AEP_key_taponSHIFT && !AEP_key_taponCTRL ) then { [0] call AEP_fnc_tapones; };
			_handled = true;
		};

	};

	case AEP_key_poner:
	{

		if ( !_ctrlKey && _shift ) then
		{
			if (AEP_key_ponerSHIFT && !AEP_key_ponerCTRL ) then { [1] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && !_shift ) then
		{
			if (!AEP_key_ponerSHIFT && AEP_key_ponerCTRL ) then { [1] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && _shift ) then
		{
			if (AEP_key_ponerSHIFT && AEP_key_ponerCTRL ) then { [1] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( !_ctrlKey && !_shift ) then
		{
			if (!AEP_key_ponerSHIFT && !AEP_key_ponerCTRL ) then { [1] call AEP_fnc_tapones; };
			_handled = true;
		};

	};

	case AEP_key_quitar:
	{
		if ( !_ctrlKey && _shift ) then
		{
			if (AEP_key_quitarSHIFT && !AEP_key_quitarCTRL ) then { [2] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && !_shift ) then
		{
			if (!AEP_key_quitarSHIFT && AEP_key_quitarCTRL ) then { [2] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && _shift ) then
		{
			if (AEP_key_quitarSHIFT && AEP_key_quitarCTRL ) then { [2] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( !_ctrlKey && !_shift ) then
		{
			if (!AEP_key_quitarSHIFT && !AEP_key_quitarCTRL ) then { [2] call AEP_fnc_tapones; };
			_handled = true;
		};
	};

	case AEP_key_masVol:
	{
		if ( !_ctrlKey && _shift ) then
		{
			if (AEP_key_masVolSHIFT && !AEP_key_masVolCTRL ) then { [3] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && !_shift ) then
		{
			if (!AEP_key_masVolSHIFT && AEP_key_masVolCTRL ) then { [3] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && _shift ) then
		{
			if (AEP_key_masVolSHIFT && AEP_key_masVolCTRL ) then { [3] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( !_ctrlKey && !_shift ) then
		{
			if (!AEP_key_masVolSHIFT && !AEP_key_masVolCTRL ) then { [3] call AEP_fnc_tapones; };
			_handled = true;
		};
	};

	case AEP_key_menosVol:
	{
		if ( !_ctrlKey && _shift ) then
		{
			if (AEP_key_menosVolSHIFT && !AEP_key_menosVolCTRL ) then { [4] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && !_shift ) then
		{
			if (!AEP_key_menosVolSHIFT && AEP_key_menosVolCTRL ) then { [4] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( _ctrlKey && _shift ) then
		{
			if (AEP_key_menosVolSHIFT && AEP_key_menosVolCTRL ) then { [4] call AEP_fnc_tapones; };
			_handled = true;
		};

		if ( !_ctrlKey && !_shift ) then
		{
			if (!AEP_key_menosVolSHIFT && !AEP_key_menosVolCTRL ) then { [4] call AEP_fnc_tapones; };
			_handled = true;
		};
	};
};

if (_handled) then {true} else {false};