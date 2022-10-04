#include "superheroi.h"
#include <iostream>
using namespace std;

int main(){
    SuperHeroi *superman = new SuperHeroi("Clark","masculino","ingles","branco",21,"",0,1,0,"Super-Homem",1,1);

    superman->print();
}