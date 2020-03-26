#include <iostream>
#include "Sayi.h"
#include "Islem.h"

using namespace std;

int main() {
    int adet;
    cout << "Toplanacak sayi adedini giriniz:";
    cin >> adet;
    string girdiler[adet];
    for (int i = 0; i < adet; ++i) {
        cout << i + 1 << ". Sayiyi giriniz:";
        cin >> girdiler[i];
    }

    BagilListe** listeler = new BagilListe*[adet];
    for (int j = 0; j < adet; ++j) {
        listeler[j] = new BagilListe();
        Islem::SayiListeOlustur(girdiler[j], listeler[j]);
    }

    Sayi** sayilar = new Sayi*[adet];
    for (int i = 0; i < adet; ++i) {
        sayilar[i] = new Sayi(listeler[i]);
        if (i > 0)
            *sayilar[0] += *sayilar[i];
    }
    cout << *sayilar[0];

    for (int k = 0; k < adet; ++k) {
        delete listeler[k];
    }
    delete []listeler;
    return 0;
}