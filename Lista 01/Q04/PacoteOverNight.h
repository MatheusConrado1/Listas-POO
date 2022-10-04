#include "Pacote.h"
#ifndef PACOTEOVERNIGHT_H
#define PACOTEOVERNIGHT_H
#include <iostream>
using namespace std;

class PacoteOverNight: protected Pacote{
    public:
        PacoteOverNight(string nd,string ed,string cd,string esd,string cepd,string nr,string er,string cr,string esr,string cepr,float p, float pk,float ta);

        void setTaxaAd(float taxaAd);

        float getTaxaAD();

        float calculaNovoCusto(float peso,float precoKg,float taxaAd);
    private:
        float taxaAd;
};



#endif