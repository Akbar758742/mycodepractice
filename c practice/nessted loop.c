#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",i);

        for(j=1; j<n; j++)
        {
            printf("%d ",n);
        }
         printf("\n");
    }


}
