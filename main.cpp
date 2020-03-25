#include <iostream>
#include "Sayi.h"
#include "Islem.h"

using namespace std;

int main() {
    int adet;
    cout << "Toplanacak sayi adedini giriniz:";
    cin >> adet;
    string sayilar[adet];
    for (int i = 0; i < adet; ++i) {
        cout << i + 1 << ". Sayiyi giriniz:";
        cin >> sayilar[i];
    }

    BagilListe** listeler = new BagilListe*[adet];
    for (int j = 0; j < adet; ++j) {
        listeler[j] = new BagilListe();
        Islem::SayiListeOlustur(sayilar[j], listeler[j]);
    }
    cout << *listeler[0];

    delete []listeler;
    for (int k = 0; k < adet; ++k) {
        delete listeler[k];
    }
    return 0;
}