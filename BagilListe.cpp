#include "BagilListe.h"
#include <iostream>

using namespace std;

BagilListe::BagilListe(){
    baslangic = nullptr;
}

int BagilListe::AlBoyut() {
    return boyut;
}

void BagilListe::DugumEkle(int rakam) {
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

void BagilListe::ListeYazdir() {
    for (int i = 0; i < boyut; ++i) {
        cout << baslangic->GetVeri() << " ";
        baslangic = baslangic->GetSonraki();
    }
}

BagilListe::~BagilListe() {
    delete baslangic;
}