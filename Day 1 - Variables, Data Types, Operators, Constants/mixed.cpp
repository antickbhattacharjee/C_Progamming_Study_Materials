#include <stdio.h>
struct Subject {
    char name[30];
    int marks;
    char grade;
};

int main() {
    int n, i, total = 0;
    float average;
    char avgGrade;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    struct Subject subjects[n]; // data insert

    for (i = 0; i < n; i++) {
        printf("Enter name of subject %d: ", i + 1);
        scanf("%s", subjects[i].name);

        printf("Enter marks for %s: ", subjects[i].name);
        scanf("%d", &subjects[i].marks);

        subjects[i].grade = (subjects[i].marks >= 90) ? 'A' :
                            (subjects[i].marks >= 80) ? 'B' :
                            (subjects[i].marks >= 70) ? 'C' :
                            (subjects[i].marks >= 60) ? 'D' : 'F';

        total += subjects[i].marks;
    }

    average = total / (float)n;
    avgGrade = (average >= 90) ? 'A' :
               (average >= 80) ? 'B' :
               (average >= 70) ? 'C' :
               (average >= 60) ? 'D' : 'F';

    printf("\nYou entered:\n");
    for (i = 0; i < n; i++) {
        printf("Subject: %s\tMarks: %d\tGrade: %c\n", subjects[i].name, subjects[i].marks, subjects[i].grade);
    }

    printf("Average Marks: %.2f\tGrade: %c\n", average, avgGrade);

    return 0;
}

