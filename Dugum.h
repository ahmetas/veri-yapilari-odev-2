#ifndef VERIYAPILARIODEV2_DUGUM_H
#define VERIYAPILARIODEV2_DUGUM_H

class Dugum {
private:
    int veri;
    Dugum* sonraki;
public:
    int GetVeri();
    void SetVeri(int);
    Dugum* GetSonraki();
};

#endif //VERIYAPILARIODEV2_DUGUM_H
