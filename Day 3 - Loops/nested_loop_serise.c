#include <stdio.h>

int main() {
    int n, num, i;
    int largest_odd, lowest_even;
    int odd_found = 0, even_found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);

        if(num % 2 == 0) { 
            if(!even_found || num < lowest_even) {
                lowest_even = num;
                even_found = 1;
            }
        } 
		else {  
            if(!odd_found || num > largest_odd) {
                largest_odd = num;
                odd_found = 1;
            }
        }
    }

    if (odd_found)
        printf("Largest odd number: %d\n", largest_odd);
    else
        printf("No odd numbers entered.\n");

    if (even_found)
        printf("Lowest even number: %d\n", lowest_even);
    else
        printf("No even numbers entered.\n");

    return 0;
}
