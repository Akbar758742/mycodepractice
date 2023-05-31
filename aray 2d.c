#include<stdio.h>
int main()
{
    int i,j;
    int a[3][4]= {{3,34,23,4,},{4,3.2,34,4},{5,67,85,4}};
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

