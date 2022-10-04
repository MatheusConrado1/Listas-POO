#include "Pacote.h"
#ifndef PACOTEDOISDIAS_H
#define PACOTEDOISDIAS_H
#include <iostream>
using namespace std;

class PacoteDoisDias: protected Pacote{
    public:
        PacoteDoisDias(string nd,string ed,string cd,string esd,string cepd,string nr,string er,string cr,string esr,string cepr,float p, float pk,float ta);

        void setTaxaAd(float ta);

        float getTaxaAD();

        float calculaNovoCusto(float peso,float precoKg,float taxaAd);
    private:
        float taxaAd;
};

#endif