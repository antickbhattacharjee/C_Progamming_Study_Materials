#include <stdio.h>
void printTable(int num, int i) {				//int -> 1,2,3
    if (i > 10) {								//char -> a,b,c,d
        return;	//	base case								// float -> 2.45,67.23
    }											//void -> return none
    printf("%d x %d = %d\n", num, i, num * i);	//bool -> true, false
    printTable(num, i + 1);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);//12

    
    printf("Multiplication Table of %d:\n", num);
    printTable(num, 1); 
    
    return 0;
}
