#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Calculate the number of elements
    int i;
    for (i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }
    return 0;
}
