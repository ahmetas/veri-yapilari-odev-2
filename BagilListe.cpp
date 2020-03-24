#include "BagilListe.h"

BagilListe::BagilListe(){
    baslangic = nullptr;
}

ostream &operator<<(ostream &os, const BagilListe &liste) {
    os << liste.baslangic->GetVeri();
    return os;
}

int BagilListe::AlBoyut() {
    return boyut;
}

void BagilListe::Ekle(int rakam) {
    if(baslangic == nullptr){
        baslangic = new Dugum(rakam);
        boyut++;
        return;
    }

    Dugum* gezici = baslangic;
    for(int i = 0; i < boyut - 1; i++)
        gezici = gezici->GetSonraki();

    gezici->SetSonraki(new Dugum(rakam));
    boyut++;
}

void BagilListe::ListeYazdir(BagilListe* liste) {
    for (int i = 0; i < boyut; ++i) {
        cout << *liste << " ";
        baslangic = baslangic->GetSonraki();
    }
}

BagilListe::~BagilListe() {
    delete baslangic;
}
