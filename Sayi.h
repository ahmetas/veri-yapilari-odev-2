#ifndef VERIYAPILARIODEV2_SAYI_H
#define VERIYAPILARIODEV2_SAYI_H

#include <iostream>
#include "BagilListe.h"

using namespace std;

class Sayi {
private:
    Sayi* ptrSayi;
    BagilListe* liste;
    string deger;
public:
    Sayi();
    static void SayilariAl(Sayi*);
};

#endif //VERIYAPILARIODEV2_SAYI_H
