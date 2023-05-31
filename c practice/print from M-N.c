#include<stdio.h>
int main()
{
    int m,n;
    printf("enter two number for showing all number sequentially between both numbers:");
    scanf("%d %d",&m,&n);
    printf("here are all number between %d  numbers %d:\n",m,n);
    while(m<=n)
    {

        printf("%d\n",m);
        m++;
    }

}
