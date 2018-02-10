//
// Created by Javier on 8/2/2018.
//
#include <iostream>
#include "Paquete.h"
#include "PaqueteDosDias.h"

using namespace std;

PaqueteDosDias::PaqueteDosDias(): cuotaFija(0) {}
PaqueteDosDias::PaqueteDosDias(int cuota) : Paquete() {
    cuotaFija=cuota;
}

void PaqueteDosDias::setCuotaFija(int cuota) {
    cuotaFija=cuota;
}


double PaqueteDosDias::calcularCosto() {
    Paquete::calcularCosto();
    return tot= tot+cuotaFija;

}
