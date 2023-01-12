// #include <stdio.h>
// void sum(void); // Function declaration.
// void sum() // Function defination.
// {
//     int a, b, sum;
//     printf("Enter the values of two : ");
//     scanf("%d%d", &a, &b);
//     sum = a + b;
//     printf("Sum is %d\n", sum);
// }
// void odd_even(void); // Function declaration.
// void odd_even() // Function defination.
// {
//     int a;
//     printf("Enter the value : ");
//     scanf("%d", &a);
//     if (a % 2 == 0)
//         printf("%d is even.\n", a);
//     else
//         printf("%d is odd.\n", a);
// }
// void main() // Main function.
// {
//     sum();      // Function calling.
//     sum();      // Function calling.
//     odd_even(); // Function calling.
//     odd_even(); // Function calling.
// }

// OR

#include <stdio.h>
int sum(int a, int b); // Function declaration.
int sum(int a, int b)  // Function defination.
{
    int sum;
    sum = a + b;
    printf("Sum is %d\n", sum);
}
int main() // Function defination.
{
    sum(4,6); // Function calling.
    sum(4,8); // Function calling.
    return 0;
}

// OR

#include <stdio.h>
void sum(void); // Function declaration.
void sum() // Function defination.
{
    int a, b, sum;
    printf("Enter the values of two : ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Sum is %d\n", sum);
}
void main() // Main function.
{
    sum();      // Function calling.
    sum();      // Function calling.
    odd_even(); // Function calling.
    odd_even(); // Function calling.
}