#include<stdio.h>
#include<stdlib.h>

int *getting_values()
{
    int i;
    int *ptr=(int *)malloc(3*sizeof(int));
    for(i=0;i<3;i++)
    {
        printf("'\n Enter the integer:");
        scanf("%d",ptr+i);
    }
return ptr;
}

int main()
{
    int i,n=0;
    int *ptr=getting_values();
    for(i=0;i<3;i++)
    {
        n+=*(ptr+i);
    }
    printf("\n total:%d",n);
    free(ptr);
    ptr=NULL;
    return 0;
}


