
class CfgPatches
{
	class AdvancedEP
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		version = 0.1;
		author = "Stirgoy";
		picture = "AdvancedEP\logo.paa";
	};
};

class CfgFunctions
{
	class AEP_core
	{
		tag = "AEP";
		class AEP_local
		{
			file = "AdvancedEP\Functions";
			class init {postInit = 1;};	//carga del mod
			class keyHandler {};		//manejador de teclas
			class KHC {};				//Alternador del keyHandler (pasa de int a str)
			class tapones {};			//manejador de tapones
		};

		class AEP_menu
		{
			file = "AdvancedEP\Functions\Menu";
			class saveSettings {};		//guarda los ajustes para su persistencia
			class loadSettings {};		//carga los ajustes
			class menu_open {};			//GUI atado a evento
			class menu_cmb_selected {}; //GUI atado a evento
			class chk_changed {}; 		//GUI atado a evento
			class btn_exit {};	 		//GUI atado a evento
		};
	};
};


//controles dialogs
#include "controls.h"
//GUI ajustes
#include "settings.h"

