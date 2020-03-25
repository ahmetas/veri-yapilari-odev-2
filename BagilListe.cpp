#include "BagilListe.h"

BagilListe::BagilListe(){
    baslangic = nullptr;
}

ostream &operator<<(ostream &os, const BagilListe &liste) {
    Dugum* gezici = liste.baslangic;
    for(int i = 0; i < liste.boyut; i++) {
        os << gezici->AlVeri();
        gezici = gezici->GetSonraki();
    }
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

BagilListe::~BagilListe() {
    delete baslangic;
}
