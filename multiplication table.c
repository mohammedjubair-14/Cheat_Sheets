#include<stdio.h>
int main()
{
    int i,n,t;
    printf("\n Enter the required number table:");
    scanf("%d",&t);
    printf("\n Enter the limit:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\n %d X  %d = %d",t,i,t*i);

    }
    return 0;
}
