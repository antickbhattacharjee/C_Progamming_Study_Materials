#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30};
    printf("last digit in array: %d\n", numbers[2]);
    printf("%d \n",sizeof(numbers));
    printf("%d\n",sizeof(numbers[0]));
    return 0;
}

/*
variable -> single data, memory location name
array -> contigious memory location, store set of data
location -> 0, 1, 2, 3, 4.....
1D Array[5]
2D Array[3][3]
3D Array[2][3][3]
*/
