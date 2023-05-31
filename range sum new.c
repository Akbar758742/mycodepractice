#include<stdio.h>

int main()
{
    int sum = 0,start,n, end,t,i;

    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&start);
    scanf("%d",&end);
    for (i=start; i<=end; i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    sum=0;
    }


    return 1;
}


