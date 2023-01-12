// #include <stdio.h>
// int main()
// {
//     int a, b, sum = 0, n;
//     printf("Enter a,b : ");
//     scanf("%d%d", &a, &b);
//     sum = a + b;
//     printf("Sum : %d", sum);
//     printf("\nEnter 1 to Continue and 0 to exit");
//     printf("\nEnter n : ");
//     scanf("%d", &n);
//     switch (n)
//     {
//     case 1:
//         printf("Enter a,b : ");
//         scanf("%d%d", &a, &b);
//         sum = a + b;
//         printf("Sum : %d", sum);
//         break;
//     case 0:
//         printf("Home");
//         break;
//     default:
//         break;
//     }
//     return 0;
// }
#include<stdio.h>
 
int main()
{
   int a, b, c;
   char ch;
 
   while(1)
   {
      printf("Enter values of a and b\n");
      scanf("%d%d",&a,&b);
 
      c = a + b;
 
      printf("a + b = %d\n", c);
 
      printf("Do you wish to add more numbers(y/n)\n");
      scanf(" %c",&ch);
 
      if ( ch == 'y' || ch == 'Y' )
         continue;
      else
        exit(0);//Here we can put break statement instead of exit() function.
   }
 
   return 0;
}