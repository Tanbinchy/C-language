#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a,b : ");
    scanf("%d%d", &a, &b);
    printf("Before : a = %d and b = %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter : a = %d and b = %d", a, b);
    return 0;
}