#include "functions.h"
#include <iostream>
#include <fstream>
using namespace std;
vector<service> readBin(string name){
    fstream file(name, ios::binary|ios::in|ios::out);
    if (!file.is_open()) throw runtime_error("Error");


}