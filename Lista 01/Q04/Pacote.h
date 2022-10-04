#ifndef PACOTE_H
#define PACOTE_H
#include <iostream>
using namespace std;

class Pacote{
protected:
    string nomeDes;
    string endeDes;
    string cidaDes;
    string estaDes;
    string cepDes;

    string nomeRem;
    string endeRem;
    string cidaRem;
    string estaRem;
    string cepRem;

    float peso;
    float precoKg;

public:
    Pacote() = default;
    Pacote(string nd,string ed,string cd,string esd,string cepd,string nr,string er,string cr,string esr,string cepr,float p, float pk);

    void setNomeDes(string nomeDes);
    string getNomeDes();
    void setEndeDes(string endeDes);
    string getEndeDes();
    void setCidaDes(string cidaDes);
    string getCidaDes();
    void setEstaDes(string estaDes);
    string getEstaDes();
    void setCepDes(string cepDes);
    string getCepDes();
    void setNomeRem(string nomeRem);
    string getNomeRem();
    void setEndeRem(string endeRem);
    string getEndeRem();
    void setCidaRem(string cidaRem);
    string getCidaRem();
    void setEstaRem(string estaRem);
    string getEstaRem();
    void setCepRem(string cepRem);
    string getCepRem();


    void setPeso(float p);
    float getPeso();
    void setPrecoKg(float pk);
    float getPreco;

    float calculaCusto(float peso,float precoKg);

};
#endif