#include "SayiToplayici.h"
#include "Islem.h"

SayiToplayici::SayiToplayici(Sayi& sayi){
    this->sayi = &sayi;
}

Sayi& SayiToplayici::Ekle(Sayi& sayiEklenen) {
    BagilListe* liste1 = sayi->liste;
    BagilListe* liste2 = sayiEklenen.liste;

    int liste1Boyut = liste1->AlBoyut();
    int liste2Boyut = liste2->AlBoyut();
    int fark = abs(liste1Boyut - liste2Boyut);

    if (liste1Boyut < liste2Boyut){
        BagilListe* gecici = liste2;
        liste2 = liste1;
        liste1 = gecici;

        liste1Boyut = liste1->AlBoyut();
    }

    string sayilarToplami(liste1Boyut, ' ');

    bool eldeVar = false;
    for (int i = liste1Boyut - 1; i > fark - 1; --i) {
        int toplam = liste1->AlVeri(i) + liste2->AlVeri(i - fark);
        if (eldeVar){
            toplam++;
        }
        eldeVar = toplam > 9;
        sayilarToplami.at(i) = toplam % 10 + '0';
    }

    for (int j = fark - 1; j >= 0; --j) {
        int rakam = liste1->AlVeri(j);
        if (eldeVar){
            rakam++;
        }
        eldeVar = rakam > 9;
        sayilarToplami.at(j) = rakam % 10 + '0';
    }

    if (eldeVar) {
        sayilarToplami.insert(0, "1");
    }

    sayi->liste->Temizle();
    sayi->liste = Islem::SayiListeOlustur(sayilarToplami, sayi->liste);
    return *sayi;
}