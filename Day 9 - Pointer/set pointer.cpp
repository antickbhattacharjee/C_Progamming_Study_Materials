#include <stdio.h>

int main() {
    int a = 10;
    int *temp = &a;  
	
	printf("Address of a: %p\n", a);
	printf("Value of a: %d\n", a);
    printf("Address of temp: %p\n", temp);
    printf("Value of a using pointer: %d\n", *temp);  

    return 0;
}
