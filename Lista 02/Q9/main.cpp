#include "NumeroRacional.h"
#include <iostream>
using namespace std;

int main(){
    NumeroRacional a(12,2);
    a.print();
    cout << "================================================" << endl;
    NumeroRacional b(12,5);
    b.print();
    cout << "================================================" << endl;
    NumeroRacional c(a+b);
    c.print();
    cout << "================================================" << endl;
    NumeroRacional d(a-b);
    d.print();
    cout << "================================================" << endl;
    NumeroRacional e(a*b);
    e.print();
    cout << "================================================" << endl;
    NumeroRacional f(a/b);
    f.print();
}