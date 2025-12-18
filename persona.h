#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    bool activo;

public:
    Persona() {
        nombre = "";
        activo = false;
    }

    void setNombre(string n) {
        nombre = n;
        activo = true;
    }

    bool estaActivo() {
        return activo;
    }

    string getNombre() {
        return nombre;
    }

    virtual void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
    }

    virtual ~Persona() {}
};

#endif