#include "Islem.h"

BagilListe* Islem::SayiListeOlustur(string sayi, BagilListe* liste) {
    int adet = sayi.size();
    for (int i = 0; i < adet; ++i) {
        liste->Ekle(sayi.at(i) - '0');
    }
    return liste;
}