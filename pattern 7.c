#include<stdio.h>
int main ()
{
    int col,row,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" %c",row+64);
        }
        printf("\n");
    }
}
