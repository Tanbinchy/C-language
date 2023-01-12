#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value:\n");
    scanf("%d%d", &a, &b);
    if (a == 0 && b == 0)
    {
        printf("Center\n");
    }
    else if (a == 0 && (b>0 || b<0))
    {
       printf("Y Okkho\n");
    }
    else if ((a>0 || a<0) && b == 0)
    {
     printf("X okkho\n");
    }
    else if(a > 0 && b > 0)
    {
        printf("1st Quadrant\n");
    }
    else if(a < 0 && b > 0)
    {
        printf("2nd Quadrant\n");
    }
    else if(a < 0 && b < 0)
    {
        printf("3nd Quadrant\n");
    }
    else if (a > 0 && b < 0)
    {
        printf("4th Quadrant\n");
    }
    else
    {
        printf("Nothing important\n");
    }
    return 0;
}