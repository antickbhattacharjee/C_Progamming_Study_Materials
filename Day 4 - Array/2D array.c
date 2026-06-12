#include <stdio.h>

int main() {
    int matrix[2][3] = {
    	{1, 2, 3},
        {4, 5, 6}
    };
    
    // Accessing elements:
    printf("Element at row 1, col 2: %d\n", matrix[0][1]);  // Outputs 2
    printf("Element at row 2, col 3: %d\n", matrix[1][2]);  // Outputs 6
    
    return 0;
}

