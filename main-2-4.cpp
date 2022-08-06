#include <iostream>

extern int sum_min_max(int integers[], int length);
int main() {
    int integers[5] = {4,5,6,7,1};
    int length = 5;
    std::cout << "The sum is: " << sum_min_max(integers, length) << std::endl;
    return 0;
}