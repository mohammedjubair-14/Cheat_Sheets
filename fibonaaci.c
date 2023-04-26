#include<stdio.h>
int main()
{
    int a=-1,b=1,c,i,n;
    printf("\n Enter the limit;");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;  //c=(-1+1)=0   //c=(1+0)=1
        a=b;    //a=1    //a=
        b=c;  //b=0
        printf("\n%d",c);
    }
    return 0;
}
