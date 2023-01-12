#include<stdio.h>  
int main()  
{
  char name[40];  
  char id[4];
  int a;
  char department[40];
  
  printf("Enter Your Name : "); 
  scanf("%s",&name);  
  
  printf("Enter your id:");
  scanf("%s %d",&id ,&a);
  
  printf("Enter your department :");
  scanf("%s",&department);
  
 printf("\n");
   
   printf("Your name is:%s\n",name);
   printf("Your id is:%s %d\n",id,a);
   printf("Your department is:%s\n",department);
  return 0;   
}
