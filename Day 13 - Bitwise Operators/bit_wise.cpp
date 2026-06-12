#include <stdio.h>

int main() {
    int a = 5, b = 3;
    
    // AND operator
    printf("a & b = %d\n", a & b); // 0101 & 0011 = 0001 -> 1

    // OR operator
    printf("a | b = %d\n", a | b); // 0101 | 0011 = 0111 -> 7

    // XOR operator
    printf("a ^ b = %d\n", a ^ b); // 0101 ^ 0011 = 0110 -> 6

    // NOT operator (only for a)
    printf("~a = %d\n", ~a); // ~0101 = 1010 -> -6 (in 2's complement representation)

    // Left shift operator
    printf("a << 1 = %d\n", a << 1); // 0101 << 1 = 1010 -> 10

    // Right shift operator
    printf("a >> 1 = %d\n", a >> 1); // 0101 >> 1 = 0010 -> 2

    return 0;
}

