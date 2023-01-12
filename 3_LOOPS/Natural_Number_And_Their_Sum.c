
// Write a program in C to display n terms of natural number and their sum?

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the first numbers : \n");
    scanf("%d", &n);
    i = n;
    do
    {
        sum = sum + i;
        i--;
    } while (i >= 1);
    printf("Sum=%d", sum);
    return 0;
}

/*

OR

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the first numbers : \n");
    scanf("%d", &n);
    i = 1;
    do
    {
        sum = sum + i;
        i++;
    }while (i <= n);
    printf("Sum=%d", sum);
    return 0;
}

*/