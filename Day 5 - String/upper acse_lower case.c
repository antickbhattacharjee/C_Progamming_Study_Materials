#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";

    strlwr(str); // Convert to lowercase
    printf("Lowercase: %s\n", str);

    strupr(str); // Convert to uppercase
    printf("Uppercase: %s\n", str);

    return 0;
}

