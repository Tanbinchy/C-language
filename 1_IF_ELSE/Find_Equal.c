#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the Values of a,b : \n");
    scanf("%d%d", &a, &b);
    if (a != b)
    {
        printf("Not Equal\nAND\n");
        if (a > b)
        {
            printf("%d is largest", a);
        }
        else
        {
            printf("%d is largest", b);
        }
    }
    else
    {
        printf("%d is equal to %d", a, b);
    }
    return 0;
}