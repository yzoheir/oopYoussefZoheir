#include <iostream>
#include <string>
#include "bike.h"
#ifndef Bike.h
#define Bike.h
using namespace std;

class Bike_yard{
    private:
    int size_bikeyard;
    int num_Bike;
    Bike* bike;
    
    public:
    BikeStock();          

    BikeStock(int range);   

    int get_stock_quantity(); 
    
    bool has_Bike(std::string product); 

    Asset *get_Bike();       
    
    bool add_Stock(Asset new_asset);
    
    ~Bike_yard();  

};
#endif