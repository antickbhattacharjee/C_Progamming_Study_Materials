#include <stdio.h>

// Function Definition
void greet(char n[10]) {
    printf("Hello %s, Welcome to C Programming!\n", n);
}

int main() {
	char name[10]="Antick";
    greet(name);  // Function Call
    return 0;
}
