#include<stdio.h>
int main()
{
    int n,sum=0,a[100],i;
    printf("how many nubers your want to sum:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf(" the sum is %d",sum);

}
