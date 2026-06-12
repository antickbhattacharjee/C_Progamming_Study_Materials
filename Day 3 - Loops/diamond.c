#include <stdio.h>
int main() {
    int i, star, space;
    int rows = 5;  // number of rows in upper half (including middle)
    // Upper half
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars with space
        for (star = 1; star <= i; star++) {
            printf("* ");
        }
        printf("\n");
    }
    // Lower half
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars with space
        for (star = 1; star <= i; star++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
