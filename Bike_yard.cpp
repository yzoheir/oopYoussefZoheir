#include <iostream>
#include "Bike.h"
#include "Bike_yard.h"
#include <string>

using namespace std;

Bike_yard::Bike_yard(){
    size_bikeyard = 0;
    num_Bike = 0;
    Bike = new Bike[size_bikeyard];
}

Bike_yard::Bike_yard(int range){
    size_bikeyard = range;
    num_Bike = 0;
    Bike = new Bike[size_bikeyard];
}

int Bike_yard::get_stock_quantity(){
    return num_assets;
}

 bool Bike_yard::has_Bike(std::string product){
    for(int i = 0; i <num_Bike; i++){
        if(Bike[i].get_Bike()==product){
            return true;
        }
    }return false;
 }

Bike* Bike_yard::get_Bike(){
    return assets;
} 

bool Bike_yard::add_Bike(Bike new_Bike){
    if(new_Bike>=size_bikeyard){
        return false;
    }else{
        *(Bike+num_Bike) = new_Bike;
        num_Bike++;
        return true;
    }
}
Bike_yard::~Bike_yard(){
    delete[] Bike;
}