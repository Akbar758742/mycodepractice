#include<stdio.h>
int main()
{
    int r,num1,num2,n1,n2,gcd;
    printf("enter two number to determine their gcd:");
    scanf("%d%d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    gcd=n1;
    printf("the gcd of two given number %d and %d is %d",num1,num2,gcd);

}
