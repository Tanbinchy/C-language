
// Add numbers using call by reference...

// NOT DONE

#include <stdio.h>
void main()
{
    int a, b, *p1, *p2, sum;
    printf("Enter the two number : \n");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (*p1 > *p2)
        printf("%d is maximum.", *p1);
    else
        printf("%d is maximum.", *p2);
}