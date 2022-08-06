#include <iostream>
#include <stdio.h>

int main(){

extern int sum_diagonal(int array[4][4]);

int array[4][4] = {{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4}};

int answer = sum_diagonal(array);

std::cout << "Diagonal : " << answer << std::endl;}