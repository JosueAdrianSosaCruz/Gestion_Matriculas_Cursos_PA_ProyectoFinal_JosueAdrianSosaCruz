#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include <iostream>
#include <string>
using namespace std;

class Profesor : public Persona {
private:
    bool activo;

public:
    string especialidad;
    int codigo;

    Profesor() {
        nombre = "";
        especialidad = "";
        codigo = 0;
        activo = false;
    }

    bool estaActivo() {
        return activo;
    }

    void activar() {
        activo = true;
    }

    void desactivar() {
        activo = false;
    }

    void mostrarInfo() override {
        cout << "\n--- PROFESOR ---\n";
        cout << "Nombre: " << nombre << endl;
        cout << "Especialidad: " << especialidad << endl;
        cout << "Código: " << codigo << endl;
    }
};
#endif