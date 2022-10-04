#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <iostream>
using namespace std;
#include "Conta.h"

class ContaCorrente: public Conta{
private:
double taxa;

public:
ContaCorrente(double saldo, double taxa);
void setTaxa(double taxa);
double getTaxa();
void Credito(double valor);
void Debito(double valor);

};
#endif