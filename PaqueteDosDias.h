//
// Created by Javier on 8/2/2018.
//

#ifndef TAREA3_PROGRA3_PAQUETEDOSDIAS_H
#define TAREA3_PROGRA3_PAQUETEDOSDIAS_H
#include "Paquete.h"
#include <iostream>
using  namespace std;

class PaqueteDosDias: public Paquete {
protected:
    int cuotaFija;
public:
    PaqueteDosDias();
    PaqueteDosDias(int);

    void setCuotaFija(int);
    double calcularCosto();
};


#endif //TAREA3_PROGRA3_PAQUETEDOSDIAS_H
