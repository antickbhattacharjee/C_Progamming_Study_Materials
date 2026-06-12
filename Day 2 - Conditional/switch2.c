#include <stdio.h>

int main() {
	int num1=20, num2=5;
    char choice;

    printf("Enter your choice (A-D):\n");
    printf("A. Addition\n");
    printf("B. Subtraction\n");
    printf("C. Multiplication\n");
    printf("D. Division\n");
    scanf(" %c", &choice);

    switch (choice) {
        case 'A':
        case 'a':
            printf("Result is %d\n", num1+num2);
            break;
        case 'B':
        case 'b':
            printf("Result is %d\n", num1-num2);
            break;
        case 'C':
        case 'c':
            printf("Result is %d\n", num1*num2);
            break;
        case 'D':
        case 'd':
            printf("Result is %d\n", num1/num2);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
