#include "Sayi.h"
#include "Islem.h"
#include "SayiToplayici.h"

Sayi::Sayi(BagilListe* liste){
    this->liste = liste;
}

ostream &operator<<(ostream &os, const Sayi &sayi) {
    for(int i = 0; i < sayi.liste->AlBoyut(); i++) {
        os << sayi.liste->AlVeri(i);
    }
    return os;
}

Sayi& operator+=(Sayi& sayi1, Sayi& sayi2){
    SayiToplayici toplayici(sayi1);
    return toplayici.Ekle(sayi2);
}

BagilListe operator+(BagilListe &liste1, BagilListe &liste2) {
    int liste1Boyut = liste1.AlBoyut();
    int liste2Boyut = liste2.AlBoyut();
    int fark = abs(liste1.AlBoyut() - liste2.AlBoyut());
    BagilListe gecici;

    if (liste1Boyut < liste2Boyut){
        gecici = liste1;
        liste1 = liste2;
        liste2 = gecici;
    }

    string sayilarToplami(liste1Boyut, ' ');

    for (int i = liste1Boyut; i > 0; --i) {
        sayilarToplami.at(i) = liste1.AlVeri(i) + liste2.AlVeri(i - fark);
    }

    BagilListe* toplamListe = new BagilListe();
    Islem::SayiListeOlustur(sayilarToplami, toplamListe);

    return *toplamListe;
}

Sayi::~Sayi() {
}