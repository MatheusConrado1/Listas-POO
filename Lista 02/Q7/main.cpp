#include "Tempo.h"
#include <iostream>
using namespace std;

int main(){
    Tempo a(8,23,12);
    a.print();

    Tempo b(2,25,33);
    b.print();

    Tempo c(a+b);
    c.print();

    Tempo d(c-b);
    d.print();

}