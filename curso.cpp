#include "curso.h"
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

Curso::Curso() {
    nombreCurso = "";
    totalEstudiantes = 0;
    activo = false;
}

void Curso::asignarProfesor() {
    if (!activo) {
        cout << "Primero debe crear el curso.\n";
        return;
    }

    if (profesor.estaActivo()) {
        cout << "Este curso ya tiene profesor.\n";
        return;
    }

    string nom;
    cout << "Nombre del profesor: ";
    cin.ignore();
    getline(cin, nom);
    profesor.setNombre(nom);

    cout << "Especialidad: ";
    getline(cin, profesor.especialidad);

    cout << "Código del profesor: ";
    cin >> profesor.codigo;

    cout << "Profesor asignado correctamente.\n";
}

void Curso::cambiarProfesor() {
    if (!profesor.estaActivo()) {
        cout << "No hay profesor asignado.\n";
        return;
    }

    string nom;
    cout << "Nuevo nombre del profesor: ";
    cin.ignore();
    getline(cin, nom);
    profesor.setNombre(nom);

    cout << "Nueva especialidad: ";
    getline(cin, profesor.especialidad);

    cout << "Nuevo código: ";
    cin >> profesor.codigo;

    cout << "Profesor actualizado correctamente.\n";
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
 	string nom; getline(cin, nom);
 	estudiantes[totalEstudiantes].setNombre(nom);
 	totalEstudiantes++;
 	cout << "Estudiante matriculado.\n";
 }
void Curso::eliminarEstudiante() {
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes para eliminar.\n";
        return;
    }

    cout << "\n--- LISTA DE ESTUDIANTES ---\n";
    for (int i = 0; i < totalEstudiantes; i++) {
        cout << i + 1 << ". " << estudiantes[i].getNombre() << endl;
    }

    int op;
    cout << "Seleccione el número del estudiante a eliminar: ";
    cin >> op;
    op--;

    if (op < 0 || op >= totalEstudiantes) {
        cout << "Opción inválida.\n";
        return;
    }

    for (int i = op; i < totalEstudiantes - 1; i++) {
        estudiantes[i] = estudiantes[i + 1];
    }

    totalEstudiantes--;

    cout << "Estudiante eliminado correctamente.\n";
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
void Curso::guardarEstudiantesEnArchivo() {
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes para guardar.\n";
        return;
    }

    ofstream archivo;
    archivo.open(nombreCurso + "estudiantes.txt", ios::out);

    if (!archivo) {
        cout << "Error al crear el archivo.\n";
        return;
    }

    archivo << "Curso: " << nombreCurso << endl;

    if (profesor.estaActivo()) {
        archivo << "Profesor: " << profesor.getNombre() << endl;
    } else {
        archivo << "Profesor: (sin asignar)\n";
    }

    archivo << "\n--- LISTA DE ESTUDIANTES ---\n";

    for (int i = 0; i < totalEstudiantes; i++) {
        archivo << i + 1 << ". "
                << estudiantes[i].getNombre()
                << " - Promedio: "
                << estudiantes[i].promedio()
                << endl;
    }

    archivo.close();
    archivo.clear();

    cout << "Estudiantes guardados correctamente en el archivo.\n";
}