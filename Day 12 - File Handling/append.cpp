#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a"); // Open the file for appending

    if (file == NULL) {
        printf("Could not open file for appending\n");
        return 1;
    }

    // Append data to the file
    fprintf(file, "\nThis is an appended line.\n");

    // Close the file
    fclose(file);

    printf("Data appended to file successfully.\n");

    return 0;
}

