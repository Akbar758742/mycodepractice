#include<stdio.h>
int main ()
{
    double x;
    scanf("%lf",&x);
    double result = round(x);
    printf("the round result of round(%lf)= %lf\n",x,result);
}
