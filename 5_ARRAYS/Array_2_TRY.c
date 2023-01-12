// Take an array of integer data type of size 5.
// scan the values from the user.

#include <stdio.h>
int main()
{
    int A[5], i, Even_sum = 0, Odd_sum = 0;
    printf("Enter the value of A: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
        if (A[i] % 2 == 0)
            Even_sum = Even_sum + A[i];
        else
            Odd_sum = Odd_sum + A[i];
    }
    printf("\nEven_sum is %d\n", Even_sum);
    printf("Odd_sum is %d", Odd_sum);
    return 0;
}
