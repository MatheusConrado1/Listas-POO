#include "Tempo.h"
#include <iostream>
using namespace std;


Tempo::Tempo(int h, int m, int s){
    while(s >=60){
        s-=60;
        m++;
    }
    while(m >= 60){
        m -= 60;
        h++;
    }
    if(h >= 24){
        h = 0;
    }
    setHora(h);
    setMinuto(m);
    setSegundo(s);
}

int Tempo::getHora(){
    return hora;
}
int Tempo::getMinuto(){
    return minuto;
}
int Tempo::getSegundo(){
    return segundo;
}

void Tempo::setHora(int h){
    hora = h;
}

void Tempo::setMinuto(int m){
    minuto = m;
}

void Tempo::setSegundo(int s){
    segundo = s;
}

Tempo Tempo::operator-(Tempo &v){
    Tempo aux;
    aux.hora = this->hora - v.hora;
    aux.minuto = this->minuto - v.minuto;
    aux.segundo = this->segundo - v.segundo;

    return aux;
}

Tempo Tempo::operator+(Tempo &v){
    Tempo aux;
    aux.hora = this->hora + v.hora;
    aux.minuto = this->minuto + v.minuto;
    aux.segundo = this->segundo + v.segundo;

    return aux;

}

void Tempo::print(){
    cout << getHora() << ":" << getMinuto() << ":" << getSegundo() << endl;
}