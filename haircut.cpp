#include <iostream>
#include "haircut.h"
using namespace std;

haircut::haircut(string gender_a, float price_a){
    gender = gender_a;
    price = price_a;
}

string haircut::seeGender() const{return gender;}
float haircut::seePrice()const {return price;}
void haircut::updatePrice(float p){price = p;}
