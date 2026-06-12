#include <stdio.h>
// Recursive function to calculate factorial
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    } 
	else {
        return n * fact(n - 1);  // Recursive case
    }
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);//5

    printf("Factorial of %d is: %d\n", num, fact(num));
    return 0;
}
/*
fact(5)
  = 5 * fact(4)
  = 5 * (4 * fact(3))
  = 5 * (4 * (3 * fact(2)))
  = 5 * (4 * (3 * (2 * fact(1))))
  = 5 * (4 * (3 * (2 * 1)))
  = 5 * (4 * (3 * 2))
  = 5 * (4 * 6)
  = 5 * 24
  = 120
*/
