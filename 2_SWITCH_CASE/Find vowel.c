#include <stdio.h>
main()
{
    char ch;
    printf("Enter the Charectar");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consunent");
        break;
    }
    return 0;
}