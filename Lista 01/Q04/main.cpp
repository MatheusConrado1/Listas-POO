#include "PacoteDoisDias.h"
#include "PacoteOverNight.h"
#include <iostream>
using namespace std;

int main(){
    Pacote test("","","","","","","","","","",200,45);
    cout << test.calculaCusto(200,45) << endl;
    cout << "=====================================================" << endl;

    PacoteOverNight test1("","","","","","","","","","",253,1123,1345);
    cout << test1.calculaNovoCusto(253,1123,1345) << endl;
    cout << "=====================================================" << endl;

    PacoteDoisDias test2("","","","","","","","","","",20,15,700);
    cout << test2.calculaNovoCusto(20,10,700) << endl;
}