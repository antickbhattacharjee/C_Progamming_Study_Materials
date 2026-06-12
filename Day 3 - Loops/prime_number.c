#include<stdio.h>
#include<stdbool.h>
int main(){
	int num=15, i;
	bool is_prime=true;
	
	for(i=2; i<num; i++){
		if(num%i==0){
			is_prime=false;
			break;
		}
		printf("%d\n",i);
	}
	
	if(is_prime){
		printf("Prime");
	}
	else{
		printf("Not prime");
	}
	return 0;
}
