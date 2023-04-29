#include<stdio.h>

struct student
{
    char *name;
    int age;
    float per;
};


void total()
{
    struct mark
    {
        int m1,m2,m3;
    }s;
    s.m1=50;
    s.m2=75;
    s.m3=100;
    printf("\n mark 1  :%d",s.m1);
    printf("\n mark 2  :%d",s.m2);
    printf("\n mark 3  :%d",s.m3);
}


int main()
{
    struct student v;
    v.name="vismaya";
    v.age=19;
    v.per=70.5;

    printf("\n name         :%s",v.name);
    printf("\n age          :%d",v.age);
    printf("\n percentage   :%f",v.per);
    total();
    return 0;
}
