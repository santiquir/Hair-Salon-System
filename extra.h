#ifndef EXTRA_H;
#define EXTRA_H;
#include <iostream>
using namespace std;

class extra{
    private:
        string name; float price;
    public:
        extra(string name_a="",float price_a=0);
        string seeName()const;
        float seePrice()const; 

        void updatePrice(float p);
};
#endif