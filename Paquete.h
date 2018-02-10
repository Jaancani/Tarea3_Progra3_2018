//
// Created by Javier on 8/2/2018.
//

#ifndef TAREA3_PROGRA3_PAQUETE_H
#define TAREA3_PROGRA3_PAQUETE_H
#include <iostream>
using  namespace std;

class Paquete {
protected:
    string nom;
    string dir;
    string ciu;
    string est;
    string codPostal;
    int kg;
    int ck;
    double tot;
public:
    Paquete();
    Paquete(string,string,string,string,string,int, int);

    void setNombre(string);
    void setDireccion(string);
    void setCiudad(string);
    void setEstado(string);
    void setCodigoPostal(string);

    void setKilogramo(int);
    void setCosto(int);

    int getKg();
    int getCk();

    virtual double calcularCosto();
};


#endif //TAREA3_PROGRA3_PAQUETE_H
