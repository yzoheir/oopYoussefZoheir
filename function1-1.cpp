#include <iostream>

using namespace std;
#include <string>

void print_matrix(int array[10][10]){
  for (int row = 0; row<10; row++ ){
    for (int col = 0; col<9; col++){
      std::cout << array[row][col] << " ";
    }
    cout << array[row][9] << std::end1;
  }
}
