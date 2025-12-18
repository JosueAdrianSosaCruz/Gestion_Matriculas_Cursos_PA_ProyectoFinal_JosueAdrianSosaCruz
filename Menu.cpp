#include <iostream>
#include <string>
#include "Menu.h"
using namespace std;
void menuPrincipalColores(){
	
		cout<<BOLDWHITE<<"                                         _____________________________________                         "<<endl;
		cout<<"                                ________|    __  __    ___    _  _    _   _   |________                            "<<endl;
		cout<<"      __     __   ____   ___    \\       |   |  \\/  |  | __|  | \\| |  | | | |  |       /     ____    ____     _  __  "<<endl;
		cout<<"     |  |__ |**|_| || |_|   |    \\      |   | |\\/| |  | _|   | .` |  | |_| |  |      /    _|**|+|__|+|+||___| ||  | "<<endl;
		cout<<"     |==|^^||--| |=||=| |=*=|    /      |___|_|__|_|__|___|__|_|\\_|___\\___/___|      \\   | |==|-|  |=|=|| | | ||==|   "<<endl;
		cout<<"     |  |  ||  | | || | |   |   /__________)                               (__________\\  |-|  | |==| | ||-|-| ||__|   "<<endl;
		cout<<" ____|__|__||__|_|_||_|_|___|____________________________________________________________|_|__|_|__|_|_||_|_|_||__|____"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<endl;
		cout<<"                                        ||                                      ||"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Crear curso   			"<<RESET<<BOLDWHITE<<"||"<<RESET<<BOLDBLUE<<"    2. Mostrar cursos	 "<<RESET<<BOLDWHITE<<"\t\t||"<<RESET<<BOLDGREEN<<"   3. Gestion de curso  "<<RESET<<endl;
		cout<<BOLDYELLOW<<"                ________     "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"        __________    "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       __  ______    "<<RESET<<endl;
		cout<<BOLDYELLOW<<"           ____/       //____"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"      _|          |   	"<<RESET<<BOLDWHITE<<"\t||\t"<<RESET<<BOLDGREEN<<" _____/ __) _____\\  "<<RESET<<endl;
		cout<<BOLDYELLOW<<"          /   /       //   //"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     | |   INFO   |   "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       (____)        "<<RESET<<endl;
		cout<<BOLDYELLOW<<"         /   /______ //   // "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     | |______   _|   "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<" ____  (____)        "<<RESET<<endl;
		cout<<BOLDYELLOW<<"        /___(_______(/__ //  "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     |__  ____\\|     "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"     \\_(____)       "<<RESET<<endl;
		cout<<BOLDYELLOW<<"       (_______/(_______(/   "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"        |/            "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"                     "<<RESET<<endl;
		cout<<BOLDWHITE<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<endl;
		cout<<"                                        ||                                      ||"<<RESET<<endl;
		cout<<BOLDCYAN<<"   4. Gestión de estudiantes "<<RESET<<BOLDWHITE<<"\t\t||"<<RESET<<BOLDMAGENTA<<"   5. Gestión de notas        "<<RESET<<BOLDWHITE<<"\t||"<<RESET<<BOLDRED<<"   6. Reportes del curso"<<endl;
		cout<<BOLDCYAN<<"          ____      ____     "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDMAGENTA<<" ______"<<RESET<<BOLDWHITE<<"\t\t\t||\t"<<RESET<<BOLDRED<<"     /_/ /_//_/|       "<<RESET<<endl;
		cout<<BOLDCYAN<<"         /    \\____/    \\  "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDMAGENTA<<"|      |"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDRED<<"    |**|_| || ||      "<<RESET<<endl;
		cout<<BOLDCYAN<<"        |     /    \\     |  "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDMAGENTA<<"| NOTA |"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDRED<<"    |**|_| || ||     	"<<RESET<<endl;
		cout<<BOLDCYAN<<"         \\___|      |___/   "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDMAGENTA<<"|      |"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDRED<<"    |--| |=||=||      "<<RESET<<endl;
		cout<<BOLDCYAN<<"        /____ \\____/ ____\\ "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDMAGENTA<<"|      |"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDRED<<"    |  | | || ||      "<<RESET<<endl;
		cout<<BOLDCYAN<<"             /______\\       "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDMAGENTA<<"|______|"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDRED<<"    |__|_|_||_|/      "<<RESET<<endl;
		cout<<BOLDWHITE<<" _______________________________________||______________________________________||_____________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t    Seleccione una opcion (7 para salir del programa): ";
}

void menuCursoColor(){
			cout<<BOLDBLUE<<"\t\t\t"<<endl;                                              
		cout<<"      __   ____           ___     ___       _   _    ___    _   _    ___     ___     ___     ___     ___  "<<endl; 
		cout<<"     |**|_| || |_        |   \\   | __|     | | | |  / __|  | | | |  /   \\   | _ \\   |_ _|   / _ \\   / __|"<<endl;
		cout<<"     |--| |=||=|\\\\       | |) |  | _|      | |_| |  \\__ \\  | |_| |  | - |   |   /    | |   | (_) |  \\__ \\ "<<endl;
		cout<<"     |  | | || | \\\\      |___/   |___|      \\___/   |___/   \\___/   |_|_|   |_|_\\   |___|   \\___/   |___/ "<<endl;
		cout<<" ____|__|_|_||_|__\\\\___________________________________________________________________________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Asignar profesor  "<<RESET<<BOLDBLUE<<"\t\t||"<<RESET<<BOLDCYAN<<"  2. Ver todos los usuarios"<<RESET<<BOLDBLUE<<"\t\t||"<<RESET<<BOLDGREEN<<"   3. Eliminar usuario"<<RESET<<endl;
		cout<<BOLDYELLOW<<"                ________     "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"     ____      ____     "<<RESET<<BOLDBLUE<<"\t||\t"<<RESET<<BOLDGREEN<<"       ___  ___     "<<RESET<<endl;
		cout<<BOLDYELLOW<<"              /  _   _  \\   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"    /    \\____/    \\  "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       \\  \\/  /    "<<RESET<<endl;
		cout<<BOLDYELLOW<<"              | (_) (_) |    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"   |     /    \\     |  "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"        \\    /      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"              \\_________/   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"    \\___|      |___/   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"        /    \\      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"               (/     \\)    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"   /____ \\____/ ____\\ "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       /  /\\  \\    "<<RESET<<endl;
		cout<<BOLDYELLOW<<"               /_______\\    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"        /______\\       "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"      /__/  \\__\\   "<<RESET<<endl;
		cout<<BOLDBLUE<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDBLUE<<"\t\t\t||"<<RESET<<BOLDMAGENTA<<"   4. Modificar datos del usuario"<<RESET<<BOLDBLUE<<"\t||"<<RESET<<BOLDRED<<"   5. Retroceder      "<<BOLDBLUE<<"\t\t||"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"           __         "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<" ______ "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          / /   /|     "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"| EXIT |"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"         |  \\__/ |    "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|     o|"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          \\   __/     "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|      |"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          /  /        "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|______|"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"         /__/         "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"        "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<" _______________________||______________________________________||______________________________________||____________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t\t\tSeleccione una opcion: ";
}