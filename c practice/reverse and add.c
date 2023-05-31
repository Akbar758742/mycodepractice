#include<stdio.h>
int main()
{
    int n,i,sum,r,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(sum==n)
        printf("palindrome");
}
