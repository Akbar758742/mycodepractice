#include<stdio.h>
int main()
{
   long int i,sum=0,min,num[5],max;



    for(i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<5; i++)
    {
        sum=sum+num[i];

    }
    min=num[0];
    for(i=0; i<5; i++)
    {
        if(min>num[i])
            min=num[i];
    }
    max=num[0];
    for(i=0; i<5; i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
