#include <stdio.h>
int main() {
	int i,j,k;
    int arr[2][3][3] = {
    	{{1, 2, 3},{4, 5, 6},{7, 8, 9}},
    	{{10, 20, 30},{40, 50, 60},{70, 80, 90}},
    };
    for (i = 0; i < 2; i++) {
    	for (j = 0; j < 3; j++) {
    		for (k = 0; k < 3; k++){
    			printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
			}
    	}
	}
    return 0;
}
