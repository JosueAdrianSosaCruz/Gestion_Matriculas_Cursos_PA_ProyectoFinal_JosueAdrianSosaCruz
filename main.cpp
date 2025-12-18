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

    cout << "Curso eliminado correctamente.\n";
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
        cout << "\n--- MENÚ DE CURSO ---\n";
        cout << "1. Asignar profesor\n";
        cout << "2. Cambiar profesor\n";
        cout << "3. Ver información del profesor\n";
        cout << "4. Eliminar curso\n";
        cout << "5. Volver\n";
        cout << "Opción: ";
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
        cout << "\n--- MENÚ DE ESTUDIANTES ---\n";
        cout << "1. Matricular estudiante\n";
        cout << "2. Eliminar estudiante\n";
        cout << "3. Mostrar estudiantes\n";
        cout << "4. Volver\n";
        cout << "Opción: ";
        cin >> opcion;
		system("cls");
        if (opcion == 4) break;

        int c = seleccionarCurso();

        switch (opcion) {
        case 1:
            cursos[c].matricularEstudiante();
            break;
        case 2:
            cursos[c].eliminarEstudiante();
            break;
        case 3:
            cursos[c].mostrarEstudiantes();
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

void menuNotas() {
    int opcion;
    do {
    	system("cls");
        cout << "\n--- MENÚ DE NOTAS ---\n";
        cout << "1. Ingresar notas\n";
        cout << "2. Ordenar por nombre\n";
        cout << "3. Ordenar por nota\n";
        cout << "4. Editar nota\n";
        cout << "5. Promediar curso\n";
        cout << "6. Promedio por evaluación\n";
        cout << "7. Reiniciar notas\n";
        cout << "8. Volver\n";
        cout << "Opción: ";
        cin >> opcion;
		system("cls");
        if (opcion == 8) break;

        int c = seleccionarCurso();

        switch (opcion) {
        case 1:
            cursos[c].ingresarNotas();
            break;
        case 2:
            cursos[c].ordenarPorNombre();
            break;
        case 3:
            cursos[c].ordenarPorNota();
            break;
        case 4:
    		cursos[c].editarNota();
    		break;
        case 5:
            cout << "Promedio: " << cursos[c].promedio() << endl;
            break;
        case 6:
    		cursos[c].mostrarPromediosEvaluaciones();
    		break;
        case 7:
            cursos[c].reiniciarNotas();
            break;
        default:
    		cout << "Opción inválida.\n";
    		break;
        }
        if (opcion != 8) {
            system("pause");
        }
    } while (opcion != 8);
}
void menuReportes() {
    int opcion;
    do {
    	system("cls");
        cout << "\n--- MENÚ DE REPORTES ---\n";
        cout << "1. Estudiante con mayor nota\n";
        cout << "2. Estudiante con menor nota\n";
        cout << "3. Resumen del curso\n";
        cout << "4. Volver\n";
        cout << "Opción: ";
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