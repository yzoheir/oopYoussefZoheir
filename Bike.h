#include <iostream>
#include <string>
#include "Bike.h"

using namespace std;

Asset::Bike(){
    product = " ";
    value = 0;
}
Asset::Bike(int number, std::string product_type){
    value = number;
    product = product_type;
}     
string Asset::get_product_type(){
    return product;
}
int Asset::get_value(){
    return value;
}               // returns the the value of asset
Asset::~Bike(){
    product = " ";
    value = 0;
}                        
