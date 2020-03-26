#ifndef VERIYAPILARIODEV2_SAYI_H
#define VERIYAPILARIODEV2_SAYI_H

#include <iostream>
#include "BagilListe.h"

using namespace std;

class Sayi {
private:
    friend class SayiToplayici;
    BagilListe* liste;
public:
    friend ostream&operator<<(ostream& os, const Sayi& sayi);
    friend BagilListe operator+(BagilListe& liste1, BagilListe& liste2);
    friend Sayi&operator+=(Sayi& sayi1, Sayi& sayi2);
    explicit Sayi(BagilListe*);
    ~Sayi();
};

#endif //VERIYAPILARIODEV2_SAYI_H
