#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;

    ptr = (int*) malloc(3 * sizeof(int)); 
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
   
    for (i = 1; i <= 3; i++) {
        ptr[i] = i * 10;
    }
    printf("\nAllocated Memory Values: ");
    for (i = 1; i <= 3; i++) {
        printf("%d ", ptr[i]);
    }

    // Resize memory to hold 5 integers
    ptr = (int*) realloc(ptr, 5 * sizeof(int));//ptr = (type*) realloc(ptr, new_size);

    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Assign values to new locations
    ptr[4] = 40;
    ptr[5] = 50;

    printf("\nReallocated Memory Values: ");
    for (i = 1; i <= 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}

