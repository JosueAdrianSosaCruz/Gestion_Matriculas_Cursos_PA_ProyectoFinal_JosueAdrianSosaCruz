#include "Curso.h"
#include <iostream>
using namespace std;

Curso::Curso() {
    nombreCurso = "";
    totalEstudiantes = 0;
    activo = false;
}

Profesor::Profesor() {
    nombre = "";
    asignado = false;
}

Estudiante::Estudiante() {
    nombre = "";
    nota = 0;
    matriculado = false;
}

void Curso::asignarProfesor() {
    if (profesor.asignado) {
        cout << "Este curso ya tiene profesor.\n";
        return;
    }

    cout << "Nombre del profesor: ";
    cin.ignore();
    getline(cin, profesor.nombre);

    profesor.asignado = true;
    cout << "Profesor asignado correctamente.\n";
}

void Curso::cambiarProfesor() {
    if (!profesor.asignado) {
        cout << "No hay profesor asignado.\n";
        return;
    }

    cout << "Ingrese el nuevo nombre del profesor: ";
    cin.ignore();
    getline(cin, profesor.nombre);
    cout << "Profesor cambiado correctamente.\n";
}

void Curso::matricularEstudiante() {
    if (!profesor.asignado) {
        cout << "Debe asignar un profesor primero.\n";
        return;
    }

    if (totalEstudiantes >= MAX_EST) {
        cout << "Curso lleno.\n";
        return;
    }

    cout << "Nombre del estudiante: ";
    cin.ignore();
    getline(cin, estudiantes[totalEstudiantes].nombre);

    estudiantes[totalEstudiantes].matriculado = true;
    totalEstudiantes++;

    cout << "Estudiante matriculado.\n";
}

void Curso::eliminarEstudiante() {
    string nombreEstudiante;
    cout << "Ingrese el nombre del estudiante a eliminar: ";
    cin.ignore();
    getline(cin, nombreEstudiante);

    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].nombre == nombreEstudiante) {
            for (int j = i; j < totalEstudiantes - 1; j++) {
                estudiantes[j] = estudiantes[j + 1];
            }
            totalEstudiantes--;
            cout << "Estudiante eliminado.\n";
            return;
        }
    }
    cout << "Estudiante no encontrado.\n";
}

void Curso::ingresarNotas() {
    for (int i = 0; i < totalEstudiantes; i++) {
        do {
            cout << "Nota de " << estudiantes[i].nombre << " (0-20): ";
            cin >> estudiantes[i].nota;
        } while (estudiantes[i].nota < 0 || estudiantes[i].nota > 20);
    }
}

void Curso::mostrarEstudiantes() {
    cout << "\nCurso: " << nombreCurso << endl;
    cout << "Profesor: " << profesor.nombre << endl;

    for (int i = 0; i < totalEstudiantes; i++) {
        cout << estudiantes[i].nombre
             << " - Nota: " << estudiantes[i].nota << endl;
    }
}

void Curso::ordenarPorNombre() {
    for (int i = 0; i < totalEstudiantes - 1; i++) {
        for (int j = i + 1; j < totalEstudiantes; j++) {
            if (estudiantes[i].nombre > estudiantes[j].nombre) {
                swap(estudiantes[i], estudiantes[j]);
            }
        }
    }
}

void Curso::ordenarPorNota() {
    for (int i = 0; i < totalEstudiantes - 1; i++) {
        for (int j = i + 1; j < totalEstudiantes; j++) {
            if (estudiantes[i].nota < estudiantes[j].nota) {
                swap(estudiantes[i], estudiantes[j]);
            }
        }
    }
}

float Curso::promedio() {
    float suma = 0;
    for (int i = 0; i < totalEstudiantes; i++) {
        suma += estudiantes[i].nota;
    }

	if (totalEstudiantes == 0) {
    	cout << "No hay estudiantes para promediar.\n";
    	return 0;
}

    return suma / totalEstudiantes;
}

void Curso::reiniciarNotas() {
    for (int i = 0; i < totalEstudiantes; i++) {
        estudiantes[i].nota = 0;
    }
    cout << "Notas reiniciadas.\n";
}

void Curso::eliminarCurso() {
    totalEstudiantes = 0;
    profesor.asignado = false;
    cout << "Curso eliminado.\n";
}
int Curso::buscarEstudiante(string nombre) {
    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].nombre == nombre) {
            return i;
        }
    }
    return -1;
}
void Curso::mostrarMayorNota() {
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes.\n";
        return;
    }

    int pos = 0;
    for (int i = 1; i < totalEstudiantes; i++) {
        if (estudiantes[i].nota > estudiantes[pos].nota)
            pos = i;
    }

    cout << "Mayor nota: "
         << estudiantes[pos].nombre
         << " (" << estudiantes[pos].nota << ")\n";
}
void Curso::mostrarMenorNota() {
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes.\n";
        return;
    }

    int pos = 0;
    for (int i = 1; i < totalEstudiantes; i++) {
        if (estudiantes[i].nota < estudiantes[pos].nota)
            pos = i;
    }

    cout << "Menor nota: "
         << estudiantes[pos].nombre
         << " (" << estudiantes[pos].nota << ")\n";
}
int Curso::contarAprobados() {
    int cont = 0;
    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].nota >= 11)
            cont++;
    }
    return cont;
}

int Curso::contarDesaprobados() {
    return totalEstudiantes - contarAprobados();
}
void Curso::resumenCurso() {
    cout << "\n--- RESUMEN DEL CURSO ---\n";
    cout << "Curso: " << nombreCurso << endl;
    cout << "Profesor: " << profesor.nombre << endl;
    cout << "Total estudiantes: " << totalEstudiantes << endl;
    cout << "Aprobados: " << contarAprobados() << endl;
    cout << "Desaprobados: " << contarDesaprobados() << endl;
    cout << "Promedio: " << promedio() << endl;
}
void Curso::cambiarNombreCurso() {
    cout << "Nuevo nombre del curso: ";
    cin.ignore();
    getline(cin, nombreCurso);
    cout << "Nombre del curso actualizado.\n";
}
