#include <stdio.h>
void fibonacciSeries(int n, int a, int b) {
    if (n == 0) { //	base case
        return;
    }
    printf("%d ", a);
    fibonacciSeries(n - 1, b, a + b);
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Series up to %d terms: \n", terms);
    if (terms >= 1) {
        fibonacciSeries(terms, 0, 1);
    }
    printf("\n");
    return 0;
}


/*
0,1,1,2,3,5....
*/
