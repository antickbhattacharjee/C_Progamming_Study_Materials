#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
	int i;
    struct Student students[2] = {
        {"Mark Alice", 22, 90.0},
        {"John Doe", 25, 85.0}
    };
    for (i = 0; i < 2; i++) {
        printf("Name: %s | ", students[i].name);
        printf("Age: %d | ", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}
