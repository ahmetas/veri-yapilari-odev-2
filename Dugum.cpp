#include "Dugum.h"

Dugum::Dugum(int deger, Dugum* ptr) {
    veri = deger;
    sonraki = ptr;
}

int Dugum::GetVeri() {
    return veri;
}

Dugum * Dugum::GetSonraki() {
    return sonraki;
}

void Dugum::SetSonraki(Dugum* ptrGelen) {
    sonraki = ptrGelen;
}