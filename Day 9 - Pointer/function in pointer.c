#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
	greet();
    void (*ptr)() = greet; 
    ptr();  
    return 0;
}
