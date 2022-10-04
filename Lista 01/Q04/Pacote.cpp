#include "Pacote.h"
#include <iostream>
using namespace std;

Pacote::Pacote(string nd,string ed,string cd,string esd,string cepd,string nr,string er,string cr,string esr,string cepr,float p, float pk){
    if(p <= 0 || pk <= 0){
        cout << "ERROR! Valor de peso ou preco por KG invalidos!" << endl;
    }else{
        setNomeDes(nd);
        setEndeDes(ed);
        setCidaDes(cd);
        setEstaDes(esd);
        setCepDes(cepd);

        setNomeRem(nr);
        setEndeRem(er);
        setCidaRem(cr);
        setEstaRem(esr);
        setCepRem(cepr);

        setPeso(p);
        setPrecoKg(pk);
    }
}

void Pacote::setNomeDes(string nomeDes) { this->nomeDes = nomeDes; } 
string Pacote::getNomeDes() { return this->nomeDes; }
void Pacote::setEndeDes(string endeDes) { this->endeDes = endeDes; } 
string Pacote::getEndeDes() { return this->endeDes; }
void Pacote::setCidaDes(string cidaDes) { this->cidaDes = cidaDes; } 
string Pacote::getCidaDes() { return this->cidaDes; }
void Pacote::setEstaDes(string estaDes) { this->estaDes = estaDes; } 
string Pacote::getEstaDes() { return this->estaDes; }
void Pacote::setCepDes(string cepDes) { this->cepDes = cepDes; } 
string Pacote::getCepDes() { return this->cepDes; }
void Pacote::setNomeRem(string nomeRem) { this->nomeRem = nomeRem; } 
string Pacote::getNomeRem() { return this->nomeRem; }
void Pacote::setEndeRem(string endeRem) { this->endeRem = endeRem; } 
string Pacote::getEndeRem() { return this->endeRem; }
void Pacote::setCidaRem(string cidaRem) { this->cidaRem = cidaRem; } 
string Pacote::getCidaRem() { return this->cidaRem; }
void Pacote::setEstaRem(string estaRem) { this->estaRem = estaRem; } 
string Pacote::getEstaRem() { return this->estaRem; }
void Pacote::setCepRem(string cepRem) { this->cepRem = cepRem; } 
string Pacote::getCepRem() { return this->cepRem; }

void Pacote::setPeso(float p){peso = p;}
void Pacote::setPrecoKg(float pk){precoKg = pk;}

float Pacote::calculaCusto(float peso,float precoKg){return peso*precoKg;}