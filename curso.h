#ifndef CURSO_H
#define CURSO_H

#include "profesor.h"
#include "estudiante.h"

const int MAX_EST = 30;

class Curso {
public:
    string nombreCurso;
    Profesor profesor;
    Estudiante estudiantes[MAX_EST];
    int totalEstudiantes;
    bool activo;

    Curso();

    void asignarProfesor();
    void cambiarProfesor();
    void matricularEstudiante();
    void eliminarEstudiante();
    void ingresarNotas();
    void mostrarEstudiantes();
    void ordenarPorNota();
    float promedio();
    void reiniciarNotas();
    void eliminarCurso();
    int buscarEstudiante(string nombre);
	void mostrarMayorNota();
	void mostrarMenorNota();
	void resumenCurso();
	void cambiarNombreCurso();
	int contarAprobados();
	int contarDesaprobados();
	void mostrarProfesor();
	void editarNota();
	float promedioEvaluacion(int indice);
	void mostrarPromediosEvaluaciones();
	void guardarEstudiantesEnArchivo();
	void mostrarNotasEstudiantes();
};

#endif