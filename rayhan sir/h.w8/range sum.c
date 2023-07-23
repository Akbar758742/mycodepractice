#include<stdio.h>
int main()
{
    int n,sum=0,a[100],i,start,end ;

    printf("how many nubers your want to sum:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("choose the range:\n");
    printf("start index:");
    scanf("%d",&start);
    printf("end index:");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        sum=sum+a[i];
    }
    printf(" the sum is %d",sum);

}

