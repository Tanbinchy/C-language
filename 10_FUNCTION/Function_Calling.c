
// Call by values.

// #include <stdio.h>
// int fun(int, int);
// int fun(int a, int b)
// {
//     a = 5;
//     b = 7;
//     printf("a=%d\nb=%d\n", a, b);
//     return 0;
// }
// int main()
// {
//     int a=7;
//     int b=5;
//     printf("a=%d\nb=%d\n", a, b);
//     fun (a,b);
//     return 0;
// }

// Call by reference.

#include <stdio.h>
int fun(int*, int*);
int fun(int* a, int* b)
{
    *a = 5;
    *b = 7;
    printf("a=%d\nb=%d\n", *a, *b);
    return 0;
}
int main()
{
    int a=7;
    int b=5;
    fun (&a,&b);
    printf("a=%d\nb=%d\n", a, b);
    return 0;
}
