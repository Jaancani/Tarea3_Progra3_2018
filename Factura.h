//
// Created by Javier on 6/2/2018.
//

#ifndef TAREA3_PROGRA3_FACTURA_H
#define TAREA3_PROGRA3_FACTURA_H

#include <iostream>
using namespace std;
class Factura {
public:
    string pieza;
    string descripcion;
    int cantidad;
    int precio;

    Factura(string , string ,int , int);

    string getPieza();
    void setPieza(string pieza);
    string getDescripcion();
    void setDescripcion(string descripcion);
    int getCantidad();
    void setCantidad(int cantidad);
    int getPrecio();
    void setPrecio(int precio);

    int montoFactura();
    void imprimirFactura();
};


#endif //TAREA3_PROGRA3_FACTURA_H
