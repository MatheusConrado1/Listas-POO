#include <iostream>
#include "Estacionamento.h"
using namespace std;

float Calc(int x){
    return x*1.5;
}

int main(){
    for(int i = 0; i < 5;i++){
        Estacionamento a("AAA-0000","Corolla",7,23,15);
        Tempo b(12,30,15);

        int x = b.getHora() - a.getHora();
        
        a.print();
        cout << "Hora de saida: ";
        b.print();
        cout << endl << "Preco: " << Calc(x) << endl;
    }
}