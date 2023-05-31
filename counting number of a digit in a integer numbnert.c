#include<stdio.h>
int main ()
{
    int n,i=0;
    printf("enter a  number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++ ;
    }
    printf(" total digit of this number %d",i);
}
