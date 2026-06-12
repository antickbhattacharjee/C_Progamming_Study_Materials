#include <stdio.h>
#include "myfile.h"  // Include the custom header file to use SUM macro

int main() {
    printf("Sum of 3 and 2 is %d\n", SUM(3, 2));
    return 0;
}

