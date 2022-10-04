#include "NumeroRacional.h"
#include <iostream>
using namespace std;

NumeroRacional::NumeroRacional(float n, float d){
    if(d <= 0){
        cout << "ERROR! Valor do denominador nulo ou negativo!" << endl;
    }else{
        numerador = n;
        denominador = d;
    }
}

float NumeroRacional::div(float n, float d){
    float x = n/d;
    return x;
}

NumeroRacional NumeroRacional::operator+(NumeroRacional &v){
    NumeroRacional aux;
    aux.numerador = (this->numerador*v.denominador) + (this->denominador * v.numerador);
    aux.denominador = this->denominador*v.denominador;
    return aux;
}

NumeroRacional NumeroRacional::operator-(NumeroRacional &v){
    NumeroRacional aux;
    aux.numerador = (this->numerador*v.denominador) - (this->denominador*v.numerador);
    aux.denominador = this->denominador*v.denominador;
    return aux;
}
NumeroRacional NumeroRacional::operator*(NumeroRacional &v){
    NumeroRacional aux;
    aux.numerador = this->numerador*v.numerador;
    aux.denominador = this->denominador*v.denominador;
    return aux;
}
NumeroRacional NumeroRacional::operator/(NumeroRacional &v){
    NumeroRacional aux;
    aux.numerador = this->numerador*v.denominador;
    aux.denominador = this->denominador*v.numerador;
    return aux;
}

void NumeroRacional::print(){
    cout << fixed << div(numerador,denominador) << endl;
}