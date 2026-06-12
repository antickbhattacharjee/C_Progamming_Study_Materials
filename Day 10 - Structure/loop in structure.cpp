#include <stdio.h>
struct Employee {
    char name[50];
    float salary;
};
int main() {
    struct Employee e[3];
    float total = 0;
    int i;
    for (i = 1; i <= 3; i++) {
        printf("Enter name of employee %d: ", i);
        scanf(" %[^\n]", e[i].name);
        printf("Enter salary of employee %d: ", i);
        scanf("%f", &e[i].salary);
        total += e[i].salary;
    }
    float avg = (total / (float) 3);
    printf("\nAverage Salary: %.2f\n", avg);
    return 0;
}

