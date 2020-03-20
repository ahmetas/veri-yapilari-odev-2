#include <iostream>
#include "Sayi.h"

using namespace std;

int sayiAdedi;

void SayilariAl(Sayi* ptr) {
    auto* sayilar = new string[sayiAdedi];

    for (int i = 0; i < sayiAdedi; ++i) {
        cout << i + 1 << ". Sayiyi giriniz:";
        cin >> sayilar[i];
        ptr[i].SetDeger(sayilar[i]);
    }
    delete []sayilar;
}

int main() {
    cout << "Toplanacak sayi adedi giriniz:";
    cin >> sayiAdedi;

    Sayi* ptrSayi = new Sayi[sayiAdedi];
    SayilariAl(ptrSayi);
    Sayi::SayilariAyir(ptrSayi);

    delete []ptrSayi;
    return 0;
}