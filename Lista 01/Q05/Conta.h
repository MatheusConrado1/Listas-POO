#ifndef CONTA_H
#define CONTA_H

#include <iostream>
using namespace std;

class Conta{
private:
    double saldo;
public:
    Conta(double saldoini);
    void setSaldo(double saldo);
    double getSaldo();
    void Credito(double valor);
    void Debito(double valor);
    void printSaldo();
};
#endif