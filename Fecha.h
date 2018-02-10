//
// Created by Javier on 6/2/2018.
//

#ifndef TAREA3_PROGRA3_FECHA_H
#define TAREA3_PROGRA3_FECHA_H


class Fecha {
public:
    int dia,mes,anio;
    Fecha(int, int , int );

    int getDia();
    void setDia(int dia);
    int getMes();
    void setMes(int mes);
    int getAnio();
    void setAnio(int anio);

    void imprimirFecha();
};


#endif //TAREA3_PROGRA3_FECHA_H
