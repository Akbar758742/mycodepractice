#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;

    }
    printf("the sum of the digit of this number is %d",sum);
}
