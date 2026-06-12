#include <stdio.h>

int add(int x, int y) {  // Function Definition
    return x + y;
}

int main() {
    int a = 10, b = 20;
    int result = add(a,b);
    printf("Sum: %d", result);  // Function Call
    return 0;
}
