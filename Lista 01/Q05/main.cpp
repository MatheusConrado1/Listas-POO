#include <iostream>
using namespace std;
#include "Poupanca.h"
#include "ContaCorrente.h"

int main(){
    Conta *a = new Conta(1200);
    a->Conta::Credito(100);
    a->Conta::Debito(150);
    cout << "==============================================" << endl; 
    Poupanca *b = new Poupanca(1500, 1.4);
    b->calculaRendimento();
    cout << "==============================================" << endl; 
    ContaCorrente *c = new ContaCorrente(230000, 150);
    c->ContaCorrente::Credito(15000);
    c->ContaCorrente::Debito(140);
}