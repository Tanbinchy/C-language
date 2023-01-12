#include <stdio.h>
void main()
{
    int i, j, a[2][5], sum = 0;
    printf("Enter the element of row and col : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe Matrix is : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("Sum : %d", sum);
}