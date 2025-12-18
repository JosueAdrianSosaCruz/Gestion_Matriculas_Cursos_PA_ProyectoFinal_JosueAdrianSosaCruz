#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"
#include <string>
using namespace std;

class Profesor : public Persona {
public:
    string especialidad;
    int codigo;

    Profesor();             
    void mostrarInfo() override;  
};

#endif