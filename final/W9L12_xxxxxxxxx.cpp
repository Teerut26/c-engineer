#include <stdio.h>

int main()
{
    FILE *file;
    int num = 0;
    double sum = 0;
    int count = 0;
    double average = 0;

    // Open the file
    file = fopen("B.txt", "r");

    // Read the numbers from the file and calculate the sum and count
    while (fscanf(file, "%d", &num) != EOF)
    {
        sum += num;
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate the average
    average = sum / count;

    // Output the result
    printf("Average of B = %.6lf\n", average);

    return 0;
}
