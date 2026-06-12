#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    int first = 0, second = 1;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d, ", first);  // Print the current term

        int next = first + second; // Calculate the next term
        first = second;            // Update first
        second = next;           // Update second
    }
    printf("\n"); // Add a newline at the end

    return 0; // Indicate successful execution
}
