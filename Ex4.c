#include <stdio.h>

int main(){
    int array[] = {20, 5, 7, 3, 2, 10};


    // Printing original array
    int i;
    printf("Original Array: ");
    for(i=0;i<6;i++){
        printf("%d ", array[i]);
    
    }
     int sumSquares = 0;
    for (int i = 0; i < 6; ++i) {
        sumSquares += array[i] * array[i];
    }
    // Display the result
    printf("Sum of Squares: %d\n", sumSquares);

    return 0;
}