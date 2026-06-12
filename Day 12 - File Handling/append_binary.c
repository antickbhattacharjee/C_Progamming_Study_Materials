#include <stdio.h>
int main() {
	FILE *file = fopen("binaryfile.txt", "ab");
	
    if (file == NULL) {
        printf("Unable to open file for append\n");
        return 1;
    }
    int data[] = {6, 7, 8, 9, 0};
    fwrite(data, sizeof(int), 5, file);
    fclose(file);
    file = fopen("binaryfile.txt", "rb");
    if (file == NULL) {
        printf("Unable to open file for reading\n");
        return 1;
    }
    int readData[10];
    fread(readData, sizeof(int), 10, file);
    printf("Data read from file:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", readData[i]);
    }
    fclose(file);
    return 0;
}

