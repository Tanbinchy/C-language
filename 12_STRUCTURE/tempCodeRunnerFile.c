#include <stdio.h>
struct student
{
    char name[20];
    int id[20];
};
void main()
{
    int i;
    struct student s[2];
    printf("Enter info of 2 students : \n");
    for (i = 0; i < 2; i++)
        scanf("%s %d", &s[i].name, &s[i].id);
    for (i = 0; i < 2; i++)
        printf("%s %d\n", s[i].name, s[i].id);
}
