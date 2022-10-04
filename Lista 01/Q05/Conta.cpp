#include <iostream>
using namespace std;
#include "Conta.h"

Conta::Conta(double saldoini){
    if(saldoini < 0){
        setSaldo(0);
        cout << "Saldo inicial negativo, redefinido como 0" << endl;
    }
    else{
        setSaldo(saldoini);
        cout << "Saldo inicial: " << getSaldo() << endl;
    }
}
void Conta::setSaldo(double saldo) { this->saldo = saldo; } 
double Conta::getSaldo() { return this->saldo; }

void Conta::Credito(double valor){
    Conta::setSaldo(getSaldo() + valor);
    cout << "Operacao de Credito realizada \n Novo saldo: " << getSaldo() << endl;
}
void Conta::Debito(double valor){
    if(getSaldo() - valor < 0){
        cout << "Erro: Nao possui saldo suficiente para operacao de debito" << endl;    
    }
    else {
        Conta::setSaldo(getSaldo() - valor);
        cout << "Operacao de Debito realizada \n Novo saldo: " << getSaldo() << endl;
    }
}
void Conta::printSaldo(){
    cout << "Saldo atual: " << getSaldo() << endl;
}