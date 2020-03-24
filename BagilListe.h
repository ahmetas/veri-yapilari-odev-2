#ifndef VERIYAPILARIODEV2_BAGILLISTE_H
#define VERIYAPILARIODEV2_BAGILLISTE_H

#include "Dugum.h"
#include <iostream>

using namespace std;

class BagilListe {
private:
    Dugum* baslangic;
    int boyut = 0;
public:
    friend ostream&operator<<(ostream& os, const BagilListe& liste);
    BagilListe();
    int AlBoyut();
    void Ekle(int);
    void ListeYazdir(BagilListe* liste);
    ~BagilListe();
};

#endif //VERIYAPILARIODEV2_BAGILLISTE_H
