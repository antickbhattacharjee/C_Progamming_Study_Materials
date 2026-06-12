#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) { // First condition: Positive number
        if (num % 2 == 0) { // Second condition: Even number
            printf("The number is positive and even.\n");
        } else {
            printf("The number is positive but odd.\n");
        }
    } else {
        printf("The number is negative or zero.\n");
    }

    return 0;
}

