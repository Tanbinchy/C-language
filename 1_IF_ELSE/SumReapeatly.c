#include <stdio.h>
int main()
{
    int a, b, c, d;
    while (1)
    {
        printf("Enter the Values of a,b : \n");
        scanf("%d%d", &a, &b);
        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
        printf("Press 1 to sum again.\nPress anything to exit.");
        scanf("%d", &d);
        if (d == 1)
            continue;
        else
            printf("Thanks");
        exit(0);
    }
    return 0;
}