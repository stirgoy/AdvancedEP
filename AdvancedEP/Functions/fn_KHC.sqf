/*
fn_KHC.sqf
Stirgoy
*/

_key = param [0,0,[0]];
_ret = "";

switch (_key) do
{

	case 1: {_ret = "ESC";};
	case 2: {_ret = "1";};
	case 3: {_ret = "2";};
	case 4: {_ret = "3";};
	case 5: {_ret = "4";};
	case 6: {_ret = "5";};
	case 7: {_ret = "6";};
	case 8: {_ret = "7";};
	case 9: {_ret = "8";};
	case 10: {_ret = "9";};
	case 11: {_ret = "0";};
	case 12: {_ret = "'";};
	case 13: {_ret = "¡";};
	case 14: {_ret = "BKSP";};
	case 15: {_ret = "TAB";};
	case 16: {_ret = "Q";};
	case 17: {_ret = "W";};
	case 18: {_ret = "E";};
	case 19: {_ret = "R";};
	case 20: {_ret = "T";};
	case 21: {_ret = "Y";};
	case 22: {_ret = "U";};
	case 23: {_ret = "I";};
	case 24: {_ret = "O";};
	case 25: {_ret = "P";};
	case 26: {_ret = "`";};
	case 27: {_ret = "+";};
	case 28: {_ret = "ENTER";};
	case 29: {_ret = "CTRL_R";};
	case 30: {_ret = "A";};
	case 31: {_ret = "S";};
	case 32: {_ret = "D";};
	case 33: {_ret = "F";};
	case 34: {_ret = "G";};
	case 35: {_ret = "H";};
	case 36: {_ret = "J";};
	case 37: {_ret = "K";};
	case 38: {_ret = "L";};
	case 39: {_ret = "Ñ";};
	case 40: {_ret = "´";};
	case 41: {_ret = "º";};
	case 42: {_ret = "SHIFT_L";};
	case 43: {_ret = "Ç";};
	case 44: {_ret = "Z";};
	case 45: {_ret = "X";};
	case 46: {_ret = "C";};
	case 47: {_ret = "V";};
	case 48: {_ret = "B";};
	case 49: {_ret = "N";};
	case 50: {_ret = "M";};
	case 51: {_ret = ",";};
	case 52: {_ret = ".";};
	case 53: {_ret = "-";};
	case 54: {_ret = "SHIFT_R";};
	case 55: {_ret = "N_*";};
	case 56: {_ret = "ALT_R";};
	case 57: {_ret = "SPACE";};
	case 58: {_ret = "MAYUS";};
	case 59: {_ret = "F1";};
	case 60: {_ret = "F2";};
	case 61: {_ret = "F3";};
	case 62: {_ret = "F4";};
	case 63: {_ret = "F5";};
	case 64: {_ret = "F6";};
	case 65: {_ret = "F7";};
	case 66: {_ret = "F8";};
	case 67: {_ret = "F9";};
	case 68: {_ret = "F10";};
	case 69: {_ret = "NUM";};
	case 70: {_ret = "SROLL";};
	case 71: {_ret = "N_7";};
	case 72: {_ret = "N_8";};
	case 73: {_ret = "N_9";};
	case 74: {_ret = "N_-";};
	case 75: {_ret = "N_4";};
	case 76: {_ret = "N_5";};
	case 77: {_ret = "N_6";};
	case 78: {_ret = "N_+";};
	case 79: {_ret = "N_1";};
	case 80: {_ret = "N_2";};
	case 81: {_ret = "N_3";};
	case 82: {_ret = "N_0";};
	case 83: {_ret = "N_.";};
	case 86: {_ret = "<";};
	case 87: {_ret = "F11";};
	case 88: {_ret = "F12";};
	case 156: {_ret = "N_ENTER";};
	case 157: {_ret = "CTRL_L";};
	case 181: {_ret = "N_/";};
	case 183: {_ret = "PRINT";};
	case 184: {_ret = "ALT_GR";};
	case 197: {_ret = "PAUSE";};
	case 199: {_ret = "INICIO";};
	case 200: {_ret = "UP";};
	case 201: {_ret = "REPAG";};
	case 203: {_ret = "LEFT";};
	case 205: {_ret = "RIGTH";};
	case 207: {_ret = "END";};
	case 208: {_ret = "DOWN";};
	case 209: {_ret = "AVPAG";};
	case 210: {_ret = "INSERT";};
	case 211: {_ret = "DEL";};
	case 219: {_ret = "WIN_R";};
	case 220: {_ret = "WIN_L";};
	case 221: {_ret = "APP";};
	default {_ret = _key;};
};
_ret
