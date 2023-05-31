#include<stdio.h>
int main()
{
    int a[7]={1,3,4,4,5,7,8};
    int i;
    for(i=0;i<7;i++)
    {
        printf("%d",a[i]);

    }
    printf("\n");
    for(i=6;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
