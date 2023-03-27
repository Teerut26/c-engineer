#include <stdio.h>

void delta_to_wye()
{
    double R1, R2, R3, RA, RB, RC;

    printf("----- Delta to Wye ----\n");
    printf("Enter R1: ");
    scanf("%lf", &R1);
    printf("Enter R2: ");
    scanf("%lf", &R2);
    printf("Enter R3: ");
    scanf("%lf", &R3);

    RA = (R1 * R2) / (R1 + R2 + R3);
    RB = (R1 * R3) / (R1 + R2 + R3);
    RC = (R2 * R3) / (R1 + R2 + R3);

    printf("RA = %.3lf\n", RA);
    printf("RB = %.3lf\n", RB);
    printf("RC = %.3lf\n", RC);
    printf("-------------------\n");
}

void wye_to_delta()
{
    double RA, RB, RC, R1, R2, R3;

    printf("----- Wye to Delta ----\n");
    printf("Enter RA: ");
    scanf("%lf", &RA);
    printf("Enter RB: ");
    scanf("%lf", &RB);
    printf("Enter RC: ");
    scanf("%lf", &RC);

    R1 = (RA * RB + RB * RC + RC * RA) / RB;
    R2 = (RA * RB + RB * RC + RC * RA) / RC;
    R3 = (RA * RB + RB * RC + RC * RA) / RA;

    printf("R1 = %.3lf\n", R1);
    printf("R2 = %.3lf\n", R2);
    printf("R3 = %.3lf\n", R3);
    printf("-------------------\n");
}

int main()
{
    int menu_choice;

    printf("*******************\n");
    printf("Main Menu\n");
    printf("*******************\n");
    printf("1. Delta to Wye\n");
    printf("2. Wye to Delta\n");
    printf("3. Exit\n");
    printf("*******************\n");
    printf("Enter Menu: ");
    scanf("%d", &menu_choice);

    switch (menu_choice)
    {
    case 1:
        delta_to_wye();
        break;
    case 2:
        wye_to_delta();
        break;
    default:
        printf("**** Thank You ****");
        break;
    }

    return 0;
}
