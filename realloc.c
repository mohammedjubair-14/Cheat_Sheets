#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *ptr=(int *)malloc(3*sizeof(int));

    if(ptr==NULL)
    {
        printf("\n memory not available");
        exit(1);
    }
    for(i=0;i<3;i++)
    {
        printf("\n Enter the integer:");
        scanf("%d",ptr+i);
    }
    ptr=(int *)realloc(ptr,5*sizeof(int));

    for(i=3;i<5;i++)
    {
        printf("\n Enter the another 2 nos:");
        scanf("%d",ptr+i);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
