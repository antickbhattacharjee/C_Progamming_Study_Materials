#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char destination[20];
    strcpy(destination, src); // Copy src to destination

    printf("Copied String: %s\n", destination);
    return 0;
}

