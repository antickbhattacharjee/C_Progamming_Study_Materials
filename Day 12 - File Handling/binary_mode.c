#include <stdio.h>
int main() {
    FILE *file;
    int data[] = {1, 2, 3, 4, 5};
    // Open the file for writing in binary mode
    file = fopen("binaryfile.txt", "wb");
    if (file == NULL) {
        printf("Unable to open file for writing\n");
        return 1;
    }
    // Write data to the file
    fwrite(data, sizeof(int), 5, file);
    // Close the file
    fclose(file);
    // Now, read the data back from the file
    file = fopen("binaryfile.txt", "rb");
    if (file == NULL) {
        printf("Unable to open file for reading\n");
        return 1;
    }
    int readData[5];
    fread(readData, sizeof(int), 5, file);
    // Print the read data
    printf("Data read from file:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", readData[i]);
    }
    // Close the file
    fclose(file);
    return 0;
}
