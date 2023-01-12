
// Add two numbers using pointers...

#include <stdio.h>
void main()
{
    int a, b, *p1, *p2, sum;
    printf("Enter the two number : \n");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    printf("Sum = %d", sum);
}