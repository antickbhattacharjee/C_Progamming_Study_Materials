#include<stdio.h>
int main() {
	char name[50];
	int age;
	float height;
	
	printf("enter name ");
	fgets(name, sizeof(name), stdin);	// read complete string
	
	scanf("%s", &name);	
	printf("enter age ");
	scanf("%d", &age);
	
	printf("enter height ");
	scanf("%f", &height);
	
	printf("Hello %s! \nYour age is %d and height is %.1f", name, age, height);
	
	return 0;
}
