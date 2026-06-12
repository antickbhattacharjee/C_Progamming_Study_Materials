#include <stdio.h>

// Function 1: Adds two numbers (Call by Value)
int add(int x, int y) {
    return x + y;
}

// Function 2: Swaps two numbers (Call by Value)
void swap(int a, int b) {
    int temp = a; //a=5, b=3, temp=5
    a = b; //a=3
    b = temp; //b=5
    printf("Inside swap function: num1 = %d, num2 = %d\n", a, b);
}

int main() {
    int num1 = 10, num2 = 20;

    // Call Function 1
    int sum = add(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    // Call Function 2
    printf("Before Swap (in main): num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("After Swap (in main): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

