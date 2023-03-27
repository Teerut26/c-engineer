#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int count = 0;

    printf("Enter text: ");
    scanf("%s", text);

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= '0' && text[i] <= '9')
        {
            count++;
        }
    }

    printf("Numberof 0 to 9 = %d\n", count);

    return 0;
}
