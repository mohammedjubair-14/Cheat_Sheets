//triple pointer

#include<stdio.h>
int main()
{
    int a=10,*p;
    int **q;
    int ***r;

    p=&a;
    printf("\n value of a       :%d",a);
    printf("\n Address of a     :%d",&a);
    printf("\n Value of p       :%d",p);
    printf("\n Address of p     :%d",&p);
    printf("\n DEREFRENCING     :%d",*p);

    printf("\n __________________________");
    q=&p;
    printf("\n value of p            :%d",p);
    printf("\n Address of p          :%d",&p);
    printf("\n Value of q            :%d",q);
    printf("\n Address of q          :%d",&q);
    printf("\n  **Q DEREFRENCING     :%d",**q);

    printf("\n -----------------------------");

    r=&q;
    printf("\n value of q             :%d",q);
    printf("\n Address of q           :%d",&q);
    printf("\n Value of r             :%d",r);
    printf("\n Address of r           :%d",&r);
    printf("\n  ***R DEREFRENCING     :%d",***r);

    return 0;
}

