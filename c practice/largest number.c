#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter 1st number ");
    scanf("%d",&a);
    printf("enter 2nd number ");
    scanf("%d",&b);
    if(a>b)
        printf("large numb is:%d\n",a);
    else if(a<b)
        printf("large numb is:%d\n",b);
    else
        printf("numbers are equal");
}
