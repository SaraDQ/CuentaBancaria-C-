#include "cuenta.h"
#include <iostream>
using namespace std;

const string &Cuenta::getTitular() const
{
    return titular;
}

double Cuenta::getCantidad() const
{
    return cantidad;
}

void Cuenta::ingresar(double valor)
{
    int verif=0;
    if(valor>0){
        verif=cantidad+valor;
        cantidad=verif;
    }
}

void Cuenta::retirar(double c){
    int fondo=0;
    if(cantidad>=c){
        fondo=cantidad-c;
        cantidad=fondo;
    }
}

void Cuenta::balance(){
    cout<<"Titular:"<<titular<<", "<<"Cantidad: "<<cantidad<<endl;

}

Cuenta::Cuenta()
{
    titular = "N";
    cantidad = 0;
}

Cuenta::Cuenta(const string &titular, double cantidad) : titular(titular),
    cantidad(cantidad)
{}

