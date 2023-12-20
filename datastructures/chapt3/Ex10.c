#include <stdio.h>
int main(){
       int array[7][5] = {{0,1,2,3,4},
                        {5,6,7,8,9},
                        {-9,-8,-7,-6,-5},
                        {-4,0,-2,-1,0},
                        {0,0,1,2,3},
                        {4,0,0,0,6},
                        {0,0,451,0,0}};

                    int i,j;
    int counter = 0;
// sees how many is not zero and adds one to the count
    for(i=0;i < 7; i++){
        for(j=0; j < 5; j++){
            if (array[i][j] != 0)
            {
                counter++;
            }
            
        }
    }
    printf("Non zeros in the array: %d\n", counter);
}