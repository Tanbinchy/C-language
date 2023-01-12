

// ARRAY 1 (SUM & AVG)

// #include <stdio.h>
// int main()
// {
//     int i, marks[5], sum = 0;
//     float avg;
//     printf("Enter the marks : \n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &marks[i]);
//         sum = sum + marks[i];
//     }
//     avg = sum / 5;
//     printf("The sum is : %d\n", sum);
//     printf("The avg is : %f", avg);
//     return 0;
// }

// ARRAY 2 (COUNT EVEN ODD)

// #include <stdio.h>
// void main()
// {
//     int i, a[10], evencount = 0, oddcount = 0;
//     printf("Enter the 10 num : \n");
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//         if (a[i] % 2 == 0)
//         {
//             evencount = evencount + 1;
//         }
//         else
//             oddcount = oddcount + 1;
//     }
//     printf("Number of Even are : %d\n", evencount);
//     printf("Number of Odd are : %d", oddcount);
// }

// ARRAY 3 (SUM IN 1D)

// #include <stdio.h>
// void main()
// {
//     int i, array1[5], array2[5], sum[5];
//     printf("Enter the 1st array elements : \n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &array1[i]);
//     }
//     printf("Enter the 2st array elements : \n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &array2[i]);
//     }
//     printf("Calculating the sum : \n");
//     for (i = 0; i < 5; i++)
//     {
//         sum[i] = array1[i] + array2[i];
//         printf("%d\t",sum[i]);
//     }
// }

// ARRAY 4 (SUM IN 2D)

// #include <stdio.h>
// void main()
// {
//     int i, j, a[2][5], sum = 0;
//     printf("Enter the element of row and col : \n");
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("\nThe Matrix is : \n");
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             printf("%d\t", a[i][j]);
//             sum = sum + a[i][j];
//         }
//         printf("\n");
//     }
//     printf("Sum : %d", sum);
// }

// ARRAY 5 (TRANSPOSE IN 2D)

// #include <stdio.h>
// void main()
// {
//     int i, j, a[2][5], sum = 0;
//     printf("Enter the element of row and col : \n");
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("\nThe Matrix is : \n");
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nThe Transpose Matrix is : \n");
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("%d\t", a[j][i]);
//         }
//         printf("\n");
//     }
// }

// ARRAY 6 (MAX & MINI)

// #include <stdio.h>
// void main()
// {
//     int i, a[5];
//     printf("Enter the digits : \n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int max = a[0];
//     for (i = 0; i < 5; i++)
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     printf("MAX : %d", max);
//     int mini = a[0];
//     for (i = 0; i < 5; i++)
//         if (a[i] < mini)
//         {
//             mini = a[i];
//         }
//     printf("\nMINI : %d", mini);
// }

// STRING 1 (LENGTH OF A STRING)

// #include<stdio.h>
// #include<string.h>
// void main ()
// {
//     char name[20],count;
//     printf("Enter the name : \n");
//     gets(name);
//     printf("%s",name);
//     count = strlen(name);
//     printf("\n%d",count);
// }

// STRING 2 (CONCATENATE OF TWO STRINGS)

// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char name1[20], name2[20];
//     printf("Enter the name : \n");
//     gets(name1);
//     gets(name2);
//     strcat(name1, name2);
//     printf("%s", name1);
// }

// STRUCTURE 1 (5 STUDENT INFO)

// #include <stdio.h>
// struct customer_info
// {
//     char name[20];
//     char order[20];
// };
// void main()
// {
//     int i;
//     struct customer_info no[10];
//     printf("Enter the customers info...\n");
//     for (i = 0; i < 10; i++)
//     {
//         printf("Enter the name : ");
//         scanf("%s", &no[i].name);
//         printf("Enter the order : ");
//         scanf("%s", &no[i].order);
//         // scanf("%s%s", &no[i].name, &no[i].order);
//     }
//     for (i = 0; i < 10; i++)
//     {
//         printf("Name : %s.\nOrder : %s.\n", no[i].name, no[i].order);
//     }
// }

// FACTORIAL 1

// #include<stdio.h>
// void main()
// {
//     int n,i,fact=1;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
// }

// PRIME OR NOT 1

// #include <stdio.h>
// void main()
// {
//     int n, i;
//     printf("Enter the n : ");
//     scanf("%d", &n);
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("Not prime.\n");
//             break;
//         }
//     }
//     if (i == n)
//         printf("Prime.");
// }

// FUNCTION 1 (SUM OF TWO NUM)

// #include <stdio.h>
// void sum();
// void sum()
// {
//     int a, b, sum;
//     printf("Enter the value of a,b : ");
//     scanf("%d%d", &a, &b);
//     sum = a + b;
//     printf("SUM : %d", sum);
// }
// void main()
// {
//     sum();
// }

// FUNCTION 2 (CALL BY REFERENCE)

// #include <stdio.h>
// void fun();
// void fun(int* ptr1,int* ptr2)
// {
//     *ptr1=10;
//     *ptr2=20;
// }
// void main()
// {
//     int x,y;
//     x=20;
//     y=10;
//     fun(&x,&y);
//     printf("%d\n%d",x,y);
// }

// FUNCTION 2 (CALL BY VALUE)

// #include <stdio.h>
// void fun();
// void fun(int a,int b)
// {
//     a=10;
//     b=20;
// }
// void main()
// {
//     int x,y;
//     x=20;
//     y=10;
//     fun(x,y);
//     printf("%d\n%d",x,y);
// }

// POINTER 1 (BASIC)

// #include <stdio.h>
// int main ()
// {
//     int a=10, *p1 = &a;
//     int b=20, *p2 = &b;
//     int c=30, *p3 = &c;
//     printf("Address of a = %d\n", p1);
//     printf("Address of a = %x\n", p1); // Hexa formate address...
//     printf("Address of b = %d\n", p2);
//     printf("Address of b = %x\n", p2); // Hexa formate address...
//     printf("Address of c = %d\n", p3);
//     printf("Address of c = %x\n", p3); // Hexa formate address...
//     printf("Value of a = %d\n", *p1);
//     printf("Value of b = %d\n", *p2);
//     printf("Value of c = %d\n", *p3);
//     return 0;
// }

// POINTER 2 (ADD)

// #include <stdio.h>
// void main()
// {
//     int a = 5, b = 6, sum;
//     int *p1;
//     int *p2;
//     p1 = &a;
//     p2 = &b;
//     sum = *p1 + *p2;
//     printf("SUM : %d", sum);
// }