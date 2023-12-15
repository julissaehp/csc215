#include <stdio.h>

int main() {
    // Example array of integers
    int array[] = {20, 5, 7, 3, 2, 1};

    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Interchange the second element with the second last element
    if (size >= 2) {
        int temp = array[1];
        array[1] = array[size - 2];
        array[size - 2] = temp;
    }

    // Display the modified array
    printf("Modified Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
