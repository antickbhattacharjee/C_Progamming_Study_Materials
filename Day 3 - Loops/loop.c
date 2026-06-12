#include<stdio.h>
int main(){
	int i;
	int number = 12;
	for(i = 1; i <= 10; i++){
		printf("%d * %d = %d \n", number, i, number*i);
	}
	return 0;
}
