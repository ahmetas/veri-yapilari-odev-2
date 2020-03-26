#include "BagilListe.h"

BagilListe::BagilListe() {
    baslangic = nullptr;
}

int BagilListe::AlBoyut() {
    return boyut;
}

int BagilListe::AlVeri(int indeks) {
    Dugum *gezici = baslangic;
    for (int i = 0; i < indeks; ++i) {
        gezici = gezici->GetSonraki();
    }
    return gezici->AlVeri();
}

void BagilListe::Ekle(int rakam) {
    Dugum *gezici = baslangic;
    for (int i = 0; i < boyut - 1; i++) {
        gezici = gezici->GetSonraki();
    }

    if (gezici == nullptr) {
        baslangic = new Dugum(rakam);
    } else {
        gezici->SetSonraki(new Dugum(rakam));
    }

    boyut++;
}

void BagilListe::Temizle() {
    for (int i = 0; i < boyut; ++i) {
        Dugum *gecici = baslangic->GetSonraki();
        delete baslangic;
        baslangic = gecici;
    }
    boyut = 0;
}

BagilListe::~BagilListe() {
    Temizle();
}
