#ifndef VERIYAPILARIODEV2_SAYITOPLAYICI_H
#define VERIYAPILARIODEV2_SAYITOPLAYICI_H

#include "Sayi.h"

class SayiToplayici {
private:
    Sayi* sayi;
public:
    explicit SayiToplayici(Sayi&);
    Sayi& Ekle(Sayi&);
};

#endif //VERIYAPILARIODEV2_SAYITOPLAYICI_H
