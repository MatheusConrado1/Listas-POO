#include "Aluno.h"
#include <iostream>
#include <string>
using namespace std;

Aluno::Aluno(string nome, string semestre, string grau){
    setnome(nome);
    setsemestre(semestre);
    setgrau(grau);
}

string Aluno::getnome(){ return nome; }

string Aluno::getsemestre(){ return semestre; }

string Aluno::getgrau(){ return grau; }


void Aluno::setnome(string nome){ this->nome = nome; }

void Aluno::setsemestre(string semestre){ this->semestre = semestre; }

void Aluno::setgrau(string grau){ this->grau = grau; }