#include <stdio.h>

int main() {
	// Open the file for reading
    FILE *file = fopen("example.txt", "r"); 

    if (file == NULL) {
        printf("Could not open file for reading\n");
        return 1;
    }

    char line[100];

    // Read the file line by line and print it
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}

