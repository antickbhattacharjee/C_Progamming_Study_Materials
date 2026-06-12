#include <stdio.h>
#include <stdlib.h>  // For atoi() function

int main(int argc, char *argv[]) {
    // Ensure that two arguments (excluding program name) are provided
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1; // Exit with error
    }

    // Convert arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculate sum
    int sum = num1 + num2;

    // Display result
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

