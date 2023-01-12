#include <stdio.h>
int main()
{
    int row, col, n, sp;
    printf("Enter the value of n= ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if ((row+col)<=n)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}