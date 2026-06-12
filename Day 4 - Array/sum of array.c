#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += numbers[i];
    }
    
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}

