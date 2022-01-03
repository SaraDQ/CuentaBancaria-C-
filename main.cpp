/*
 * Autor:Sara Quiguango <squiguangod@est.ups.edu.ec>
 * Practica 01:Clases y objetos
 * Ejercicio 01: Cuenta bancaria
 * Fecha:20/10/2021
 */
#include <iostream>
#include "cuenta.h"

int main(){

    cout << "\tCuenta bancaria\n\tMI BANCO" << endl;

    Cuenta cuenta01("Carlos Martinez",50);
    Cuenta cuenta02("Camila Hernandez",200);

    cuenta01.ingresar(10);
    cuenta02.ingresar(-150);

    cuenta01.balance();
    cuenta02.balance();

    cout<<endl;
    cout<< "-------------------------------\n";

    cuenta01.retirar(100);
    cuenta02.retirar(120);

    cuenta01.balance();
    cuenta02.balance();

    cout<<endl;
    return 0;
}
