#include<stdio.h>
int main()
{
    int n,col,row;
    printf("enter N:");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("akbar ");
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("akbar ");
        }
        printf("\n");
    }
}

