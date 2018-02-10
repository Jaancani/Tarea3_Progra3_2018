//
// Created by Javier on 6/2/2018.
//

#include "Fecha.h"
#include <iostream>
using namespace std;


Fecha::Fecha(int d, int m, int a) {
    setDia(d);
    setMes(m);
    setAnio(a);
}

int Fecha::getDia(){
    return dia;
}
void Fecha::setDia(int dia) {
    if(dia>0 && dia<=31)
        Fecha::dia = dia;
    else
        Fecha::dia = 1;
}
int Fecha::getMes(){
    return mes;
}
void Fecha::setMes(int mes) {
    if(mes>0 && mes<=12)
        Fecha::mes = mes;
    else
        Fecha::mes = 1;
}
int Fecha::getAnio(){
    return anio;
}
void Fecha::setAnio(int anio) {
    Fecha::anio = anio;
}
void Fecha::imprimirFecha() {
    cout<<getDia()<<"/"<<getMes()<<"/"<<getAnio()<<endl;
}
