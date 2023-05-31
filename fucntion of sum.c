//this a simple program of sum
// date:2023-16-02

#include<stdio.h>

int add(int,int);
//int n=40;
int main()
{
    int n= 40 ,m=20,sum;
    sum=add(n,m);
    printf("the sum is %d",sum);

    return 0;
}
int add(int a,int b)
{
    return(a+b);
}
