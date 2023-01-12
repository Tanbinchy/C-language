#include <stdio.h>
int main()
{
  int Maths, Phy, Chem, Total, Total2;
  printf("Enter the mark:\n");
  scanf("%d%d%d", &Maths,&Phy,&Chem);
  Total=Maths+Phy+Chem;
  Total2=Phy+Chem;
  if (Maths >= 65 && Phy >= 55 && Chem >= 50 && (Total>=190 || Total2>=140))
    printf("You are admitted\n");
  else
    printf("You are not admitted\n");
  return 0;
}