#include<stdio.h>
int main ()
{
    int num,r,temp,sum=0,fact,i;

    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        fact=1;
        for(i=1; i<=r; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;

    }
    if (sum==num)
        printf(" %d the number is strong numbr",num);
    else
        printf(" %d the numebr is not stronf numbr",num);

}
