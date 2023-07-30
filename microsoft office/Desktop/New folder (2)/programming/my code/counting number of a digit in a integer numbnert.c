#include<stdio.h>
int main ()
{
    int n,i;
    printf("enter a  number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("%d",i);
}
