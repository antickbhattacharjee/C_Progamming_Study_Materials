#include <stdio.h>

int main() {
	// Open the file for writing
    FILE *file = fopen("example.txt", "w"); 

    if (file == NULL) {
        printf("Could not open file for writing\n");
        return 1;
    }

    // Writing data to the file
    fprintf(file, "Hello, this is a file handling example.\n");
    fprintf(file, "This is the second line.\n");
//	fprintf(file, "Try write again.\n");
	
    // Close the file
    fclose(file);

    printf("Data written to file successfully.\n");

    return 0;
}

