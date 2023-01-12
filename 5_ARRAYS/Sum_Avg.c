#include <stdio.h>
void main ( )
{
    int marks[5],sum = 0,i;
    float avg;
    for(i=0;i<5;i++)
    {
    scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
    sum=sum+marks[i];
    }
    avg=sum/5;
    printf("The sum = %d.\nThe Avg = %f.",sum,avg);
}