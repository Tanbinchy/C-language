#include<stdio.h>
int main ()
{
  int a,b,c;
  printf ("Input the value:");
  scanf ("%d%d", &a,&b);
  c=a-b;
  if (c>=0)
  printf ("Profit is %d",c);
  else 
  printf ("Loss is %d",c*(-1));
  return 0;
}