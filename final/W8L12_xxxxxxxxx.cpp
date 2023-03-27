#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double determinant_3x3(int matrix[3][3])
{
    double det = 0;
    
    det = ((matrix[0][0] * matrix[1][1] * matrix[2][2]) +
          (matrix[0][1] * matrix[1][2] * matrix[2][0]) +
          (matrix[0][2] * matrix[1][0] * matrix[2][1])) -
          ((matrix[0][2] * matrix[1][1] * matrix[2][0]) +
            (matrix[0][1] * matrix[1][0] * matrix[2][2]) +
            (matrix[0][0] * matrix[1][2] * matrix[2][1]));
    
    return det;
}

int main()
{
    FILE *file;
    int matrix[3][3];
    double det;

    // Open the file
    file = fopen("A.txt", "r");

    // show content of file
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fscanf(file, "%d", &matrix[i][j]);
        }
    }
    
    // show content of matrix

    printf("Matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // calculate determinant

    det = determinant_3x3(matrix);

    // show determinant

    printf("Determinant = %lf\n", det);

    return 0;
}
