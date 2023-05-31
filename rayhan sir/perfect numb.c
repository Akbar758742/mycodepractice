#include<stdio.h>
int main()
{
    int i,sum=0,num,rem;
    printf("enter a num:");
    scanf("%d",&num);
    for(i=1; i<num; i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }

    }

    if(sum==num)
    {
        printf("the number is perfect num");
    }
    else
        printf("this is not perfect num");
}
