#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("enter how many numbers you want to print:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d ",&num[i]);
    }
    printf("displaying numbers are:");
    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);

    }

}
