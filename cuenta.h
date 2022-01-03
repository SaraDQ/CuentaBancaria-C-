#ifndef CUENTA_H
#define CUENTA_H

#include <string>
using namespace std;

class Cuenta
{   
private:
    string titular;
    double cantidad;

public:
    //Constructor
    Cuenta();
    Cuenta(const string &titular, double cantidad);

    const string &getTitular() const;
    double getCantidad() const;
    void ingresar(double valor);
    void retirar(double c);
    void balance();

};

#endif // CUENTA_H
