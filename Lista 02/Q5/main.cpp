#include "Data.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    int option = 0;
    cout << "1 para forma numerica, 2 para escrita" << endl;
    cin >> option;

    if(option == 1){
        int dia = 0, mes = 0, ano = 0;
        cout << "Digite o dia, a data e o ano: ";
        cin >> dia >> mes >> ano;

        Data *a = new Data(dia,mes,ano);

        a->print();
        a->Calc(dia,mes);

    }else if(option == 2){
        int dia = 0, ano = 0;
        string m;
        cout << "Digite o dia, a data e o ano: ";
        
        cin >> dia;
        cin.ignore();
        cin >> m;
        cin.ignore();
        cin >> ano;

        Data *test2 = new Data(dia,m,ano);
        test2->print();
        test2->Calc(dia,m);
    }
}