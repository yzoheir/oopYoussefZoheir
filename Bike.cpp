#include <iostream>
#include <vector>
#ifndef Bike.h
#define Bike.h

using namespace std;

class Bike{
    private:
    string product;
    int value;

    public:
    Bike();                             
    
    Bike(int value, std::string product_type);   
    
    std::string get_product_type();    
    
    int get_value();                   
    
    ~Bike();                          
};
#endif