#include <stdio.h>
struct customer_info
{
    char name[20];
    char order[20];
};
void main()
{
    int i;
    struct customer_info no[10];
    printf("Enter the customers info...\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter the name : ");
        scanf("%s", &no[i].name);
        printf("Enter the order : ");
        scanf("%s", &no[i].order);
        // scanf("%s%s", &no[i].name, &no[i].order);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Name : %s.\nOrder : %s.\n", no[i].name, no[i].order);
    }
}
