#ifndef VERIYAPILARIODEV2_SAYI_H
#define VERIYAPILARIODEV2_SAYI_H

#include <iostream>
#include "BagilListe.h"

using namespace std;

class Sayi {
private:
    BagilListe* liste;
public:
    BagilListe* toplam = nullptr;
public:
    Sayi(BagilListe*);
    ~Sayi();
};

#endif //VERIYAPILARIODEV2_SAYI_H
