#include <stdio.h>

int main() {
    FILE *file;
    char name[20];
    int age;

    // Open the file
    file = fopen("D.txt", "r");

    // Read the contents from the file and print the names with age more than 25
    printf("Animals with age more than 25:\n");
    while (fscanf(file, "%s %d", name, &age) != EOF) {
        if (age > 25) {
            printf("%s ", name);
        }
    }
    printf("\n");

    // Close the file
    fclose(file);

    return 0;
}
