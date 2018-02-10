//
// Created by Javier on 8/2/2018.
//
#include <iostream>
#include "PaqueteNocturno.h"

using namespace std;

PaqueteNocturno::PaqueteNocturno(){
    costo=0;
}
PaqueteNocturno::PaqueteNocturno(int cost): Paquete() {
    costo=cost;
}

double PaqueteNocturno::calcularCosto() {
    Paquete::calcularCosto();

}