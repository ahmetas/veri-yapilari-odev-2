#ifndef VERIYAPILARIODEV2_BAGILLISTE_H
#define VERIYAPILARIODEV2_BAGILLISTE_H

#include "Dugum.h"
#include <iostream>

using namespace std;

class BagilListe {
private:
    int boyut = 0;
    Dugum* baslangic;
public:
    BagilListe();
    int AlBoyut();
    int AlVeri(int);
    void Ekle(int);
    void Temizle();
    ~BagilListe();
};

#endif //VERIYAPILARIODEV2_BAGILLISTE_H
