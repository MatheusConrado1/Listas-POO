#include <iostream>
using namespace std;
#include "ContaCorrente.h"


ContaCorrente::ContaCorrente(double saldo, double taxa):Conta(saldo){
    this->taxa = taxa;
}
void ContaCorrente::setTaxa(double taxa) { this->taxa = taxa; } 
double ContaCorrente::getTaxa() { return this->taxa; }

void ContaCorrente::Credito(double valor){
    Conta::setSaldo(getSaldo() + valor - taxa);
    cout << "Operacao de Credito realizada \n Novo saldo: " << Conta::getSaldo() << endl;
}

void ContaCorrente::Debito(double valor){
    if(getSaldo() - valor < 0){
        cout << "Erro: Nao possui saldo suficiente para operacao de debito" << endl;    
    }
    else {
        Conta::setSaldo(getSaldo() - valor - getTaxa());
        cout << "Operacao de Debito realizada \n Novo saldo: " << Conta::getSaldo() << endl;
    }
}