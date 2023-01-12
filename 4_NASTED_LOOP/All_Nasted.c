// #include <stdio.h>
// int main()
// {
//     int row, col, n;
//     printf("Enter the Num of n : ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= n - row; col++)
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
//     *
//    **
//   ***
//  ****
// *****
// #include <stdio.h>
// int main()
// {
//     int row, col, n, sp;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// *
// **
// ***
// ****
// *****
// #include <stdio.h>
// int main()
// {
//     int row, col, n, sp;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = row; col <= n; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// *****
// ****
// ***
// **
// *
// #include <stdio.h>
// int main()
// {
//     int row, col, n, sp;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row-1; col++)
//         {
//             printf(" ");
//         }
//         for (col = row; col <= n; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// *****
//  ****
//   ***
//    **
//     *
// #include <stdio.h>
// int main()
// {
//     int row, col, n, sp;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }
//         for (col = 1; col <= (row*2)-1; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//         *
//        ***
//       *****
//      *******
//     *********
// #include <stdio.h>
// int main()
// {
//     int row, col, n, sp;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }
//         for (col = 1; col <= row; col++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// #include <stdio.h>
// int main()
// {
//     int row, col, n, sp;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = n; row >= 1; row--)
//     {
//         for (col = 1; col <= n-row; col++)
//         {
//             printf(" ");
//         }
//         for (col = 1; col <= (2*row)-1; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// *********
//  *******
//   *****
//    ***
//     *
// #include <stdio.h>
// int main()
// {
//     int row, col, n, sp;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= n - row; col++)
//         {
//             printf(" ");
//         }
//         for (col = 1; col <= (2 * row) - 1; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (row = n - 1; row >= 1; row--)
//     {
//         for (col = 1; col <= n - row; col++)
//         {
//             printf(" ");
//         }
//         for (col = 1; col <= (2 * row) - 1; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
// #include <stdio.h>
// int main()
// {
//     int row, col, n;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = n; row >= 1; row--)
//     {
//         for (col = 1; col <= row ; col++)
//         {
//             printf("%c",64+col);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ABCDE
// ABCD
// ABC
// AB
// A
// #include <stdio.h>
// int main()
// {
//     int row, col, n;
//     printf("Enter the value of n= ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row ; col++)
//         {
//             printf("%c",64+row);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// A
// BB
// CCC
// DDDD
// EEEEE