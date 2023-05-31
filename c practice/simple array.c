#include<stdio.h>
int main()
{
    int ar[1000],i,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    printf("%d",sum);
    return 0;

}
