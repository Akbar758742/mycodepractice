#include<stdio.h>
int main ()
{
    int i,initialnum,finalnum,r,temp,num,sum=0;
    printf("enter initial num:");
    scanf("%d",&initialnum);
    printf("enete final num:");
    scanf("%d",&finalnum);

    for(i=initialnum; i<=finalnum; i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if (sum==i)
        {
            printf("the armstrong number is %d\n:",i);

        }
        sum=0;
    }

}
