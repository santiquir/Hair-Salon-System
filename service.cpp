#include <iostream>
#include "service.h"
using namespace std;

service::service(string gender_a, float price_a){
    gender = gender_a;
    price = price_a;
}

string service::seeGender() const{return gender;}
float service::seePrice()const {return price;}
void service::updatePrice(float p){price = p;}
