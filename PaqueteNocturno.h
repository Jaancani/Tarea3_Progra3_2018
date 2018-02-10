//
// Created by Javier on 8/2/2018.
//

#ifndef TAREA3_PROGRA3_PAQUETENOCTURNO_H
#define TAREA3_PROGRA3_PAQUETENOCTURNO_H

#include "Paquete.h"
#include <iostream>
using  namespace std;

class PaqueteNocturno : public Paquete{
protected:
    int costo;
public:
    PaqueteNocturno();
    PaqueteNocturno(int);

    double calcularCosto();
};


#endif //TAREA3_PROGRA3_PAQUETENOCTURNO_H
