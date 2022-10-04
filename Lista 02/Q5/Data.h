#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>
using namespace std;

class Data{
private:
    int mes;
    int dia;
    int ano;

public:
    Data(int dia, int mes, int ano);
    Data(int dia, string mes, int ano);
        
    void setMes(int mes);
    int getMes();
    void setDia(int dia);
    int getDia();
    void setAno(int ano);
    int getAno();
    
    void print();
    int Calc(int dia, int mes);
    int Calc(int dia, string mes);
};
 
#endif