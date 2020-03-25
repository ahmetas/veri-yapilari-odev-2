#ifndef VERIYAPILARIODEV2_DUGUM_H
#define VERIYAPILARIODEV2_DUGUM_H

class Dugum {
private:
    int veri;
    Dugum* sonraki;
public:
    Dugum(int, Dugum* = nullptr);
    void SetVeri(int);
    int AlVeri();
    Dugum* GetSonraki();
    void SetSonraki(Dugum*);
};

#endif //VERIYAPILARIODEV2_DUGUM_H
