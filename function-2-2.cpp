#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits)
{
int number = 0;
for(int i=0; i<number_of_digits; i++)
{
number = number + binary_digits[i] * pow(2,(number_of_digits-1)-i);
}
return number;
}
