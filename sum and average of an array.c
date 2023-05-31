#include<stdio.h>
int main()
{
    int i,num[100],sum=0,n;
    printf("how many numbers:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {// printf("enter numbers:\n");
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
     sum=sum+num[i];
    }
    printf(" the sum is %d\n",sum);
    printf("the average is %.2f\n",(float)sum/n);
}
