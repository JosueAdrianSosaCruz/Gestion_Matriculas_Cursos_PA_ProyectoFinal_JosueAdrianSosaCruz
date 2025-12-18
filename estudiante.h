#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"

class Estudiante : public Persona {
public:
    float notas[5];

    Estudiante() {
        for (int i = 0; i < 5; i++)
            notas[i] = -1;
    }

    float promedio() {
        float suma = 0;
        int cont = 0;
        for (int i = 0; i < 5; i++) {
            if (notas[i] >= 0) {
                suma += notas[i];
                cont++;
            }
        }
        return (cont > 0) ? suma / cont : 0;
    }

    void mostrarInfo() override {
        cout << "Estudiante: " << nombre
             << " | Promedio: " << promedio() << endl;
    }
};

#endif