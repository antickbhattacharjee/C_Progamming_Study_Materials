#include<stdio.h>
int main(){
	int number, original, reminder, reversed=0;			
	printf("Enter number: ");
	scanf("%d", &number);	//1331
	original = number;
	printf("Number is: %d\n", original);//1331
	
	while(number!=0){
		reminder = number % 10;		//1331%10=1->	133%10=3->	13%10=3->	1%10=1
		reversed = reversed * 10 + reminder;//0*10+1=1->	1*10+3=13->	13*10+3=133->133*10+1=1331
		number = number / 10;	//1331/10=133->	133/10=13->	13/10=1->	1/10=0
	}
	printf("Reversed value: %d\n", reversed);
	
	if(original == reversed){
		printf("number is palindrome\n");
	}
	else{
	printf("not palindrome");
	}
	return 0;
}



/*
number for input, 
original to save the number permanently
reminder to calculate reminder values
reversed is for saving the number after add reminder value
*/
