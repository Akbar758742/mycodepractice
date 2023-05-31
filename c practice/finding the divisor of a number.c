#include<stdio.h>
int main ()
{
    int n,i=1;
    printf("enter a integer number:");
    scanf
    ("%d",&n);
    printf("all the divisor of %d is\n",n);
    for(i;i<=n;i++)
    {
        if((n%i)==0)
        {
            printf("%d\n",i);
        }
    }
}
