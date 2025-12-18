#include <iostream>
#include "curso.h"
#include "Menu.h"
using namespace std;

const int MAX_CUR = 10;
Curso cursos[MAX_CUR];
int totalCursos = 0;

void crearCurso() {
    if (totalCursos >= MAX_CUR) {
        cout << "No se pueden crear más cursos.\n";
        return;
    }

    cout << "Nombre del curso: ";
    cin.ignore();
    getline(cin, cursos[totalCursos].nombreCurso);

    cursos[totalCursos].activo = true;
    totalCursos++;

    cout << "Curso creado correctamente.\n";
}

void mostrarCursos() {
    cout << "\n--- LISTA DE CURSOS ---\n";
    for (int i = 0; i < totalCursos; i++) {
        if (cursos[i].activo) {
            cout << i + 1 << ". " << cursos[i].nombreCurso << endl;
        }
    }
}

void eliminarCursoDelSistema(Curso cursos[], int& totalCursos, int indice) {
    cursos[indice].eliminarCurso();

    for (int i = indice; i < totalCursos - 1; i++) {
        cursos[i] = cursos[i + 1];
    }

    totalCursos--;
}

int seleccionarCurso() {
    mostrarCursos();
    int op;
    cout << "Seleccione curso: ";
    cin >> op;
    return op - 1;
}

void menuCurso() {
    int opcion;
    do {
    	system("cls");
    	menuCursoColor();
        cin >> opcion;
		system("cls");
        if (opcion == 5) break;

        int c = seleccionarCurso();

        switch (opcion) {
        case 1:
            cursos[c].asignarProfesor();
            break;
        case 2:
            cursos[c].cambiarProfesor();
            break;
		case 3:
    		cursos[c].mostrarProfesor();
    		break;
    	case 4:
    		eliminarCursoDelSistema(cursos, totalCursos, c);
    		cout << "Curso eliminado correctamente.\n";
   			break;

        default:
    		cout << "Opción inválida.\n";
    		break;
        }
        if (opcion != 5) {
            system("pause");
        }
    } while (opcion != 5);
}

void menuEstudiantes() {
    int opcion;
    do {
    	system("cls");
		menuEstudiantesColor();
        cin >> opcion;
		system("cls");
        if (opcion == 5) break;

        int c = seleccionarCurso();

        switch (opcion) {
        case 1:
            cursos[c].matricularEstudiante();
            break;
        case 2:
            cursos[c].mostrarNotasEstudiantes();
            break;
        case 3:
            cursos[c].eliminarEstudiante();
            break;
   		case 4:
    		cursos[c].guardarEstudiantesEnArchivo();
    		cout << "Guardado exitosamente.\n";
   			break;      
        default:
    		cout << "Opción inválida.\n";
    		break;
        }
        if (opcion != 5) {
            system("pause");
        }
    } while (opcion != 5);
}

void menuNotas() {
    int opcion;
    do {
    	system("cls");
		menuNotasColor();
        cin >> opcion;
		system("cls");
        if (opcion == 7) break;

        int c = seleccionarCurso();

        switch (opcion) {
        case 1:
            cursos[c].ingresarNotas();
            break;
        case 2:
            cursos[c].ordenarPorNota();
            break;
        case 3:
    		cursos[c].editarNota();
    		break;
        case 4:
            cout << "Promedio: " << cursos[c].promedio() << endl;
            break;
        case 5:
    		cursos[c].mostrarPromediosEvaluaciones();
    		break;
        case 6:
            cursos[c].reiniciarNotas();
            break;
        default:
    		cout << "Opción inválida.\n";
    		break;
        }
        if (opcion != 7) {
            system("pause");
        }
    } while (opcion != 7);
}
void menuReportes() {
    int opcion;
    do {
    	system("cls");
    	menuReportesColor();
        cin >> opcion;
		system("cls");
        if (opcion == 4) break;

        int c = seleccionarCurso();
		if (c < 0 || c >= totalCursos || !cursos[c].activo) {
    		cout << "Curso no válido o no existe.\n";
   			return;
		}
        switch (opcion) {
        case 1:
            cursos[c].mostrarMayorNota();
            break;
        case 2:
            cursos[c].mostrarMenorNota();
            break;
        case 3:
            cursos[c].resumenCurso();
            break;
        default:
    		cout << "Opción inválida.\n";
    		break;
        }
        if (opcion != 4) {
            system("pause");
        }
    } while (opcion != 4);
}

int main() {
    int opcion;

    do {
		system("cls");
		menuPrincipalColores();
        cin >> opcion;
		system("cls");
        switch (opcion) {
        case 1:
            crearCurso();
            break;
        case 2:
            mostrarCursos();
            break;
        case 3:
            menuCurso();
            break;
        case 4:
            menuEstudiantes();
            break;
        case 5:
            menuNotas();
            break;
        case 6:
			menuReportes();
    		break;
        default:
    		cout << "Opción inválida.\n";
    		break;
        }
        if (opcion != 7) {
            system("pause");
        }
    } while (opcion != 7);

    return 0;
}