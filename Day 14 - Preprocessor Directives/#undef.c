#include<stdio.h>
#define SQUARE(x) (x * x)

int main() {
    printf("Square of 5: %d\n", SQUARE(5));
    #undef SQUARE
 //   #define SQUARE(x) (x + x)
    printf("Square of 5: %d\n", SQUARE(5));
    return 0;
}
