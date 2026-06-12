#include <stdio.h>

void modify(int x) {
    x = 50;  // Default value
    printf("Value in function: %d\n", x);
}

int main() {
	int a=10;
	modify(a);
	printf("After modification: %d\n",a);
	printf("Enter value: ");
	scanf("%d", &a); // Update value
    printf("Value after modification: %d",a);
    return 0;
}
