#include <stdio.h>

int main()
{
    int n;
    char text;
    printf("Enter text : ");
    scanf("%d%c",&n,&text);
    for (int i = 0; i < n; i++)
    {
        printf("%c",text);
    }
    
    return 0;
}