#include <stdio.h>
int main()
{
  char anything;
  printf("Enter the value:\n");
  scanf("%c", &anything);
  if ((anything >= 'a' && anything <= 'z') || (anything >= 'A' && anything <= 'Z'))
  {
    printf("This is a character.\n");
  }
  else if (anything >= '0' && anything <= '9')
  {
    printf("This is a number.\n");
  }
  else
  {
    printf("This is special character.\n");
  }
  return 0;
}