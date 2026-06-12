#include <stdio.h>

int main() {
    int choice;

    printf("Enter your choice (1-4):\n");
    printf("1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thursday\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Today is Monday\n");
            break;
        case 2:
            printf("Today is Tuesday\n");
            break;
        case 3:
            printf("Today is Wednesday\n");
            break;
        case 4:
            printf("Today is Thursday\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
