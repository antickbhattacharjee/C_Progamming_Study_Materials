#include<stdio.h>
#define VERSION "2.0.0"
#ifndef VERSION
    #define VERSION "1.0.0"
#endif

int main() {
    printf("Version: %s\n", VERSION);
    return 0;
}

