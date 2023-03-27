#include "stdio.h"
#include "string.h"
typedef struct
{
    char id[10];
    char name[50];
    int age;
} student;
int main()
{
    student sd[5] =
        {{"67091430", "Sopon Phumeechanya", 18},
         {"67091431", "Harry Potter", 25},
         {"67091432", "Captain Marval", 85},
         {"67091433", "Thor Rangnarok", 40},
         {"67091434", "Tony Stark", 30}};
    char id_input[10];
    printf("Enter ID : ");
    scanf("%s", id_input);

    int found = 0;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(id_input, sd[i].id) == 0)
        {
            printf("Name of %s = %s\n", sd[i].id, sd[i].name);
            printf("Age of %s = %d", sd[i].id, sd[i].age);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("ID Error");
    }
}