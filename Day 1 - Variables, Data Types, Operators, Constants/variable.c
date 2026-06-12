#include <stdbool.h>
#include<stdio.h>
int main(){
	char name[20] = "Rupam Adak";
	int age = 23;
	float height = 5.95;
	char grade = 'A';
	bool license = true;
	printf("Name is : %s \n", name);
	printf("Age is : %d \n", age);
	printf("Height is : %.2f \n", height);
	printf("Grade is : %c \n", grade);
	printf("Return value : %d", license);
	return 0;
}

// data_type variable_name = data;
// int age = 23 (integer)
// float height = 5.95 (float)
// double number = 2.4678356728 (double)
// char grade = 'A' (character)
// char name[10] = "Rupam" (whole string)
// bool license = true (boolean) true/false
// "\n" for changing line
// %d for digit (1,45,2643...etc)
// %f for float values {%.1f represents 2.5, %.2f represents 3.33...it continues}
// %c for characters (a-z, A-Z)
// %s for whole string ("Rupam")
/* 
	In case of boolean data return, if it is "true" always return 1,
	if it is "false" then returns 0
	for printing boolean value should use "%d"
*/

/*
Array is a contigious memory location storage
*/






