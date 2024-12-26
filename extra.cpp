#include "extra.h";
#include <iostream>
using namespace std;

extra::extra(string name_a, float price_a){
    name = name_a;
    price = price_a;
}

string extra::seeName()const {return name;}
float extra::seePrice()const {return price;}
void extra::updatePrice(float p){price = p;}