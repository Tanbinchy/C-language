// Take three arrays [A,B,AB] of float data type of size 5.Scan the values of two arrays [A and B] from user.
// Now assain the summation of the two arrays to the AB.(AB[i]=A[i]+B[i]).

#include <stdio.h>
int main()
{
    int i, A[5], B[5], AB[5];
    printf("Enter the value of A: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the value of B: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &B[i]);
    }
    for (i = 0; i < 5; i++)
    {
        AB[i] = A[i] + B[i];
    }
    printf("value of AB: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", AB[i]);
    }
    printf("\n");
return 0;
}
