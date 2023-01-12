#include <stdio.h>
int main()
{
    int X;
    printf("Enter the value of X: ");
    scanf("%d", &X);
    switch (X)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 DAYS");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 DAYS");
        break;
    case 2:
        printf("The 2nd month is a February and have 28 days.\n");
        printf("In leap year The February month  Have 29 days.\n");
        break;
    default:
        printf("ERROR MONTH");
        break;
    }
    return 0;
}