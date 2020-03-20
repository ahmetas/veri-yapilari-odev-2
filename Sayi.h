#ifndef VERIYAPILARIODEV2_SAYI_H
#define VERIYAPILARIODEV2_SAYI_H

#include <iostream>
#include "BagilListe.h"

using namespace std;

class Sayi {
private:
    BagilListe* liste;
    string deger;
public:
    Sayi();
    ~Sayi();
    void SetDeger(string);
    BagilListe* GetListe();
    string GetDeger();
    static void SayilariAyir(Sayi*);
};

#endif //VERIYAPILARIODEV2_SAYI_H
