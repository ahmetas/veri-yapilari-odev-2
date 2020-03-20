#ifndef VERIYAPILARIODEV2_BAGILLISTE_H
#define VERIYAPILARIODEV2_BAGILLISTE_H

#include "Dugum.h"

class BagilListe {
private:
    Dugum* dugum;
public:
    Dugum* GetDugum();
    BagilListe();
    ~BagilListe();
};

#endif //VERIYAPILARIODEV2_BAGILLISTE_H
