#include<stdio.h>

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    Student s1 = {"Alice", 22, 90.0};

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.1f\n", s1.marks);
    return 0;
}
