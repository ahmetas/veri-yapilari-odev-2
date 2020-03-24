#ifndef VERIYAPILARIODEV2_BAGILLISTE_H
#define VERIYAPILARIODEV2_BAGILLISTE_H

#include "Dugum.h"

class BagilListe {
private:
    Dugum* baslangic;
    int boyut = 0;
public:
    BagilListe();
    int AlBoyut();
    void DugumEkle(int);
    void ListeYazdir();
    ~BagilListe();
};

#endif //VERIYAPILARIODEV2_BAGILLISTE_H
