#include <iostream>
#include <string>
using namespace std;
#include "Data.h"

Data::Data(int dia, int mes, int ano){
    if((mes > 12 || mes < 1) || (dia > 31 || dia < 1)){
        cout << "Erro: Data invalida" << endl;
        this->dia = 0;
        this->mes = 0;
        this->ano = 0;
    }else{
        setDia(dia);
        setMes(mes);
        setAno(ano);
    }
}

Data::Data(int dia, string mes, int ano){
    int aux;
    if(mes == "janeiro"){
        aux = 1;
    }else if(mes == "fevereiro"){
        aux = 2;
    }else if(mes == "março" || mes == "marco"){
        aux = 3;
    }else if(mes == "abril"){
        aux = 4;
    }else if(mes == "maio"){
        aux = 5;
    }else if(mes == "junho"){
        aux = 6;
    }else if(mes == "julho"){
        aux = 7;
    }else if(mes == "agosto"){
        aux = 8;
    }else if(mes == "setembro"){
        aux = 9;
    }else if(mes == "outubro"){
        aux = 10;
    }else if(mes == "novembro"){
        aux = 11;
    }else if(mes == "dezembro"){
        aux = 12;
    }
    setDia(dia);
    setMes(aux);
    setAno(ano);
}

void Data::setMes(int mes) { this->mes = mes; } 
int Data::getMes() { return this->mes; }
void Data::setDia(int dia) { this->dia = dia; } 
int Data::getDia() { return this->dia; }
void Data::setAno(int ano) { this->ano = ano; } 
int Data::getAno() { return this->ano; }

void Data::print(){
    cout << "A data de hoje eh: ";
    cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}

int Data::Calc(int dia, int mes){
    if((mes > 12 || mes < 1) || (dia > 31 || dia < 1)){
        cout << "Erro: Data invalida" << endl;
        
    }else{
        int aux = 0;
        int contador = 0;
        for(int i = 0; i < mes; i++){
            contador += 30;
            aux++;
        }
        aux = aux/2;
        contador += aux;
        contador -= dia;
        cout << "A quantidade de dias que passaram neste ano ate hoje eh: " << contador << endl;
    }  
}

int Data::Calc(int dia, string mes){
    int aux = 0;
    if(mes == "janeiro"){
        aux = 1;
    }else if(mes == "fevereiro"){
        aux = 2;
    }else if(mes == "março" || mes == "marco"){
        aux = 3;
    }else if(mes == "abril"){
        aux = 4;
    }else if(mes == "maio"){
        aux = 5;
    }else if(mes == "junho"){
        aux = 6;
    }else if(mes == "julho"){
        aux = 7;
    }else if(mes == "agosto"){
        aux = 8;
    }else if(mes == "setembro"){
        aux = 9;
    }else if(mes == "outubro"){
        aux = 10;
    }else if(mes == "novembro"){
        aux = 11;
    }else if(mes == "dezembro"){
        aux = 12;
    }

    int m = 0;
    int contador = 0;
    for(int i = 0; i < aux; i++){
        contador += 30;
        m++;
    }
    m = m/2;
    contador += m;
    contador -= dia;
    cout << "A quantidade de dias que passaram neste ano ate hoje eh: " << contador << endl;

}