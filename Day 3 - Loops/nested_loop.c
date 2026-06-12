#include <stdio.h>

int main() {
	int i, j;
    for (i = 1; i <= 3; i++) {  // Outer loop
        for (j = 1; j <= 3; j++) {  // Inner loop
            printf("i=%d, j=%d \t", i,j);
        }
        printf("\n");
    }
    return 0;
}

/*
1 | 2 | 3
1 | 2 | 3
1 | 2 | 3
*/
