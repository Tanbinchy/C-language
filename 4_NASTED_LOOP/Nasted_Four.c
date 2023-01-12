#include <stdio.h>
int main()
{
    int row, col, n;
    printf("Enter the value of n= ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
       for(row=1; row>=1; row++)
        {
            printf(" ");
        }
        for (col = n; col >= row; col--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// *****
//  ****
//   ***
//    **
//     *
// #include <stdio.h>
// int main()
// {
//     int row, col, n;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = n; row >= 1; row--)
//     {
//        for(col=1; col<=n-row; col++)
//         {
//             printf(" ");
//         }
//         for (col = 1; col <= row; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // *****
// //  ****
// //   ***
// //    **
// //     *