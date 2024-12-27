#ifndef SERVICE_H
#define  SERVICE_H
#include <iostream>
using namespace std;

class service {
    private:
        float price;
    public:
        service(string gender_a="", float price_a=0);
        string seeGender()const;
        float seePrice()const;

        void updatePrice(float p);
};

#endif