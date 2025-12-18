#include "Curso.h"
#include <iostream>
using namespace std;

Curso::Curso() {
    nombreCurso = "";
    totalEstudiantes = 0;
    activo = false;
}


void Curso::asignarProfesor() {
    if (!profesor.estaActivo()){
        cout << "Este curso ya tiene profesor.\n";
        return;
    }

    cout << "Nombre del profesor: ";
    cin.ignore();
    string nom;
	getline(cin, nom);
	profesor.setNombre(nom);

    cout << "Profesor asignado correctamente.\n";
}

void Curso::cambiarProfesor() {
    if (!profesor.estaActivo()) {
        cout << "No hay profesor asignado.\n";
        return;
    }

    cout << "Ingrese el nuevo nombre del profesor: ";
    cin.ignore();

    string nuevoNombre;
    getline(cin, nuevoNombre);

    profesor.setNombre(nuevoNombre);

    cout << "Profesor cambiado correctamente.\n";
}

void Curso::matricularEstudiante() {
    if (!profesor.estaActivo()) {
        cout << "Debe asignar un profesor primero.\n";
        return;
    }

    if (totalEstudiantes >= MAX_EST) {
        cout << "Curso lleno.\n";
        return;
    }

    cout << "Nombre del estudiante: ";
    cin.ignore();
    string nom;
	getline(cin, nom);
	estudiantes[totalEstudiantes].setNombre(nom);
    totalEstudiantes++;

    cout << "Estudiante matriculado.\n";
}

void Curso::eliminarEstudiante() {
    string nombreEstudiante;
    cout << "Ingrese el nombre del estudiante a eliminar: ";
    cin.ignore();
    getline(cin, nombreEstudiante);

    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].getNombre() == nombreEstudiante) {
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
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes matriculados.\n";
        return;
    }

    for (int i = 0; i < totalEstudiantes; i++) {
        cout << "\nNotas de: " << estudiantes[i].getNombre() << endl;

        for (int j = 0; j < 5; j++) {
            do {
                cout << "Nota " << j + 1 << " (0-20): ";
                cin >> estudiantes[i].notas[j];
            } while (estudiantes[i].notas[j] < 0 || estudiantes[i].notas[j] > 20);
        }
    }

    cout << "Notas ingresadas correctamente.\n";
}

void Curso::mostrarEstudiantes() {
    cout << "\nCurso: " << nombreCurso << endl;

    if (profesor.estaActivo()) {
        cout << "Profesor: " << profesor.getNombre() << endl;
    } else {
        cout << "Profesor: (sin asignar)\n";
    }

    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes matriculados.\n";
        return;
    }

    cout << "\n--- LISTA DE ESTUDIANTES ---\n";
    for (int i = 0; i < totalEstudiantes; i++) {
        Persona* p = &estudiantes[i];
        p->mostrarInfo();            
    }
}


void Curso::ordenarPorNombre() {
    for (int i = 0; i < totalEstudiantes - 1; i++) {
        for (int j = i + 1; j < totalEstudiantes; j++) {
            if (estudiantes[i].getNombre() > estudiantes[j].getNombre()) {
                swap(estudiantes[i], estudiantes[j]);
            }
        }
    }

    cout << "Estudiantes ordenados por nombre.\n";
}

void Curso::ordenarPorNota() {
    for (int i = 0; i < totalEstudiantes - 1; i++) {
        for (int j = i + 1; j < totalEstudiantes; j++) {
            if (estudiantes[i].promedio() < estudiantes[j].promedio()) {
                swap(estudiantes[i], estudiantes[j]);
            }
        }
    }

    cout << "Estudiantes ordenados por promedio.\n";
}

float Curso::promedio() {
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes para promediar.\n";
        return 0;
    }

    float suma = 0;

    for (int i = 0; i < totalEstudiantes; i++) {
        suma += estudiantes[i].promedio();
    }

    return suma / totalEstudiantes;
}


void Curso::reiniciarNotas() {
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes.\n";
        return;
    }

    for (int i = 0; i < totalEstudiantes; i++) {
        for (int j = 0; j < 5; j++) {
            estudiantes[i].notas[j] = -1;
        }
    }

    cout << "Notas reiniciadas correctamente.\n";
}

void Curso::eliminarCurso() {
    totalEstudiantes = 0;
    profesor = Profesor();
    activo = false;
    cout << "Curso eliminado completamente.\n";
}

int Curso::buscarEstudiante(string nombre) {
    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].getNombre() == nombre) {
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
        if (estudiantes[i].promedio() > estudiantes[pos].promedio()) {
            pos = i;
        }
    }

    cout << "Mayor promedio:\n";
    cout << estudiantes[pos].getNombre()
         << " (" << estudiantes[pos].promedio() << ")\n";
}

void Curso::mostrarMenorNota() {
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes.\n";
        return;
    }

    int pos = 0;

    for (int i = 1; i < totalEstudiantes; i++) {
        if (estudiantes[i].promedio() < estudiantes[pos].promedio()) {
            pos = i;
        }
    }

    cout << "Menor promedio:\n";
    cout << estudiantes[pos].getNombre()
         << " (" << estudiantes[pos].promedio() << ")\n";
}

int Curso::contarAprobados() {
    int cont = 0;

    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].promedio() >= 11) {
            cont++;
        }
    }

    return cont;
}

int Curso::contarDesaprobados() {
    return totalEstudiantes - contarAprobados();
}
void Curso::resumenCurso() {
    cout << "\n--- RESUMEN DEL CURSO ---\n";
    cout << "Curso: " << nombreCurso << endl;

    if (profesor.estaActivo()) {
        cout << "Profesor: " << profesor.getNombre() << endl;
    } else {
        cout << "Profesor: (sin asignar)\n";
    }

    cout << "Total estudiantes: " << totalEstudiantes << endl;
    cout << "Aprobados: " << contarAprobados() << endl;
    cout << "Desaprobados: " << contarDesaprobados() << endl;
    cout << "Promedio del curso: " << promedio() << endl;
}

void Curso::cambiarNombreCurso() {
    cout << "Nuevo nombre del curso: ";
    cin.ignore();
    getline(cin, nombreCurso);
    cout << "Nombre del curso actualizado.\n";
}

void Curso::editarNota() {
    if (!profesor.estaActivo()){
        cout << "No hay profesor asignado.\n";
        return;
    }

    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes.\n";
        return;
    }

    mostrarEstudiantes();
    int e;
    cout << "Seleccione estudiante: ";
    cin >> e;
    e--;

    if (e < 0 || e >= totalEstudiantes) {
        cout << "Estudiante inválido.\n";
        return;
    }

    int n;
    cout << "Seleccione nota (1-5): ";
    cin >> n;
    n--;

    if (n < 0 || n >= 5) {
        cout << "Número de nota inválido.\n";
        return;
    }

    float nota;
    cout << "Nueva nota (0-20): ";
    cin >> nota;

    if (nota < 0 || nota > 20) {
        cout << "Nota fuera de rango.\n";
        return;
    }

    estudiantes[e].notas[n] = nota;
    cout << "Nota editada correctamente.\n";
}
float Curso::promedioEvaluacion(int indice) {
    float suma = 0;
    int cont = 0;

    for (int i = 0; i < totalEstudiantes; i++) {
        if (estudiantes[i].notas[indice] >= 0) {
            suma += estudiantes[i].notas[indice];
            cont++;
        }
    }

    return (cont > 0) ? suma / cont : 0;
}
void Curso::mostrarPromediosEvaluaciones() {
    for (int i = 0; i < 5; i++) {
        cout << "Promedio Nota " << i + 1 << ": "
             << promedioEvaluacion(i) << endl;
    }
}
void Curso::mostrarProfesor() {
    if (!profesor.estaActivo()) {
        cout << "El curso no tiene profesor asignado.\n";
        return;
    }

    cout << "\n=== INFORMACIÓN DEL PROFESOR ===\n";

    Persona* p = &profesor;
    p->mostrarInfo();

    cout << "Cantidad de estudiantes: " << totalEstudiantes << endl;
    cout << "Promedio del curso: " << promedio() << endl;
}