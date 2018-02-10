//
// Created by Javier on 6/2/2018.
//

#include "Cuenta.h"
#include <iostream>
using namespace std;


Cuenta::Cuenta(int monto) {
    if(monto>=0){
        this->saldo=monto;
    }else{
        cout<<"Monto Invalido"<<endl<<"Saldo cuenta: 0"<<endl;
        this->saldo=0;
    }
}
void Cuenta::miembroAbonar(int monto) {
    this->saldo+=monto;
    cout<<"Se abono "<<monto<<" a su cuenta."<<endl;
}
void Cuenta::miembroCargar(int monto) {
    if(monto>miembroObtener()){
        cout<<"Monto a retirar excede saldo en cuenta"<<endl;
    }else{
        this->saldo=saldo-monto;
        cout<<"Se retiro "<<monto<<" de su cuenta."<<endl;
    }
}
int Cuenta::miembroObtener() {
    return this->saldo;
}