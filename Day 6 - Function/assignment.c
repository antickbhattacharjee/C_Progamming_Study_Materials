#include <stdio.h>

int inputMarks(int marks[], int numSubjects) {
	
    int total = 0;
    int i = 1;
    for(i = 1; i <= numSubjects; i++) {
        printf("Subject %d: ", i); // subject 1, subject 2
        scanf("%d", &marks[i]);
            total += marks[i];
        }
    return total;
}

float calculatePercentage(int total, int numSubjects) {
	float percentage = (total / (float)(numSubjects * 100)) * 100;
    return percentage;
}

char calculateGrade(float percentage) {
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}

int main() {
    int sub, totalMarks;
    float percentage;
    char grade;

	printf("Enter number of subject: ");
	scanf("%d", &sub);

	int marks[sub];

    totalMarks = inputMarks(marks, sub);

    percentage = calculatePercentage(totalMarks, sub);

    grade = calculateGrade(percentage);

    printf("\nTotal Marks: %d/500\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}

