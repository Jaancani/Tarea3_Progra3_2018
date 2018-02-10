#include <iostream>
#include "Cuenta.h"
#include "Factura.h"
#include "Fecha.h"
#include "Paquete.h"
#include "PaqueteDosDias.h"
#include "PaqueteNocturno.h"
using namespace std;

int main() {
    //Ejercicio 3.12
    cout<<"\nEjercicio 3.12"<<endl;
    Cuenta c1(200000);
    Cuenta c2(300000);

    cout<<"Cuenta 1: "<<c1.miembroObtener()<<endl;
    cout<<"Cuenta 2: "<<c2.miembroObtener()<<endl;

    c1.miembroAbonar(10000);
    c2.miembroAbonar(1000000);

    c1.miembroCargar(50000);
    c2.miembroCargar(50000);

    cout<<"Cuenta 1: "<<c1.miembroObtener()<<endl;
    cout<<"Cuenta 2: "<<c2.miembroObtener()<<endl;

    //Ejercicio 3.13
    cout<<"\nEjercicio 3.13"<<endl;
    Factura f("Grifo","Cocina",5,25);
    f.imprimirFactura();


    //Ejercicio 3.15
    cout<<"\nEjercicio 3.15"<<endl;
    Fecha fe(12,3,2018);
    fe.imprimirFecha();

    //Ejercicio 11.9
    string nom = "Javier";
    string dir= "Barrio Las Flores";
    string ciu= "Villanueva ";
    string est="Soltero";
    string cod= "21611132";
    int cFija;
    int kg;
    int ck;
    Paquete pack1(nom,dir,ciu,est,cod,kg,ck);
    PaqueteDosDias pack2(cFija);
    PaqueteNocturno pack3(ck);

    int opc;

    cout << "----------Servicio de Envios-----------"<<endl;
    cout << "1. Paquete Normal"<<endl;
    cout << "2. Paquete DosDias"<<endl;
    cout <<"3. Paquete Nocturno"<<endl;
    cout <<"Ingrese una opcion:  ";
    cin >>opc;

    cout <<endl<<"Kilogramos del paquete: ";
    cin >> kg;
    pack1.setKilogramo(kg);

    cout <<endl<<"Costo por kilogramo: ";
    cin >>ck;
    pack1.setCosto(ck);

    switch (opc){
        case 1:
            cout <<"\n\n---------------Paquete Normal------------"<<endl;
            cout <<"Nombre: "<<nom<<endl;
            cout <<"Direccion: "<<dir<<endl;
            cout <<"Ciudad: "<<ciu<<endl;
            cout <<"Estado: "<<est<<endl;
            cout <<"Codigo Postal: "<<cod<<endl;
            cout <<"Kilogramos: "<<pack1.getKg()<<endl;
            cout <<"Costo por kilogramos: "<<pack1.getCk()<<endl;
            cout <<"Total: "<<pack1.calcularCosto()<<endl;
            break;
        case 2:
            cout <<"Ingrese la cuota fija: ";
            cin >>cFija;
            pack2.setCuotaFija(cFija);
            cout <<"\n\n---------------Paquete Dos Dias------------"<<endl;
            cout <<"Nombre: "<<nom;
            cout <<"Direccion: "<<dir<<endl;
            cout <<"Ciudad: "<<ciu<<endl;
            cout <<"Estado: "<<est<<endl;
            cout <<"Codigo Postal: "<<cod<<endl;
            cout <<"Kilogramos: "<<pack1.getKg()<<endl;
            cout <<"Costo por kilogramos: "<<pack1.getCk()<<endl;
            cout <<"Total: "<<pack1.calcularCosto()+cFija<<endl;

            break;
        case 3:
            cout <<"\n\n---------------Paquete Nocturno------------"<<endl;
            cout <<"-------------------NOTA------------------"<<endl;
            cout <<"En el envio Nocturno el costo por Kilogramo aumenta en un 20%"<<endl;
            cout <<"Nombre: "<<nom<<endl;
            cout <<"Direccion: "<<dir<<endl;
            cout <<"Ciudad: "<<ciu<<endl;
            cout <<"Estado: "<<est<<endl;
            cout <<"Codigo Postal: "<<cod<<endl;
            cout <<"Kilogramos: "<<pack1.getKg()<<endl;
            cout <<"Costo por kilogramos: "<<pack1.getCk()<<endl;
            cout <<"Total: "<<pack1.calcularCosto() + (pack1.calcularCosto()*0.20)<<endl;
            break;
    }
    return 0;
}