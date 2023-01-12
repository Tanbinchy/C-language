
// Store and print n elements in an array...

#include <stdio.h>
void main()
{
    int a[20], n, i;

    printf("Enter the array size : \n");
    scanf("%d\n", &n);

    printf("Enter the arrays : \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

// NOT DONE...