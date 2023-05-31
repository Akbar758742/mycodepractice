#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    int *p1,*p2;
    p1=&a,p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swaping\n");
    printf("a=%d\nb=%d",a,b);
}
