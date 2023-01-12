#include <stdio.h>
void main()
{
    int a[500], i, n;

    printf("Enter the value of n : \n");
    scanf("%d", &n);
    printf("The values are...\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];  // Suppose..
    int mini = a[0]; // Suppose..

    for (i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("Maximun is %d.\n", max);

    for (i = 1; i < n; i++)
    {
        if (mini > a[i])
            mini = a[i];
    }
    printf("Minimum is %d.\n", mini);
}