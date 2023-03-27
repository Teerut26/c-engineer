#include <stdio.h>
#include <string.h>

int main()
{
    char day[20];
    char short_day[4];

    printf("Enter day: ");
    scanf("%s", day);

    strncpy(short_day, day, 3);
    short_day[3] = '\0';

    printf("%s\n", short_day);

    return 0;
    
}
