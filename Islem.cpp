#include "Islem.h"

void Islem::SayiListeOlustur(string sayi, BagilListe* liste) {
    int adet = sayi.size();
    for (int i = 0; i < adet; ++i) {
        liste->DugumEkle(sayi.at(i) - '0');
    }
}