#include "Dugum.h"

Dugum::Dugum(int deger, Dugum* ptr) {
    veri = deger;
    sonraki = ptr;
}

int Dugum::AlVeri() {
    return this->veri;
}

Dugum * Dugum::GetSonraki() {
    return sonraki;
}

void Dugum::SetSonraki(Dugum* ptrGelen) {
    sonraki = ptrGelen;
}