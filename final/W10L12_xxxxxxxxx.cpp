#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char ch;
    int count = 0;

    // Open the file
    file = fopen("C.txt", "r");

    // Read the characters from the file and count the alphabetic characters
    while ((ch = fgetc(file)) != EOF)
    {
        if (isalpha(ch))
        {
            count++;
        }
    }

    // Close the file
    fclose(file);

    // Output the result
    printf("NumberofaAtozZ = %d\n", count);

    return 0;
}
