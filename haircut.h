#ifndef HAIRCUT_H
#define  HAIRCUT_H
#include <iostream>
using namespace std;

class haircut {
    private:
        string gender; float price;
    public:
        haircut(string gender_a="", float price_a=0);
        string seeGender()const;
        float seePrice()const;

        void updatePrice(float p);
};

#endif