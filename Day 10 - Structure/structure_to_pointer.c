#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main() {
    struct Student s = {"John", 20};
    struct Student *ptr = &s;

    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);
    return 0;
}
