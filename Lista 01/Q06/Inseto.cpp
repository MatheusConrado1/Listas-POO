#include <iostream>
#include "inseto.h"
using namespace std;

Inseto::Inseto(string ni, bool v, bool a, bool f){
    setNomeins(ni);
    setVenenoso(v);
    setAlado(a);
    setFerrao(f);
}

string Inseto::getNomeins(){return nomeins;}
bool Inseto::getVenenoso(){return venenoso;}
bool Inseto::getAlado(){return alado;}
bool Inseto::getFerrao(){return ferrao;}

void Inseto::setNomeins(string ni){nomeins = ni;}
void Inseto::setVenenoso(bool v){venenoso = v;}
void Inseto::setAlado(bool a){alado = a;}
void Inseto::setFerrao(bool f){ferrao = f;}


void Inseto::print(){
    cout << "Nome Inseto: " << getNomeins() << endl;
    cout << "Venenoso? " << getVenenoso() << endl;
    cout << "Alado? " << getAlado() << endl;
    cout << "Tem ferrao? " << getFerrao() << endl;
}