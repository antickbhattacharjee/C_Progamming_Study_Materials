#include<stdio.h>
// Want to create user define function to get square root mathametically without using pow() function
// We will use binary search method to find the square root of a number
float square_root(float number) {
    float low = 0, high = number, mid;
    while (high - low > 0.00001) { // precision of 5 decimal places
        mid = (low + high) / 2;
        if (mid * mid < number) {
            low = mid;
        } else {
            high = mid;
        }
    }
    return mid;
}
int main() {
    float number;
    printf("Enter a number to find its square root: ");
    scanf("%f", &number);
    if (number < 0) {
        printf("Cannot compute square root of a negative number.\n");
        return 1;
    }
    float result = square_root(number);
    printf("The square root of %.2f is approximately %.5f\n", number, result);
    return 0;
}