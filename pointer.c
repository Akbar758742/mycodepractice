#include<stdio.h>
int main()
{
    int a,b,sum;
scanf("%d%d",&a,&b);
    int *p1,*p2;
    p1=&a;
    p2=&b;
    sum=*p1 + *p2   ;
    printf("%d",sum);
}
