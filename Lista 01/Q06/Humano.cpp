#include <iostream>
#include "Humano.h"
using namespace std;

Humano::Humano(string n, string s, string l, string e, int i){
    setnome(n);
    setsexo(s);
    setlingua(l);
    setetnia(e);
    setidade(i);
}

string Humano::getnome(){return nome;}
string Humano::getsexo(){return sexo;}
string Humano::getlingua(){return lingua;}
string Humano::getetnia(){return etnia;}
int Humano::getidade(){return idade;}

void Humano::setnome(string n){nome = n;}
void Humano::setsexo(string s){sexo = s;}
void Humano::setlingua(string l){lingua = l;}
void Humano::setetnia(string e){etnia = e;}
void Humano::setidade(int i){idade = i;}

void Humano::print(){
    cout << "Nome Humano: " << getnome() << endl;
    cout << "Sexo: " << getsexo() << endl;
    cout << "Lingua: " << getlingua() << endl;
    cout << "Etnia: " << getetnia() << endl;
    cout << "Idade: " << getidade() << endl;
}