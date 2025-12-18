#include <iostream>
#include "Curso.h"
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

int seleccionarCurso() {
    mostrarCursos();
    int op;
    cout << "Seleccione curso: ";
    cin >> op;
    return op - 1;
}

// ===== SUBMENÚ CURSO =====
void menuCurso() {
    int opcion;
    do {
        cout << "\n--- MENÚ DE CURSO ---\n";
        cout << "1. Asignar profesor\n";
        cout << "2. Cambiar profesor\n";
        cout << "3. Eliminar curso\n";
        cout << "4. Volver\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 4) break;

        int c = seleccionarCurso();

        switch (opcion) {
        case 1:
            cursos[c].asignarProfesor();
            break;
        case 2:
            cursos[c].cambiarProfesor();
            break;
        case 3:
            cursos[c] = Curso();
            cout << "Curso eliminado completamente.\n";
            break;
        default:
    		cout << "Opción inválida.\n";
    		break;
        }

    } while (opcion != 4);
}

// ===== SUBMENÚ ESTUDIANTES =====
void menuEstudiantes() {
    int opcion;
    do {
        cout << "\n--- MENÚ DE ESTUDIANTES ---\n";
        cout << "1. Matricular estudiante\n";
        cout << "2. Eliminar estudiante\n";
        cout << "3. Mostrar estudiantes\n";
        cout << "4. Volver\n";
        cout << "Opción: ";
        cin >> opcion;

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
    } while (opcion != 4);
}

// ===== SUBMENÚ NOTAS =====
void menuNotas() {
    int opcion;
    do {
        cout << "\n--- MENÚ DE NOTAS ---\n";
        cout << "1. Ingresar notas\n";
        cout << "2. Ordenar por nombre\n";
        cout << "3. Ordenar por nota\n";
        cout << "4. Promediar curso\n";
        cout << "5. Reiniciar notas\n";
        cout << "6. Volver\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 6) break;

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
            cout << "Promedio: " << cursos[c].promedio() << endl;
            break;
        case 5:
            cursos[c].reiniciarNotas();
            break;
        default:
    		cout << "Opción inválida.\n";
    		break;
        }

    } while (opcion != 6);
}
void menuReportes() {
    int opcion;
    do {
        cout << "\n--- MENÚ DE REPORTES ---\n";
        cout << "1. Estudiante con mayor nota\n";
        cout << "2. Estudiante con menor nota\n";
        cout << "3. Resumen del curso\n";
        cout << "4. Volver\n";
        cout << "Opción: ";
        cin >> opcion;

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

    } while (opcion != 4);
}
// ===== MENÚ PRINCIPAL =====
int main() {
    int opcion;

    do {
        cout << "\n=== SISTEMA DE MATRÍCULA ===\n";
        cout << "1. Crear curso\n";
        cout << "2. Mostrar cursos\n";
        cout << "3. Gestión de curso\n";
        cout << "4. Gestión de estudiantes\n";
        cout << "5. Gestión de notas\n";
        cout << "6. Reportes del curso\n";
        cout << "7. Salir";
        cout << "Opción: ";
        cin >> opcion;

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

    } while (opcion != 7);

    return 0;
}