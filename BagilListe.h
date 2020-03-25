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
    friend ostream&operator<<(ostream& os, const BagilListe& liste);
    BagilListe();
    int AlBoyut();
    void Ekle(int);
    ~BagilListe();
};

#endif //VERIYAPILARIODEV2_BAGILLISTE_H
