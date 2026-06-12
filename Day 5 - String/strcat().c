#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Let's'";
    char str2[] = " Start";
    char str3[] = " C++";

	strcat(str1, str2);
    strcat(str1, str3); // Concatenates str2 to str1	

    printf("Concatenated String: %s\n", str1);
    return 0;
}

