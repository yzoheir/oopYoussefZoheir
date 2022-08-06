#include <iostream>
using namespace std;


int sum_diagonal(int array[4][4])

{

int runningSum = 0;

    for(int i = 0; i<4; i++){

        for(int j=0; j<4; j++){
            if (i==j){
                runningSum = runningSum + array[i][j];}
                }
                }
return runningSum;
}