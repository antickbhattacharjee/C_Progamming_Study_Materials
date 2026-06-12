#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *ptr = arr;
	int i;
    for (i = 0; i < 9; i++) {
        printf("%d \n", *(ptr + i));
        printf("Address of a: %p\n", (ptr + i));
    }

    return 0;
}
