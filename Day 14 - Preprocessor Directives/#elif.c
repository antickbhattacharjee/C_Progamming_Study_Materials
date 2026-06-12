#include<stdio.h>
#define VALUE 10

#if VALUE < 5
    #define MESSAGE "Value is less than 5"
#elif VALUE == 10
    #define MESSAGE "Value is 10"
#else
    #define MESSAGE "Value is something else"
#endif

int main() {
    printf("%s\n", MESSAGE);
    return 0;
}

