#include <stdio.h>
int main()
{
    char any;
    printf("Enter the char : ");
    scanf("%c", &any);
    if(any=='a','e','i','o','u' && any=='A','E','I','O','U')
    printf("Voweln");
    else
    printf("Cons");
    return 0;
}