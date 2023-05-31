#include<stdio.h>
int main()
{
    int a[50],i,n,temp,start=0,end=n-1;
    printf("enter numbers:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    while(start<end)
    {
      temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;

    }
    printf("%d",a[i]);



}
