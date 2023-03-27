#include <stdio.h>

int main()
{
    int num1, num2, num3, median;

    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Enter num3: ");
    scanf("%d", &num3);

    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3))
    {
        median = num1;
    }
    else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3))
    {
        median = num2;
    }
    else
    {
        median = num3;
    }

    printf("Median = %d\n", median);

    return 0;
}
