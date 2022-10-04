#ifndef NUMERORACIONAL_H
#define NUMERORACIONAL_H
#include <iostream>
using namespace std;

class NumeroRacional{
private:
    float numerador;
    float denominador;
public:
    NumeroRacional() = default;
    NumeroRacional(float n, float d);
    float div(float n, float d);
    NumeroRacional operator+(NumeroRacional &v);
    NumeroRacional operator-(NumeroRacional &v);
    NumeroRacional operator*(NumeroRacional &v);
    NumeroRacional operator/(NumeroRacional &v);
    void print();
};
#endif