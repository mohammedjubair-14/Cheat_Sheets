//DOUBLE POINTER
//POINTER 2 POINTER

#include<stdio.h>
int main()
{
    int a=10,*p;
    int **q;

    p=&a;
    printf("\n value of a       :%d",a);
    printf("\n Address of a     :%d",&a);
    printf("\n Value of p       :%d",p);
    printf("\n Address of p     :%d",&p);
    printf("\n DEREFRENCING     :%d",*p);

    printf("\n ______________________________");
    q=&p;
    printf("\n value of p            :%d",p);
    printf("\n Address of p          :%d",&p);
    printf("\n Value of q            :%d",q);
    printf("\n Address of q          :%d",&q);
    printf("\n  **Q DEREFRENCING     :%d",**q);

    return 0;
}
