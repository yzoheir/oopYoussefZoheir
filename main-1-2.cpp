#include <iostream>
#include <string>
#include "Bike_yard.h"
#include "Bike.h"
using namespace std;

int main(void){

Bike_yard p1(4);
Bike a1(1,"Designer Bikes");
Bike a2(2,"Unknown Brands");
Bike a3(3,"Mistsubishi");
Bike a4(4,"Giant");

cout<<"Add the Bike to Bike Yard"<<endl;
cout<<p1.add_Bike(a1)<<endl;
cout<<p1.add_Bike(a2)<<endl;
cout<<p1.add_Bike(a3)<<endl;
cout<<p1.add_Bike(a4)<<endl;
cout<<endl;

cout<<"Finding Bike in the Bike Yard"<<endl;
cout<<p1.has_Bike("Giant")<<endl;
cout<<p1.has_Bike("Mitsubishi")<<endl;
cout<<p1.has_Bike("Designer Bike")<<endl;
cout<<endl;

cout<<"Number of assets in asset portfolio"<<endl;
cout<<p1.get_stock_quantity()<<endl;
cout<<endl;

cout<<"Getting the pointer to the bikes"<<endl;
cout<<p1.get_Bike()<<endl;
cout<<endl;

cout<<"Removing Bike Pointer"<<endl;
p1.~Bike_yard();

return 0;
}