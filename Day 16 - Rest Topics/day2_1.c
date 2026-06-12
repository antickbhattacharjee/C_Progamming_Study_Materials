#include<stdio.h>
#include<stdbool.h>
int main(){
	int i, n=12;
	for(i=1; i<=10; i++){
		printf("%d * %d = %d\n", n, i, n*i);
	}
	return 0;
}
/*
%d for nomarl digit
%f for float type digit, (can use as %.2f)
%s for string type value
%c for single character
%p for address
*/







/*
int main(){
	float first_number = 20;
	float second_number = 12;
	float result = first_number / second_number;
	
	printf("Addition of both number: %.2f", result);
	
	return 0;
}
*/
/*
addition -> +
substraction -> -
multiply -> *
divition -> /
reminder -> %
*/
