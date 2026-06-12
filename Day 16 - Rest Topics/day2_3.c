#include<stdio.h>
int main(){
	char name[50];
	printf("Enter name: ");
	gets(name);
	printf("%s", name);
	return 0;
}

// scanf is for single word
// gets for complete line
