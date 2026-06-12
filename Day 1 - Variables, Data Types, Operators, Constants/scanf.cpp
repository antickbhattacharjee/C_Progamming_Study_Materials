/*include<stdio.h>
int main(){
	char name[40];
	printf("Enter student name: ");
    scanf(" %[^\n]", name);
    printf("Name: %s\n", name);
	return 0;
}
*/
#include<stdio.h>
int main(){
	int a[3][3], i, j ;
	
	for(i=0; i<(sizeof(a)/sizeof(a[0])); i++){
		for(j=0; j<(sizeof(a[0])/sizeof(a[0][0])); j++){
			printf("enter the array elements:");
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<(sizeof(a)/sizeof(a[0])); i++){
		for(j=0; j<(sizeof(a[0])/sizeof(a[0][0])); j++){
			printf("a[%d][%d]= %d\n",i,j,a[i][j]);
		}
	}
	return 0;
	
}
