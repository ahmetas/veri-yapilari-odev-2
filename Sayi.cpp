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

string Sayi::GetDeger() {
    return deger;
}

void Sayi::SayilariAl(Sayi* ptr) {
    cout << "1. Sayiyi giriniz:";
    cin >> ptr[0].deger;
    cout << "2. Sayiyi giriniz:";
    cin >> ptr[1].deger;
}