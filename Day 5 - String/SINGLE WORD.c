#include <stdio.h>

int main() {
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);  // Reads a single word (stops at space)
    
    printf("Hello, %s\n", name);
    return 0;
}
