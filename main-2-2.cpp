#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
extern int binary_to_number(int array[30],int number_of_digits);
int main (){
    int number_of_digits = 30;
int array[30] ={1111};
int answer =  binary_to_number(array,number_of_digits);
std::cout <<""<<  answer << std::endl ;

}
