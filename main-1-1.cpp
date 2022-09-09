#include <iostream>
#include <string>
#include "Bike.h"
using namespace std;

int main(void){

Bike a1(5,"Mountain Bike");

cout<<a1.get_product_type()<<endl;
cout<<a1.get_value()<<endl;


return 0;
}