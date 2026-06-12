#include <stdio.h>
/*
int main() {
    int a[3];
    printf("Enter value in a[0]: ");
    scanf("%d", &a[0]);
    printf("a[0] = %d", a[0]);
    return 0;
}
*/
int main() {
    int a[3], i, size= (sizeof(a)/sizeof(a[0])), sum=0;
    for (i=0; i<size; i++){
    	printf("Enter value in a: ");
    	scanf("%d", &a[i]);
    }
    for (i=0; i<size; i++){
    	printf("a[%d] = %d\n", i, a[i]);
    	sum += a[i];
    }
    printf("%d", sum);
    return 0;
}
