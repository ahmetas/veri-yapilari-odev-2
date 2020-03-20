#include "BagilListe.h"

BagilListe::BagilListe() {
    dugum = new Dugum();
}

Dugum * BagilListe::GetDugum() {
    return dugum;
}

BagilListe::~BagilListe() {
    delete dugum;
}