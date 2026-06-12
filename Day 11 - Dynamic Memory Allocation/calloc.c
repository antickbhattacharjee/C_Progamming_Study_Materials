#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr, i;
    // Allocate memory for 5 integers and initialize to 0
    ptr = (int*) calloc(5, sizeof(int)); // ptr = (type*) calloc(number of input, size of type);
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Allocated Memory Values: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    for (i = 1; i <= 5; i++) {
        ptr[i] = (i*10);
    }
    printf("\nAllocated Memory Values: ");
    for (i = 1; i <= 5; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}