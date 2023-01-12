// Take an array of integer data type of size 5.
// scan the values from the user.
// SUM OF THE EVEN NUM AND SUM OF THE ODD NUM

#include <stdio.h>
int main()
{
    int i, A[5], odd_sum = 0, even_sum = 0;
    printf("Enter the value of A: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Value of A: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
        if (A[i] % 2 == 0)
            even_sum = even_sum + A[i];
        else
            odd_sum = odd_sum + A[i];
    }
    printf("\nEVEN SUM %d\n", even_sum);
    printf("ODD SUM %d", odd_sum);
    return 0;
}
