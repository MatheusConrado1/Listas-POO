#include <iostream>
#include "Estacionamento.h"
using namespace std;

Estacionamento::Estacionamento(string p, string m,int h, int min, int s):Tempo(h,min,s){
    setPlaca(p);
    setModelo(m);
}

string Estacionamento::getPlaca(){
    return placa;
}

string Estacionamento::getModelo(){
    return modelo;
}

void Estacionamento::setPlaca(string p){
    placa = p;
}

void Estacionamento::setModelo(string m){
    modelo = m;
}

void Estacionamento::print(){
    cout << "Modelo: " << getModelo() << endl 
    << "Placa: " << getPlaca() << endl
    << "Hora de entrada: ";
    Tempo::print();
    cout << endl;

}

float Estacionamento::Calc(int x){
    return x*1.5;
}