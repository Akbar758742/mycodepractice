#include<stdio.h>
int main()
{
    long int i,sum=0,min,num[5],max;
    for(i=0; i<5; i++)
    {
        scanf("%ld",&num[i]);
        sum=sum+num[i];
    }

    min=max=num[0];
    for(i=0; i<5; i++)
    {
        if(min>num[i])
            min=num[i];
        if(max<num[i])
            max=num[i];
    }

    printf("max is=%ld min is=%ld",max,min);
    return 0;
}


