#ifndef SUPERHEROI_H
#define SUPERHEROI_H
#include "humano.h"
#include "inseto.h"
#include <iostream>
using namespace std;

class SuperHeroi: public Humano, public Inseto{
private:
    string codinome;
    bool trauma;
    bool poderes;
public:
    SuperHeroi() = default;
    SuperHeroi(string n, string s, string l, string e, int i, string ni, bool v, bool a, bool f, string codinome,bool trauma, bool poderes);
    string getCodinome();
    bool getTrauma();
    bool getPoderes();
    void setCodinome(string cn);
    void setTrauma(bool t);
    void setPoderes(bool p);
    void print();
};



#endif