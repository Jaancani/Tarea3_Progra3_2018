//
// Created by Javier on 8/2/2018.
//

#include <iostream>
#include "Paquete.h"
using  namespace std;

Paquete::Paquete(): {
    nom="";
    dir="";
    ciu="";
    est="";
    codPostal="";
    kg=0;
    ck=0;
    tot=0;
}
Paquete::Paquete(string n, string d, string c, string e, string codigo, int kilo, int cost) {
    nom = n;
    dir=d;
    ciu = c;
    est=e;
    codPostal=codigo;
    kg=kilo;
    ck=cost;
}

void Paquete::setNombre(string n) {
    nom=n;
}

void Paquete::setDireccion(string d) {
    dir=d;
}
void Paquete::setCiudad(string c) {
    ciu=c;
}
void Paquete::setEstado(string estado) {
    est=estado;
}
void Paquete::setCodigoPostal(string codigo) {
    codPostal=codigo;
}
void Paquete::setKilogramo(int kilo) {
    if(kilo >= 0)
        kg=kilo;
    else
        kg=0;
}
void Paquete::setCosto(int cost) {
    if (cost >= 0)
        ck = cost;
    else
        ck = 0;
}
int Paquete::getKg() {
    return kg;
}

int Paquete::getCk() {
    return ck;
}

double Paquete::calcularCosto() {
    return tot = double(kg*ck);
}