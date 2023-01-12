#include <stdio.h>
int main()
{
    int a, sum = 0;
    for (a = 1; a <= 10; a++)
    {
        printf("%d\n", a);
        sum = sum + a;
    }
    printf("The sum is : %d\n", sum);
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int i,sum=0;
//     i=1;
//     while(i<=10)
//     {
//         printf("%d\n", i);
//         sum=sum+i;
//         i++;
//     }
//     printf("sum is %d", sum);
//     return 0;
// }