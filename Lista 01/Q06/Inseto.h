#ifndef INSETO_H
#define INSETO_H
#include <iostream>
using namespace std;

class Inseto{
private:
    string nomeins;
    bool venenoso;
    bool alado;
    bool ferrao;
public:
    Inseto() = default;
    Inseto(string ni, bool v, bool a, bool f);
    string getNomeins();
    bool getVenenoso();
    bool getAlado();
    bool getFerrao();
    void setNomeins(string ni);
    void setVenenoso(bool v);
    void setAlado(bool a);
    void setFerrao(bool f);
    void print();
};

#endif