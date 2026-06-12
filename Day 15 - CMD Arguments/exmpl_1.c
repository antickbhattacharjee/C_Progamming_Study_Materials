#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Total number of arguments: %d\n", argc);
    
    // Loop through and print all arguments
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}

