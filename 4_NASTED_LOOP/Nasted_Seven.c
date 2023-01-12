#include <stdio.h>
int main()
{
    int row, col, n;
    printf("Enter the value of n= ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for(col=1; col<row; col++)
        {
            printf(" ");

        }
        for (col = 1; col <= ((n-row)*2)+1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// *********
//  *******
//   *****
//    ***
//     *
// 
// OR
// 
// #include<stdio.h>
// int main ()
// {
//     int n, row , col;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     for(row=n; row >= 1; row--)
//     {
//         for(col=1; col<=n-row; col++)
//         {
//         printf(" ");
//         }
//         for(col=1; col<=(2*row)-1; col++)
//         {
//         printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // *********
// //  *******
// //   *****
// //    ***
// //     *