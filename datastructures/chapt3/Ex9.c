#include <stdio.h>
int main(){
    int matrix[4][4] = {{1,3,7,5},
                        {2,8,3,9},
                        {6,2,1,4},
                        {3,6,2,8}};
                        
    
            int sum = 0;

    int i,j;
    int arraySize = sizeof(matrix) / sizeof(matrix[0]);
    int product = 1;

    for(i=0,j=1;i<arraySize && j<arraySize;i++,j++){
        product *= matrix[i][j];
    }
    printf("prodocut of upper diagonal: %d\n", product);
}