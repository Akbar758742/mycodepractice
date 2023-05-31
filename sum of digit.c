#include<stdio.h>
int main()
{
    while(1)
    {


        int temp,num,r,sum=0;
        printf("enter an integer number:");
        scanf("%d",&num );
        temp=num;

        while(temp!=0)
        {


            r=temp%10;
             temp=temp/10;
            sum=sum+r;

        }
        printf("the sum of the number is %d\n",sum);}
    }
