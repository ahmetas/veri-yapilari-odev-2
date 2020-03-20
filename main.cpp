#include <iostream>
#include "Sayi.h"
#include "Islem.h"

using namespace std;

int main() {
    Sayi* ptrSayi = new Sayi[2];
    Sayi::SayilariAl(ptrSayi);
    Islem::SayilariAyir(ptrSayi);

    delete []ptrSayi;
    return 0;
}