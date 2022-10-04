#include "Aluno.h"
#include <iostream>
#include <string>
using namespace std;

int contaID(){
    static int cont = 1;
    return cont++;
}

int main(){
     
    for(int i = 0; i < 15; i++){
        cout << "Digite o nome: ";
        string nome = " ";
        cin >> nome;
        cout << "Digite o semestre: ";
        string semestre = " ";
        cin >> semestre;
        cout << "Digite o grau: ";
        string grau = " ";
        cin >> grau;


        Aluno novo(nome,semestre,grau);
        if(i+1 < 15){
            cout << "Aluno: " << novo.getnome() << "\nSemestre:" << novo.getsemestre() << "\nGrau:" << novo.getgrau() << "\nID: " << contaID() << endl;
        }else{
            cout << "Aluno: " << novo.getnome() << "\nSemestre:" << novo.getsemestre() << "\nGrau:" << novo.getgrau() << "\nID: " << contaID() << endl;;
        }

    }
}