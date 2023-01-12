
//Write a C program to find the sum of first 10 natural numbers?

#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("Sum of the First 10 natural number is : \n");
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("Sum=%d", sum);
    return 0;
}

/* 

OR (WHILE)

#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("Sum of the First 10 natural number is : \n");
    i = 1; 
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum=%d", sum);
    return 0;
}

OR (DO WHILE)

#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("Sum of the First 10 natural number is : \n");
    i = 1; 
    do
    {
        sum = sum + i;
        i++;
    }while (i <= 10);
    printf("Sum=%d", sum);
    return 0;
}

*/