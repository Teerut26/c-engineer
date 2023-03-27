#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_word(char ch)
{
    switch (ch)
    {
    case '0':
        printf("zero");
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    default:
        break;
    }
}

int main()
{
    char number[20];
    int num_length;

    // Input the number
    printf("Enter number: ");
    scanf("%s", number);

    num_length = strlen(number);

    // Convert the number into words
    for (int i = 0; i < num_length; i++)
    {
        int ch = number[i];
        print_word(ch);
        printf(" ");
    }
    printf("\n");

    return 0;
}
