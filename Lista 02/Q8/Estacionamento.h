#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H
#include <iostream>
#include "Tempo.h"
using namespace std;

class Estacionamento: public Tempo{
    private:
        string placa;
        string modelo;
    public:
        Estacionamento() = default;
        Estacionamento(Tempo v);
        Estacionamento(string p, string m,int h, int min, int s);

        string getPlaca();
        string getModelo();

        void setPlaca(string p);
        void setModelo(string m);

        void print();

        float Calc(int x);
};

#endif