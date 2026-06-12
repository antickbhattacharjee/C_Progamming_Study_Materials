#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr, i;
    ptr = (int*) malloc(5 * sizeof(int)); //ptr = (type*) malloc(size);
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
	printf("Allocated Memory Values: ");
    for (i = 1; i <= 5; i++) {
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
