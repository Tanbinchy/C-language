// Some declaration of pointer...

// int a = 10, *p1 = &a;
// OR
// int a = 10;
// int *p = &a;
// OR
// int a = 10;
// int* p;
// p = &a;#include <stdio.h>

// NO 1

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

// NO 2

// #include <stdio.h>
// void main()
// {
//     int a = 10, b = 20, *p1, *p2;
//     p1 = &a;
//     p2 = p1;
//     printf("%d %d %d", a, *p1, *p2); //Execute same value by different types...
// }

// NO 3 : Pointer to pointer (Double pointer)...

// #include <stdio.h>
// void main()
// {
//     int a = 10;
//     int *p1 = &a;
//     int **p2 = &p1; //Double pointer...
//     printf("%d %d %d", a, *p1, **p2); //Execute same value by different types.
// }

// NO 4 : Addition of pointer...

// #include <stdio.h>
// void main()
// {
//     int a[5] = {10, 20, 30, 40, 50};
//     int *p = &a[0];
//     int *q = &a[3];
//     printf("Value of a0 is : %d\n", *p);
//     printf("Address of a0 is : %d\n", p);
//     p = p + 1;
//     printf("Value of a1 is : %d\n", *p);
//     printf("Address of a1 is : %d\n", p);
//     p = p + 2;
//     printf("Value of a2 is : %d\n", *p);
//     printf("Address of a2 is : %d\n", p);
//     p = p + 3;
//     printf("Value of a3 is : %d\n", *p);
//     printf("Address of a3 is : %d\n", p);
//     p = p + 4;
//     printf("Value of a4 is : %d\n", *p);
//     printf("Address of a4 is : %d\n", p);
//     q = q + 1; //Important line.
//     printf("Value of a is : %d\n", *q);
//     printf("Address of a is : %d\n", q);
// }

// NO 5 : Subtraction of Pointer...

// #include <stdio.h>
// void main()
// {
//     int a[5] = {10, 20, 30, 40, 50};
//     int *p = &a[0];
//     int *q = &a[3];
//     printf("Value of a0 is : %d\n", *p);
//     printf("Value of a3 is : %d\n", *q);
//     printf("p-q = %d\n", p-q);
//     printf("q-p = %d\n", q-p);
//     p = p + 1;
//     printf("Value of a0 is : %d\n", *p);
//     printf("Value of a3 is : %d\n", *q);
//     printf("p-q = %d\n", p-q);
//     printf("q-p = %d\n", q-p);
// }

// NO 6 : Increment and decrement...

#include <stdio.h>
void main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = &a[3];
    printf("Value of a is : %d %d\n", * p++,* p++);
    printf("Value of a is : %d %d\n", * ++p,* ++p);
    printf("Value of a is : %d %d\n", * p--,* p--);
    printf("Value of a is : %d %d\n", * --p,* --p);
}
