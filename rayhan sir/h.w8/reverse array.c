 #include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("how many numbers your want to reverse:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("elemnets of revers array:\n");
 for(i=n-1;i>=0;i--)
    {
        printf("%d \n",a[i]);
    }
}
