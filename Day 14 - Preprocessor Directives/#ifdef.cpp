#include<stdio.h>
#define DEBUG 1
#ifdef DEBUG
    #define MESSAGE "Debugging is ON"
#endif

int main() {
    printf("%s\n", MESSAGE);
    return 0;
}

