#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);

    getchar();  // Consume the newline left by scanf

    printf("Enter your full name: ");
    gets(name);
    /*
    printf("Enter your age: ");
    scanf("%d", &age);
*/
    printf("Hello, %s\n", name);
    return 0;
}

