#include <stdio.h>

int main(){
    int M[3][3] = {{7,10,3},
                        {1,8,4},
                        {5,2,6}};
    
    int P [3][3] = {{1,2,4},
                        {6,3,7},
                        {12,11,9}};

    int third [3][3] = {0};

    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            third[i][j] = M[i][j] + P[i][j];
        }
    }
    
    // Print matrix M
    printf("Matrix M:" );
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d ", M[i][j]);
        }
    }
    printf("\n\n");
        // print matrix P
    printf("Matrix P:" );
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d ", P[i][j]);
        }
    }
    printf("\n\n");
        // print matrix 3 which is the sum of M&P
    printf("Matrix Final Sum:" );
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d ", third[i][j]);
        }
    }
    printf("\n\n");
}