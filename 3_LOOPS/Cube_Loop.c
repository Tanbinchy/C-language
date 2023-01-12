#include <stdio.h>
int main()
{
    int i, n, Cube;
    printf("Enter the numbers : \n");
    scanf("%d", &n);
    i = 1;
    do
    {
        Cube = (i * i * i);
        printf("The cube of %d is %d\n", i, Cube);
        i++;
    } while (i <= n);
    return 0;
}