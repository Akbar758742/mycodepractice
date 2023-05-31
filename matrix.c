#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    printf("enter elements for a matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("a=");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("enter elements for b matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("b=");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
