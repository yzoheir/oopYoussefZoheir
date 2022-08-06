#include <stdlib.h>

#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
  int number = stoi(decimal_number);
  if (number < 1) {
    cout << "Number should have atleast 1 and max of 9 digits" << endl;
    exit(0);
  }
  for (int i = 31; i >= 0; i--) {
    cout << ((number >> i) & 1);
  }
  std::cout <<"\n"<< std::endl;
}