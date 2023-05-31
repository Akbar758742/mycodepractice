#include<stdio.h>
int main ()
{
    int sum=0,r,n,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("the reverse number is %d",sum);
}
