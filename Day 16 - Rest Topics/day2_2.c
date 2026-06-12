#include<stdio.h>

int main(){
	int num1, num2, result;
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	
	printf("Numbers are num1: %d, num2: %d \n", num1, num2);
	
	result = num1 + num2;
	printf("Result is : %d", result);
	
	return 0;
}

// & -> assign
