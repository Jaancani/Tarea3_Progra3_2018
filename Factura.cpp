//
// Created by Javier on 6/2/2018.
//

#include "Factura.h"
#include <iostream>
using namespace std;

Factura::Factura(string p , string d, int c, int pr){
    setPieza(p);
    setDescripcion(d);
    setCantidad(c);
    setPrecio(pr);
}

string Factura::getPieza(){
    return pieza;
}
void Factura::setPieza(string pieza) {
    Factura::pieza = pieza;
}
string Factura::getDescripcion(){
    return descripcion;
}
void Factura::setDescripcion(string descripcion) {
    Factura::descripcion = descripcion;
}
int Factura::getCantidad(){
    return cantidad;
}
void Factura::setCantidad(int cantidad) {
    Factura::cantidad = cantidad;
}
int Factura::getPrecio(){
    return precio;
}
void Factura::setPrecio(int precio) {
    Factura::precio = precio;
}
int Factura::montoFactura() {
    return (getCantidad()*getPrecio());
}
void Factura::imprimirFactura() {
    cout<<"Pieza: "<<getPieza()<<endl;
    cout<<"Descripcion: "<<getDescripcion()<<endl;
    cout<<"Cantidad: "<<getCantidad()<<endl;
    cout<<"Precio c/u: "<<getPrecio()<<endl;
    cout<<"Total: "<<montoFactura()<<endl;
}