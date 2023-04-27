#include<stdio.h>
int main()
{
    int n1,n2,n3,ln;
    printf("\n Enter the 3 numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
   //nt largest_number;
    ln=n1;
if(n2>ln)
    n2=ln;
if(n3>ln)
    n3=ln;
printf("\n largest number:",ln);
return 0;
}
