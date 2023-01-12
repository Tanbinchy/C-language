
// Write a program in C to display the first 10 natural numbers?

#include <stdio.h>
int main()
{
    printf("First 10 natural number is down below: \n");
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf ("%d\n" , i);
    }
    return 0;
}

/* OR

#include <stdio.h>
int main()
{
    printf("First 10 natural number is down below: \n");
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf ("%d\t" , i);
    }
    return 0;
}

OR (WHILE)

#include <stdio.h>
int main()
{
    printf("First 10 natural number is down below: \n");
    int i = 1;
    while (i <= 10)
    {
        printf ("%d\t" , i);
        i++;
    }
    return 0;
}

OR (DO WHILE)

#include <stdio.h>
int main()
{
    printf("First 10 natural number is down below: \n");
    int i = 1;
    do {
        printf ("%d\t" , i);
        i++;
    } while (i <= 10);
    return 0;
}
*/