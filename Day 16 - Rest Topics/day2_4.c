#include<stdio.h>
int main(){
	char name[10], grade;
	int age;
	float height;
	
	printf("Enter name: ");
	gets(name);
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter height: ");
	scanf("%f", &height);
	printf("Enter grade: ");
	scanf(" %c", &grade);
	
	printf("%s \n", name);
	printf("%d \n",age);
	printf("%.2f \n",height);
	printf("%c \n",grade);
	
	
	return 0;
}
