/*
	fn_Volumen.sqf
	Stirgoy
*/

_numero = AEP_sonido_actual;
_numero = [_numero,0,1,0,100] call Mapear;

switch (AEP_modo_notif) do
{
	//hint
	case 0:
	{
		_pre = "<t><img size='3'image='AdvancedEP\logo.paa'/> <br/><br/><t/><t font='TahomaB' color='#02B037' size='0.9'>%1%2<t/>";
		_text = format [_pre,_numero,'%'];
		_text = parseText _text;
		hintSilent _text;
	};

	//systemchat
	case 1:
	{
		_text = localize "STR_STR_AEP_notif_chat_tit";
		_text = format [_text, _numero];
		player customChat [AEP_radio,_text];
	};

	//texto en el centro
	case 2:
	{
		_text = localize "STR_STR_AEP_notif_chat_tit";
		_text = format [_text, _numero];
		cutText [_text,"PLAIN DOWN",3];
	};

};
