#include "superheroi.h"
#include <iostream>
using namespace std;

SuperHeroi::SuperHeroi(string n, string s, string l, string e, int i, string ni, bool v, bool a, bool f, string codinome,bool trauma, bool poderes):Humano(n,s,l,e,i),Inseto(ni,v,a,f){
    setCodinome(codinome);
    setTrauma(trauma);
    setPoderes(poderes);
}

string SuperHeroi::getCodinome(){return codinome;}
bool SuperHeroi::getTrauma(){return trauma;}
bool SuperHeroi::getPoderes(){return poderes;}

void SuperHeroi::setCodinome(string cn){codinome = cn;}
void SuperHeroi::setTrauma(bool t){trauma = t;}
void SuperHeroi::setPoderes(bool p){poderes = p;}

void SuperHeroi::print(){
    Humano::print();
    Inseto::print();
    cout << "Codinome do Heroi: " << getCodinome() << endl;
    cout << "Tem traumas?  " << getTrauma() << endl;
    cout << "Tem superpoderes? "<< getPoderes() << endl;
}