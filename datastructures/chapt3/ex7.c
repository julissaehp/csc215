int main() 

  {
    int i, j, m = 3, n = 3, a = 0, sum = 0; 
    
    // input matrix 
    int matrix[3][3] 
        = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; 
    
    if (m == n) { 
        
        // matrix 
        printf("The matrix is \n"); 
        
        // how many rows 
        for (i = 0; i < m; ++i) { 
            
            // shows colums and iterations 
            for (j = 0; j < n; ++j) { 
                printf(" %d", matrix[i][j]); 
            } 
            printf("\n"); 
        } 
        for (i = 0; i < m; ++i) { 
            
            // calculating the diagonal sum
            sum = sum + matrix[i][i]; 
            
        } 
        
        // printing the result 
        printf("\nSum of the diagonal values are = %d\n", sum); 

    return 0;
    }
  } 
