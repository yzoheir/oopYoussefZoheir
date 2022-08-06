#include <stdio.h>

#include <iostream>
extern int is_identity(int array[10][10]);
int main() {
  int array[10][10] = {
      {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  };

  int answer = is_identity(array);
  if (answer == 1)

  {
    std::cout << "This is an Identity Matrix" << std::endl;

  }

  else

  {
    std::cout << "This is not an Identity Matrix" << std::endl;
  }
}