#include <stdio.h>

int main(){
    int array[] = {20, 5, 7, 8, 4, 10};

    int i;
    int sum = 0;
    int arraySize = sizeof(array) / sizeof(array[0]);

    for(i=0;i<arraySize;i++){
        sum += array[i];
    }

    printf("Sum of array: %d\n", sum);
    printf("Mean of array: %d", sum / arraySize);
}
