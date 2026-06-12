#include <stdio.h>
#include <string.h>
union Data {
    int age;
    float height;
    char name[20];
};
int main() {
    union Data data;
    data.age = 10;
    printf("data.age = %d\n", data.age);
    data.height = 220.5;
    printf("data.geight = %.1f\n", data.height);
    strcpy(data.name, "Antick");
    printf("data.name = %s\n", data.name);
    printf("data.age = %d\n", data.age);
    return 0;
}




/*

Feature 			struct									union
Memory				Separate memory for each member			Shared memory for all members
Size				Sum of sizes of all members				Size of the largest member
Use Case			Store multiple values at once			Store one value from multiple types

*/




