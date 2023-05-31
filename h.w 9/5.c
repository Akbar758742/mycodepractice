#include<stdio.h>
int main()
{
    int a[10],n,i,start,end;
    printf("how many numbers your want to reverse:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("elements of array:\n");
    for(i=start; i<end; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("start index");
    scanf("%d",&start);
    printf("end index");
    scanf("%d",&end);
    printf("elemnets of revers array:\n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d \n",a[i]);
    }
}

