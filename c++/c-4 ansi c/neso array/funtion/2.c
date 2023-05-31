#include<stdio.h>

int add(int c,int d)
{
    return (c+d);
}
int main()
{
    int sum,c,d;
    scanf("%d%d",&c,&d);
    sum=add(c,d);
    printf("%d",sum);

}
