#include<stdio.h>
int main()//additon,subtraction,multiplication,division,remainder.
{
    int a,b;//a=10,b=8;
    printf("enter value of a and b sequentially\n");
    scanf("%d%d",&a,&b);
    printf("%d %d %d %d %d %d %d %d ",a,a+5,a-2,a-b,b+67,a*b,a/b,a%b);
    return 0;

}
