#include <iostream>
#include <string>
#include "Menu.h"
using namespace std;
void menuPrincipalColores(){
	
		cout<<BOLDWHITE<<endl;
		cout<<"      __     __   ____   ___  __     __   ____   ___  __     __   ____   ___  __     __   ____   ___  __     __   _     "<<endl;
		cout<<"     |  |__ |**|_| || |_|   ||  |__ |**|_| || |_|   ||  |__ |**|_| || |_|   ||  |__ |**|_| || |_|   ||  |__ |**|_| |   "<<endl;
		cout<<"     |==|^^||--| |=||=| |=*=||==|^^||--| |=||=| |=*=||==|^^||--| |=||=| |=*=||==|^^||--| |=||=| |=*=||==|^^||--| |=|  "<<endl;
		cout<<"     |  |  ||  | | || | |   ||  |  ||  | | || | |   ||  |  ||  | | || | |   ||  |  ||  | | || | |   ||  |  ||  | | |   "<<endl;
		cout<<" ____|__|__||__|_|_||_|_|___||__|__||__|_|_||_|_|___||__|__||__|_|_||_|_|___||__|__||__|_|_||_|_|___||__|__||__|_|_|___"<<endl;
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
		cout<<"      __   __ __ ____ __ __ __ __   __ __ ____   __ __ ____   __ __ ____   __ __ ____   __ __ ____   __ __ ___ _ __  "<<endl; 
		cout<<"     |**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || |"<<endl;
		cout<<"     |--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=|"<<endl;
		cout<<"     |  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || |"<<endl;
		cout<<" ____|__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_|"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Asignar profesor  "<<RESET<<BOLDBLUE<<"\t\t||"<<RESET<<BOLDCYAN<<"  2. Cambiar profesor"<<RESET<<BOLDBLUE<<"\t\t\t||"<<RESET<<BOLDGREEN<<"   3. Ver información del profesor"<<RESET<<endl;
		cout<<BOLDYELLOW<<"                ________     "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"          ______      "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"   __________"<<RESET<<endl;
		cout<<BOLDYELLOW<<"              /  _   _  \\   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"      /\\       \\\\  "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"  /\\          \\     "<<RESET<<endl;
		cout<<BOLDYELLOW<<"              | (_) (_) |    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"     /  \\       \\\\ "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"  \\/| ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"              \\_________/   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"      ||         ||   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"    | ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"               (/     \\)    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"      \\\\         // "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"   /| ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"               /_______\\    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"       \\\\_______//  "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"   \\/_________|  "<<RESET<<endl;
		cout<<BOLDBLUE<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDBLUE<<"\t\t\t||"<<RESET<<BOLDMAGENTA<<"   4. Eliminar curso		"<<RESET<<BOLDBLUE<<"\t||"<<RESET<<BOLDWHITE<<"   5. Retroceder      "<<BOLDBLUE<<"\t\t||"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          ___  ___      "<<RESET<<BOLDBLUE<<"\t||\t\t"<<RESET<<BOLDWHITE<<" ______ "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          \\  \\/  /     "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"| EXIT |"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"           \\    /      "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"|     o|"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"           /    \\      "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"|      |"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          /  /\\  \\     "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"|______|"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"         /__/  \\__\\    "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"        "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<" _______________________||______________________________________||______________________________________||____________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t\t\tSeleccione una opcion: ";
}
void menuEstudiantesColor(){
		cout<<BOLDCYAN<<endl;
		cout<<"      __   __ __ ____ __ __ __ __   __ __ ____   __ __ ____   __ __ ____   __ __ ____   __ __ ____   __ __ ___ _ __  "<<endl; 
		cout<<"     |**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || |"<<endl;
		cout<<"     |--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=|"<<endl;
		cout<<"     |  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || |"<<endl;
		cout<<" ____|__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_|"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Matricular estudiante"<<RESET<<BOLDCYAN<<"\t\t||"<<RESET<<BOLDBLUE<<"  2. Mostrar notas estudiantes"<<RESET<<BOLDCYAN<<"\t||"<<RESET<<BOLDGREEN<<"   3. Eliminar estudiante"<<RESET<<endl;
		cout<<BOLDYELLOW<<"                ________     "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     ____      ____     "<<RESET<<BOLDCYAN<<"\t||\t"<<RESET<<BOLDGREEN<<"          ___  ___      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"           ____/       //____"<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"    /    \\____/    \\  "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<"          \\  \\/  /     "<<RESET<<endl;
		cout<<BOLDYELLOW<<"          /   /       //   //"<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   |     /    \\     |  "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<"           \\    /      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"         /   /______ //   // "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"    \\___|      |___/   "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<"           /    \\      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"        /___(_______(/__ //  "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   /____ \\____/ ____\\ "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<"          /  /\\  \\     "<<RESET<<endl;
		cout<<BOLDYELLOW<<"       (_______/(_______(/   "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"        /______\\       "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<"         /__/  \\__\\    "<<RESET<<endl;
		cout<<BOLDCYAN<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDCYAN<<"\t\t\t||"<<RESET<<BOLDMAGENTA<<"   4. Guardar estudiantes en archivo"<<RESET<<BOLDCYAN<<"\t||"<<RESET<<BOLDWHITE<<"   5. Retroceder      "<<BOLDCYAN<<"\t\t||"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"     /_/ /_//_/|       "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<" ______ "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |**|_| || ||      "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"| EXIT |"<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |**|_| || ||     "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"|     o|"<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |--| |=||=||      "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"|      |"<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |  | | || ||      "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"|______|"<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |__|_|_||_|/      "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"        "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<" _______________________||______________________________________||______________________________________||____________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t\t\tSeleccione una opcion: ";
}
void menuNotasColor(){
		cout<<BOLDMAGENTA<<endl;
		cout<<"      __   __ __ ____ __ __ __ __   __ __ ____   __ __ ____   __ __ ____   __ __ ____   __ __ ____   __ __ ___ _ __  "<<endl; 
		cout<<"     |**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || |"<<endl;
		cout<<"     |--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=|"<<endl;
		cout<<"     |  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || |"<<endl;
		cout<<" ____|__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_|"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Ingresar notas   		"<<RESET<<BOLDMAGENTA<<"\t||"<<RESET<<BOLDBLUE<<"    2. Ordenar por nota	 "<<RESET<<BOLDMAGENTA<<"\t||"<<RESET<<BOLDGREEN<<"   3. Editar nota  "<<RESET<<endl;
		cout<<BOLDYELLOW<<"           __           "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDBLUE<<"        __________    "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       __  ______    "<<RESET<<endl;
		cout<<BOLDYELLOW<<"          |  |          "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDBLUE<<"      _|          |   	"<<RESET<<BOLDMAGENTA<<"\t||\t"<<RESET<<BOLDGREEN<<" _____/ __) _____\\  "<<RESET<<endl;
		cout<<BOLDYELLOW<<"      ____|  |____      "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     | |   NOTA   |   "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       (____)        "<<RESET<<endl;
		cout<<BOLDYELLOW<<"     |____    ____|     "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     | |          |   "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDGREEN<<" ____  (____)        "<<RESET<<endl;
		cout<<BOLDYELLOW<<"          |  |          "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     | |          |   "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDGREEN<<"     \\_(____)       "<<RESET<<endl;
		cout<<BOLDYELLOW<<"          |__|          "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     |_|__________|    "<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDGREEN<<"                     "<<RESET<<endl;
		cout<<BOLDMAGENTA<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<endl;
		cout<<"                                        ||                                      ||"<<RESET<<endl;
		cout<<BOLDCYAN<<"   4. Promediar curso "<<RESET<<BOLDMAGENTA<<"\t\t\t||"<<RESET<<BOLDWHITE<<"   5. Promedio por evaluación        "<<RESET<<BOLDMAGENTA<<"\t||"<<RESET<<BOLDRED<<"   6. Reiniciar notas"<<endl;
		cout<<BOLDCYAN<<"          __________    "<<RESET<<BOLDMAGENTA<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<" ______"<<RESET<<BOLDMAGENTA<<"\t\t\t||\t"<<RESET<<BOLDRED<<"     /_/ /_//_/|       "<<RESET<<endl;
		cout<<BOLDCYAN<<"        /\\          \\   "<<RESET<<BOLDMAGENTA<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"|      |"<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDRED<<"    |**|_| || ||      "<<RESET<<endl;
		cout<<BOLDCYAN<<"        \\/| ------- |    "<<RESET<<BOLDMAGENTA<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"| NOTA |"<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDRED<<"    |**|_| || ||     	"<<RESET<<endl;
		cout<<BOLDCYAN<<"          | PROMEIO |    "<<RESET<<BOLDMAGENTA<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"| PRO  |"<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDRED<<"    |--| |=||=||      "<<RESET<<endl;
		cout<<BOLDCYAN<<"         /| ------- |    "<<RESET<<BOLDMAGENTA<<"\t\t||\t\t"<<RESET<<BOLDWHITE<<"| MEDIO|"<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDRED<<"    |  | | || ||      "<<RESET<<endl;
		cout<<BOLDCYAN<<"         \\/_________|  "<<RESET<<BOLDMAGENTA<<"\t\t\t||\t\t"<<RESET<<BOLDWHITE<<"|______|"<<RESET<<BOLDMAGENTA<<"\t\t||\t"<<RESET<<BOLDRED<<"    |__|_|_||_|/      "<<RESET<<endl;
		cout<<BOLDMAGENTA<<" _______________________________________||______________________________________||_____________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t    Seleccione una opcion (7 para salir del programa): ";	
}
void menuReportesColor(){
		cout<<BOLDRED<<endl;
		cout<<"      __   __ __ ____ __ __ __ __   __ __ ____   __ __ ____   __ __ ____   __ __ ____   __ __ ____   __ __ ___ _ __  "<<endl; 
		cout<<"     |**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || ||**|_| || |"<<endl;
		cout<<"     |--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=||--| |=||=|"<<endl;
		cout<<"     |  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || ||  | | || |"<<endl;
		cout<<" ____|__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_||__|_|_||_|"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Estudiante con mayor nota"<<RESET<<BOLDRED<<"\t\t||"<<RESET<<BOLDCYAN<<"  2. Estudiante con menor nota"<<RESET<<BOLDRED<<"\t||"<<RESET<<BOLDBLUE<<"   3. Resumen del curso"<<RESET<<endl;
		cout<<BOLDYELLOW<<"               __  ______    "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDCYAN<<"       __ _______        "<<RESET<<BOLDRED<<"\t||\t"<<RESET<<BOLDBLUE<<"   __________"<<RESET<<endl;
		cout<<BOLDYELLOW<<"         _____/ __) _____\\  "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDCYAN<<" _____/ __) _____\\  "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDBLUE<<"  /\\          \\     "<<RESET<<endl;
		cout<<BOLDYELLOW<<"               (____)        "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDCYAN<<"             ______\\  "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDBLUE<<"  \\/| ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"         ____  (____)        "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDCYAN<<" ______     ______\\ "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDBLUE<<"    | ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"             \\_(____)       "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDCYAN<<"      \\_______\\     "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   /| ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"                             "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDCYAN<<"                     "<<RESET<<BOLDRED<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   \\/_________|  "<<RESET<<endl;
		cout<<BOLDRED<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDRED<<"\t\t\t\t\t||"<<RESET<<BOLDWHITE<<"   4. Retroceder              "<<RESET<<BOLDRED<<"\t||"<<endl;
		cout<<BOLDRED<<"\t\t\t\t\t||\t"<<RESET<<BOLDWHITE<<"       ______   "<<RESET<<BOLDRED<<"\t\t||\t\t"<<endl;
		cout<<BOLDRED<<"\t\t\t\t\t||\t"<<RESET<<BOLDWHITE<<"      | EXIT |  "<<RESET<<BOLDRED<<"\t\t||\t\t"<<endl;
		cout<<BOLDRED<<"\t\t\t\t\t||\t"<<RESET<<BOLDWHITE<<"      |     o|  "<<RESET<<BOLDRED<<"\t\t||\t\t"<<endl;
		cout<<BOLDRED<<"\t\t\t\t\t||\t"<<RESET<<BOLDWHITE<<"      |      |  "<<RESET<<BOLDRED<<"\t\t||\t\t"<<endl;
		cout<<BOLDRED<<"\t\t\t\t\t||\t"<<RESET<<BOLDWHITE<<"      |______|     "<<RESET<<BOLDRED<<"\t\t||\t\t"<<endl;
		cout<<BOLDRED<<"\t\t\t\t\t||\t"<<RESET<<BOLDWHITE<<"                    "<<RESET<<BOLDRED<<"\t\t||\t\t"<<endl;
		cout<<BOLDRED<<"________________________________________||______________________________________||_____________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t\t\tSeleccione una opcion: ";	
}