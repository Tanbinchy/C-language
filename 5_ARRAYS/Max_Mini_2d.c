#include <stdio.h>
void main()
{
    int a[3][3], i, j, max = -32768, mini = 32768;
    printf("Enter elements.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < mini)
                mini = a[i][j];
        }
    }
    printf("\nMaximum=%d\nMinimum=%d", max, mini);
}