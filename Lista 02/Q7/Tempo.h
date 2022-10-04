#ifndef TEMPO_H
#define TEMPO_H
#include <iostream>
using namespace std;

class Tempo{
    private:
        int hora;
        int minuto;
        int segundo;

    public:
        Tempo() = default;  
        Tempo(int h, int m, int s);

        int getHora();
        int getMinuto();
        int getSegundo();

        void setHora(int h);
        void setMinuto(int m);
        void setSegundo(int s);

        Tempo operator-(Tempo &v);
        Tempo operator+(Tempo &v);

        void print();

};
#endif