#ifndef POUPANCA_H
#define POUPANCA_H

#include <iostream>
using namespace std;
#include "Conta.h"

class Poupanca: public Conta{
private:
    double rendimento;

public:
    Poupanca(double saldo, double rendimento);
    void setRendimento(double rendimento);
    double getRendimento();
    void calculaRendimento();
};
#endif