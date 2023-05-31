#include<stdio.h>
int main()
{
    int N,M,L,G;
    printf("Enter  one of two numbers and its lmc and gcd :");
    scanf("%d%d%d",&M,&L,&G);
    //we the product of two numbers is the product of lcm and gcd
    N=(L*G)/M;
    printf("the another number N is %d",N);
}
