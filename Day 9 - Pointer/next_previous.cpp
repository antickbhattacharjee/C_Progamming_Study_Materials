#include <stdio.h>
/*
int main() {
    int arr[][3] = {
					{10, 20, 30},
					{40, 50, 60}
					};
    int *ptr = *arr;

    printf("First value: %d\n", *ptr);
    ptr+=4;  
    printf("Second value: %d\n", *ptr);
    ptr--;
    printf("First value: %d\n", *ptr);
    return 0;
}
*/
int main(){
	int arr[]={10,20,30};
	int *ptr = arr;
	printf("First value: %d\n", *ptr);
    ptr++;  
    printf("Second value: %d\n", *ptr);
    ptr--;
    printf("First value: %d\n", *ptr);
    return 0;
}
