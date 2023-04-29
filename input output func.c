 #include<stdio.h>

 int main()
 {
     int a;
     int c;
     char name[50];
     printf("\n Enter the value :");
     scanf("%d",&a);
     printf("\n A :%d",a);
     printf("\n Enter the character :");
     fflush(stdin);
     c=getchar();
     putchar(c);
     printf("\n Enter name :");
     fflush(stdin);
     gets(name);
     puts(name);
     return 0;
 }
