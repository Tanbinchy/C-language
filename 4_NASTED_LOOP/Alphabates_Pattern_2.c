#include <stdio.h>
int main()
{
    int row, col, n;
    printf("Enter the value of n= ");
    scanf("%d", &n);
    for (row = 5; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%c", 64+col);
        }
        printf("\n");
    }
    return 0;
}
// ABCDE
// ABCD
// ABC
// AB
// A