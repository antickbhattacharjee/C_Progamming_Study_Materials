#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student students[3] = {
        {"Alice", 22, 90.0},
        {"Bob", 21, 85.5},
        {"Charlie", 23, 88.0}
    };
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n",
               students[i].name, students[i].age, students[i].marks);
    }
    return 0;
}
