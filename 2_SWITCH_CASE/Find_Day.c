#include <stdio.h>
int main()
{
  int X;
  printf("Enter the value: ");
  scanf("%d", &X);
  switch (X)
  {
  case 1:
    printf("SAT");
    break;
  case 2:
    printf("SUN");
    break;
  case 3:
    printf("MON");
    break;
  case 4:
    printf("THUR");
    break;
  case 5:
    printf("WED");
    break;
  case 6:
    printf("TUES");
    break;
  case 7:
    printf("FRI");
    break;
  default:
    printf("END");
    break;
  }
  return 0;
}