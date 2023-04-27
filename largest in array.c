#include<stdio.h>
int main()
{
    int i,n,t,a[100];
    printf("\n Enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the integers:");
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=1;i<n;i++)
    {
        if(t<a[i])
            t=a[i];
    }
    printf("\n The greatest number in an array:%d",t);
    return 0;
}
