#include <stdio.h>
main()
{
    int a, b, sum, sub, mult, div;
    char operator;
    printf("Enter the operator : \n");
    scanf("%c", &operator);
    printf("Enter the value : \n");
    scanf("%d%d", &a, &b);
    switch (operator)
    {
    case '+':
        sum = a + b;
        printf("Result : %d", sum);
        break;
    case '-':
        sub = a - b;
        printf("Result : %d", sub);
        break;
    case '*':
        mult = a * b;
        printf("Result : %d", mult);
        break;
    case '/':
        div = a / b;
        printf("Result : %d", div);
        break;
    default:
        printf("Result : Wrong input");
        break;
    }
    return 0;
}