#include <stdio.h>

#include <iostream>
extern int count_digits(int array[4][4]);
int main() {
  int array[4][4] = {
      {0, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 1 }, {0, 0, 0, 1}};

  int answer = count_digits(array);
 
   // std::cout << "" <<answer<< std::endl;
  }
