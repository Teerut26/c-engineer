#include <stdio.h>

int main()
{
    char start;
    char stop;
    printf("Enter start : ");
    scanf("\n%c", &start);
    printf("Enter stop : ");
    scanf("\n%c", &stop);

    for (int i = start; i <= stop; i++)
    {
        printf("%c ", i);
    }

    return 0;
}