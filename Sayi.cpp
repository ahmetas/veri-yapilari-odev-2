#include "Sayi.h"

Sayi::Sayi(){
    liste = new BagilListe();
}

Sayi::~Sayi() {
    delete liste;
}

BagilListe * Sayi::GetListe() {
    return liste;
}

void Sayi::SetDeger(string gelenDeger) {
    deger = gelenDeger;
}

string Sayi::GetDeger() {
    return deger;
}

void Sayi::SayilariAyir(Sayi* ptr) {

}