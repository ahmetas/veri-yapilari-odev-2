#include <iostream>
#include "Sayi.h"

using namespace std;

int main() {
    Sayi* ptrSayi = new Sayi[2];
    Sayi::SayilariAl(ptrSayi);

    delete []ptrSayi;
    return 0;
}