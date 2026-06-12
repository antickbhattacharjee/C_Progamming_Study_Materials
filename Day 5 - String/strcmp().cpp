#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Apple";
    char str2[20] = "Mango";

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0) //-1
        printf("String 1 is smaller\n");
    else //+1
        printf("String 1 is greater\n");

    return 0;
}
