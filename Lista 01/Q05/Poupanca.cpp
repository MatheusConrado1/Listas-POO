#include <iostream>
using namespace std;
#include "Poupanca.h"

Poupanca::Poupanca(double saldoini, double rendimento):Conta(saldoini){
    this->rendimento = rendimento;
}
void Poupanca::setRendimento(double rendimento) { this->rendimento = rendimento; } 
double Poupanca::getRendimento() { return this->rendimento; }
void Poupanca::calculaRendimento(){
    cout << "Rendimento do saldo: " << Conta::getSaldo() * getRendimento() << endl;
}