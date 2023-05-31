#include<stdio.h>
int main()
{


    int n,i,b,sum=0,a[3],count=0;
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if (sum=sum+a[i]>=2)
        {
            count++;
        }
    }
    printf("%d",count);


    return 0;



}

