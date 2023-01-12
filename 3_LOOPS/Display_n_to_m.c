#include <stdio.h>
int main()
{
    printf("Display n T0 m : \n");
    int i, n, m;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter m : ");
    scanf("%d", &m);
    for (i = n; i <= m; i++)
    {
        printf("%d ", i);
    }
    return 0;
}