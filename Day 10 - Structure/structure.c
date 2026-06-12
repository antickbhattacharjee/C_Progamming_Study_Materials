#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;

    s1.age = 20;
    s1.marks = 85.5;
    strcpy(s1.name, "John Doe");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);
    printf("Name: %s\n", s1.name);

    return 0;
}

/*
int main() {
    struct Student s1 = {"Mark Alice", 22, 90.0};
    struct Student s2 = {"John Doe", 25, 85.0};

    printf("Name: %s |", s1.name);
    printf("Age: %d |", s1.age);
    printf("Marks: %.2f\n", s1.marks);
    printf("Name: %s |", s2.name);
    printf("Age: %d |", s2.age);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
*/

/*
int main(){
	struct Student s1;
	printf("Enter name: ");
	gets(s1.name);
	printf("Age: ");
	scanf("%d", &s1.age);
	printf("%s", s1.name);
	printf("\n %d", s1.age);
	return 0;
}
*/


