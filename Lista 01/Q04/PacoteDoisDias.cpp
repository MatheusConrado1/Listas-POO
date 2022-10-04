#include "PacoteDoisDias.h"
#include <iostream>
using namespace std;

PacoteDoisDias::PacoteDoisDias(string nd,string ed,string cd,string esd,string cepd,string nr,string er,string cr,string esr,string cepr,float p, float pk,float ta):Pacote( nd, ed, cd, esd, cepd, nr, er, cr, esr, cepr, p,  pk){
    setTaxaAd(ta);
}

void PacoteDoisDias::setTaxaAd(float ta){  taxaAd = ta; }

float PacoteDoisDias::getTaxaAD(){ return taxaAd; }

float PacoteDoisDias::calculaNovoCusto(float peso, float precoKg, float taxaAd){
    float x = Pacote::calculaCusto(peso,precoKg);
    return x + taxaAd;
}